#include "tableManager.h"
#include<iostream>
TableManager& TableManager:: getInstance(){
  static TableManager instance;
  return instance;
}

void TableManager::pushTable(){
  //std::cout<<"Pushed Table\n";
  tableList.push_back(new SymbolTable);
  //std::cout<<tableList.size()<<std::endl;
}
void TableManager::popTable(){
  //std::cout<<"Popped table\n";
  //Maybe delete symbolTable instance here to avoid memory leaks? 
  tableList.pop_back();
}
SymbolTable* TableManager::getCurrentTable(){
  //std::cout<<"Number of tables ="<<tableList.size()<<std::endl;
  return tableList.back();
}
bool TableManager::ifInGlobal(){
  //std::cout<<"Number of tables ="<<tableList.size()<<std::endl;
  if(tableList.size() == 1){
    //std::cout<<"In global\n";
    return true;
  }
  else{
    return false;
  }
}
SymbolTable* TableManager::getTableAt(int i){
  return tableList[i];
}
Ast* TableManager::getFuncEntry(std::string name){
  //std::vector<int>:: reverse_iterator rit = tableList.rbegin();
  for(int i = tableList.size()-1;i>=0; i--){
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

bool TableManager::ifFuncEntryExists(std::string name){
    //std::cout<<"Inside function funcEntryExists\n";
    for(int i = tableList.size()-1;i>=0; i--){
    //std::cout<<i<<std::endl;
    if(tableList[i]->ifExists(name)){
      return true;
    }
    else{
      std::cout<<"Could not find function\n";
      return false;
    }
  }
  return false;
}

bool TableManager::ifExists(std::string name){
  for(int i=tableList.size()-1;i>=0;i--){
    //std::cout<<"Table: "<<i<<std::endl;
    //tableList[i]->displayTable();
    if(tableList[i]->ifExists(name)){
      return true;
    }
  }
  return false;
}

Ast* TableManager::lookUp(std::string n, int nodeNum){
  for(int i=tableList.size()-1;i>=0;i--){
    if(tableList[i]->ifExists(n)){
      return tableList[i]->lookUp(n, nodeNum);
    }
  }
  return NULL;
} 

void TableManager::modifyEntry(double v, std::string n){
  for(int i=tableList.size()-1;i>=0;i--){
    if(tableList[i]->ifExists(n)){
      tableList[i]->modifyEntry(v, n);
      return;
    }
  }
}
   
