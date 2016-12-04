#include "tableManager.h"
#include<iostream>
TableManager& TableManager:: getInstance(){
  static TableManager instance;
  return instance;
}

void TableManager::pushTable(){
  tableList.push_back(new SymbolTable);
}
void TableManager::popTable(){
  //Maybe delete symbolTable instance here to avoid memory leaks? 
  tableList.pop_back();
}
SymbolTable* TableManager::getCurrentTable(){
  return tableList.back();
}
bool TableManager::ifInGlobal(){
  if(tableList.size() == 1){
    return true;
  }
  else{
    return false;
  }
}
Ast* TableManager::getFuncEntry(std::string name){
  //std::vector<int>:: reverse_iterator rit = tableList.rbegin();
  for(int i = tableList.size();i>0; i--){
    if(tableList[i]->ifExists(name)){
      //return true;
      return tableList[i]->getFuncEntry(name);
    }
    else{
      std::cout<<"Could not find function\n";
      return NULL;
    }
  }
  return NULL;
}
