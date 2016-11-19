#include<string>
#include<iostream>
#include "symbolTable.h"

SymbolTable& SymbolTable:: getInstance(){
  static SymbolTable instance;
  return instance;
}
void SymbolTable:: insert(double v, std::string n, std::string t){
  entryList[n] = new Entry(v,n,t);
  //entryList.insert(std::pair<std::string, Entry*>(n, new Entry(v,n,t)));
}
Ast* SymbolTable::lookUp(std::string n, int nodeNum){
  if(entryList[n]->getType() == "Int"){
    return new AstInt('I', nodeNum, entryList[n]->getName(), (int)entryList[n]->getValue());
  }
  else if( entryList[n]->getType() == "Float"){
    return new AstFloat('F', nodeNum, entryList[n]->getName(), (int)entryList[n]->getValue());
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
