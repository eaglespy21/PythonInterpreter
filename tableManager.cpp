#include "tableManager.h"

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
