#include<string>
#include<map>
#include "ast.h"
class SymbolTable{
public:
  static SymbolTable& getInstance();
  void insert(double v, std::string n, std::string t);
  Ast* lookUp(std::string n, int nodeNum);
private:
  SymbolTable(const SymbolTable&);
  SymbolTable& operator=(const SymbolTable&);
  SymbolTable(): entryList(){
  }
  class Entry{
  public:
    Entry(){} //This is required if you want to insert elements into a map using map[] operator, if default constructor not present use insert and std::pair
    Entry(double v, std::string n, std::string t): value(v), name(n), type(t) {}
    Entry& operator=(const Entry&);
    ~Entry() {}
    double getValue() const;
    std::string getName() const;
    std::string getType() const;
  private:
    double value;
    std::string name;
    std::string type;
  };
  std::map<std::string, Entry*> entryList;
}; 
