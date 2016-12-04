#include<vector>
#include "symbolTable.h"
class TableManager{
public:
  static TableManager& getInstance();
  void pushTable();
  void popTable();
  //void getEntry();
  //void insertEntry();
  SymbolTable* getCurrentTable();
  bool ifInGlobal();
  Ast* getFuncEntry(std::string name);
private:
  TableManager(const TableManager&);
  TableManager& operator=(const TableManager&);
  TableManager(): tableList(){
    tableList.push_back(new SymbolTable());
  }
  std::vector<SymbolTable*>tableList;
};  
  
  
