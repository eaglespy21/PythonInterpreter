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
  Ast* getFuncEntry(std::string name); //Scan's through current scope and all the scopes previous to this one for func entry
  bool ifFuncEntryExists(std::string name);
  bool ifExists(std::string name); 
  Ast* lookUp(std::string n, int nodeNum);
private:
  TableManager(const TableManager&);
  TableManager& operator=(const TableManager&);
  TableManager(): tableList(){
    tableList.push_back(new SymbolTable());
  }
  std::vector<SymbolTable*>tableList;
};  
  
  
