// Companion source code for "flex & bison", published by O'Reilly
// helper functions for fb3-1
#include<iostream>
#include<stdlib.h>
#include<fstream>
#include"ast.h"
#include<string>
#include<sstream>
#include<math.h>
#include "tableManager.h" //RMD
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
  Ast* suiteTemp;
  std::vector<Ast*>* tempVec;
  //std::vector<Ast*>::iterator it;
  TableManager& tableMan = TableManager::getInstance();
  switch( a->getNodetype() ) {
  //case 'K': v = a->getNumber(); break;
  case 'I': v = (int)a->getNumber(); break;
  case 'F': v = (double)a->getNumber(); break;
  case '+': v = eval(a->getLeft()) + eval(a->getRight()); break;
  case '-': v = eval(a->getLeft()) - eval(a->getRight()); break;
  case '*': v = eval(a->getLeft()) * eval(a->getRight()); break;
  case '/':     
            if(eval(a->getRight())!= 0) {
              if(a->getLeft()->getDataType() == "Float" ||a->getRight()->getDataType() == "Float"){
                v = (float)eval(a->getLeft()) / (float)eval(a->getRight()); 
              }
              else{
                v = floor(eval(a->getLeft())/eval(a->getRight()));
              }
            }else{
              std::cout<<"Division by Zero\n";
            }
            break;
  case 'D':
            if(eval(a->getRight())!= 0) {
              v = floor((float)eval(a->getLeft()) / (float)eval(a->getRight()));
            }else{
              std::cout<<"Division by Zero\n";
            }
            break;
  case '%': v = fmod(eval(a->getLeft()), eval(a->getRight())); break;
  case 'E': v = pow( eval(a->getLeft()), eval(a->getRight())); break;
  case 'M': v = -eval(a->getLeft()); break;
  case 'P': 
            v = eval(a->getLeft());
            std::cout<<v<<std::endl;
            break;
  case 'Z': std::cout<<"Division by zero\n";break;
  case 'S': 
            std::cout<<"Evaluate suite Node\n";
            tempVec = a->getNodes();
            //eval(tempVec->at(2));
            for( int i = 0;i<tempVec->size();i++){
              std::cout<<i<<tempVec->at(i)<<std::endl;
              eval(tempVec->at(i));
            }
            break;
  case 'A':
          //Evaluate assignment node
          tableMan.getCurrentTable()->insert(eval(a->getLeft()), a->getName(), a->getDataType());
          break;
  case 'C': 
          //Evaluate Call Node
          suiteTemp = tableMan.getCurrentTable()->getFuncEntry(a->getName());
          tableMan.pushTable();
          eval(suiteTemp);
          tableMan.popTable();
          //The not found string in the getFuncEntry function
          break;
  default: //std::cout << "NameError: identifier is not defined"//"internal error: bad node "
           //     << a->getNodetype() << std::endl; 
           break;
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
  case 'D':
    treeFree(a->getRight());

   // one subtrees
  case 'M':
  case 'P':
    treeFree(a->getLeft());

   //no subtree
  case 'K':
  case 'Z':
  case 'I':
  case 'F':
    delete a;
    break;

  default: //std::cout << "internal error: bad node "
           //     << a->getNodetype() << std::endl;;
           //Make sure you delete suite node at the end of program, and assignment nodes and call nodes
           break;
  }
}

