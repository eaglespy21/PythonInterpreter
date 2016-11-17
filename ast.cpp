// Companion source code for "flex & bison", published by O'Reilly
// helper functions for fb3-1
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include"ast.h"
#include<string>
#include<sstream>
#include<math.h>

namespace patch
{
    template < typename T > std::string to_string( const T& n )
    {
        std::ostringstream stm ;
        stm << n ;
        return stm.str() ;
    }
}
//int count = 0;

double eval(Ast *a) {
  double v = 0;
  switch( a->getNodetype() ) {
  case 'K': v = a->getNumber(); break;
  case '+': v = eval(a->getLeft()) + eval(a->getRight()); break;
  case '-': v = eval(a->getLeft()) - eval(a->getRight()); break;
  case '*': v = eval(a->getLeft()) * eval(a->getRight()); break;
  case '/': v = eval(a->getLeft()) / eval(a->getRight()); break;
  case '%': v = fmod(eval(a->getLeft()), eval(a->getRight())); break;
  case 'E': v = pow( eval(a->getLeft()), eval(a->getRight())); break;
  case 'M': v = -eval(a->getLeft()); break;
  case 'Z': v = eval(a->getLeft()); break;
  default: std::cout << "internal error: bad node "
                << a->getNodetype() << std::endl;;
  }
  return v;
}

void makeGraph(const Ast *a, std::fstream& output){
  if(a){
    //Construct the node
    std::string nodeL = "";
      nodeL = makeOperatorNode(a, output); //Why are we not checking if this is a number or not? 
    if(a->getLeft()){
      output << "   " << nodeL<<"->"<<a->getLeft()->getNodeNumber()<<std::endl;
      makeGraph( a->getLeft(), output);
    }
    if(a->getRight()){
      output << "   " <<nodeL<< "->"<<a->getRight()->getNodeNumber()<<std::endl;
      makeGraph( a->getRight(), output);
    }
  }
}

std::string makeOperatorNode(const Ast *a, std::fstream& output){
  //count++;
  std::string labelValue = ""; 
  if(a->getNodetype() == 'K'){
    labelValue = patch::to_string(a->getNumber());
  }
  else if(a->getNodetype() == 'M'){
    labelValue = "-";
  }
  else{
    labelValue = std::string(1, a->getNodetype());
  }   
  std::string nodeNum = patch::to_string(a->getNodeNumber());//= "struct";//+patch::to_string(count); //to_string
  std::string s = nodeNum + " [label=\""+labelValue+"\"];";// = nodeNum+" [shape=record, label=\"<f0>"+std::string(1,c)+"\"];";
  output<< s<<std::endl;
  //std::cout<<s<<std::endl;
  return nodeNum;
}
void treeFree(Ast *a) {
  switch(a->getNodetype()) {
   // two subtrees
  case '+':
  case '-':
  case '*':
  case '/':
  case 'E':
  case '%':
    treeFree(a->getRight());

   // one subtrees
  case 'M':
    treeFree(a->getLeft());

   //no subtree
  case 'K':
  case 'Z':
    delete a;
    break;

  default: std::cout << "internal error: bad node "
                << a->getNodetype() << std::endl;;
  }
}
