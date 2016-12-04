#include<string>
#include<iostream>
#include "symbolTable.h"
#include "ast.h" //RMD
  #include<vector>
  #include<stdlib.h>
  #include<cstdlib>

/*
SymbolTable& SymbolTable:: getInstance(){
  static SymbolTable instance;
  return instance;
}
*/
void SymbolTable:: insert(double v, std::string n, std::string t){
  //std::cout<<"In symtab="<<v<<std::endl;
  entryList[n] = new Entry(v,n,t);
  //entryList.insert(std::pair<std::string, Entry*>(n, new Entry(v,n,t)));
}
void SymbolTable:: insertFuncDef(std::string name, Ast* suite_arg){
  entryList[name] = new FuncEntry(name, suite_arg);
}

void SymbolTable:: modifyEntry(double v, std::string n){
  entryList[n]->setValue(v); //Write setter
}
Ast* SymbolTable::lookUp(std::string n, int nodeNum){
  if(entryList[n]->getType() == "Int"){
    return new AstInt('I', nodeNum, entryList[n]->getName(), (int)entryList[n]->getValue());
  }
  else if( entryList[n]->getType() == "Float"){
    return new AstFloat('F', nodeNum, entryList[n]->getName(), (double)entryList[n]->getValue());
  }
  else if(entryList[n]->getType() == "Func"){
    return entryList[n]->getSuiteNode();
  }
  else{
    std::cout<<"Wrong dataType\n";
    return NULL;
  }
}
bool SymbolTable::ifExists(std::string n){
  if(entryList.find(n) == entryList.end()){
    return false;
  }
  else{
    return true;
  }
}
/*
SymbolTable::Entry& SymbolTable::Entry::operator=(const SymbolTable::Entry& ent){
  if(*this == ent){
    return this;
  }
  else{
    name = ent.getName();
    type = ent.getType();
    value = ent.getValue();
    return this;
  }
} 
*/ 
std::string SymbolTable::Entry::getName() const{
  return name;
}
std::string SymbolTable::Entry::getType() const{
  return type;
}
double SymbolTable::Entry::getValue() const{
  return value;
}
void SymbolTable::Entry::setValue(double v){
  value = v;
}
Ast* SymbolTable::FuncEntry::getSuiteNode() const{
  return suite;
}
Ast* SymbolTable::getFuncEntry(std::string n){
  std::cout<<"Inside getFuncEntry\n";
  return entryList[n]->getSuiteNode();
}

