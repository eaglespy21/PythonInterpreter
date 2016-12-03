#include<string>
#include<map>
#include<vector>
#include "ast.h"
class SymbolTable{
public:
  //static SymbolTable& getInstance();
  void insert(double v, std::string n, std::string t);
  void insertFuncDef(std::string name, std::vector<Ast*>*);
  Ast* lookUp(std::string n, int nodeNum);
  //std::vector<Ast*>* getFuncEntry(std::string n) const;
  bool ifExists(std::string n);
  void modifyEntry(double v, std::string n);
  SymbolTable(): entryList(){
  }
private:
  SymbolTable(const SymbolTable&);
  SymbolTable& operator=(const SymbolTable&);
//  SymbolTable(): entryList(){
//  }
  class Entry{
  public:
    Entry(){} //This is required if you want to insert elements into a map using map[] operator, if default constructor not present use insert and std::pair
    Entry(double v, std::string n, std::string t): value(v), name(n), type(t) {}
    Entry& operator=(const Entry&);
    ~Entry() {}
    double getValue() const;
    std::string getName() const;
    std::string getType() const;
    void setValue(double v);
    //std::vector<Ast*>* getFuncBody() const{ return NULL;}
  private:
    double value;
    std::string name;
    std::string type;
  };
  class FuncEntry: public Entry{
  public:
  FuncEntry(){}
  FuncEntry(std::string funcName, std::vector<Ast*>* rhs): Entry(0,funcName,"func") { nodes = new std::vector<Ast*>(); nodes = rhs; }
  FuncEntry operator=(const FuncEntry&);
  ~FuncEntry() {}
  //std::vector<Ast*>* getFuncBody() const;
  private:
    std::vector<Ast*>* nodes;
  };
  std::map<std::string, Entry*> entryList;
}; 
