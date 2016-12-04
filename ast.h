//  Declarations for an AST calculator
//  From "flex & bison", fb3-1, by John Levine
//  Adapted by Brian Malloy

#include <string>
#include<iostream>
#include<vector>
class TableManager; //RMD
extern void yyerror(const char*);
extern void yyerror(const char*, const char);

class Ast {
public:
  Ast(int n, int num_arg) : nodetype(n), nodeNumber(num_arg) {}
  virtual ~Ast() {}
  char getNodetype() const { return nodetype; }
  int getNodeNumber() const { return nodeNumber; }
  virtual Ast* getLeft() const { //throw std::string("No Left");
				return NULL; 
 			       }
  virtual Ast* getRight() const { //throw std::string("No Right");
				return NULL; }
  virtual double getNumber() const { //throw std::string("No Number");
				return NULL; }
  virtual std::string getName() const { return "No Name";}
  virtual std::string getDataType() const { return "No DataType";}
  virtual void setNumber(double a) const {}
  virtual std::vector<Ast*>* getNodes() { return NULL; }
private:
  char nodetype;
  int nodeNumber;
};

class AstNode : public Ast {
public:
  AstNode(char nodetype, int num, Ast* l, Ast* r) : 
    Ast(nodetype, num), left(l), right(r) 
  {}
  virtual ~AstNode() {}
  virtual Ast* getLeft() const  { return left; }
  virtual Ast* getRight() const { return right; }
  virtual std::string getName() const { return "No Name";}
  virtual std::string getDataType() const { return "No DataType";}
private:
  Ast *left;
  Ast *right;
};

class AstNumber : public Ast {
public:
  AstNumber(char nodetype, int num, double n) : Ast(nodetype, num), number(n) {} 
  virtual ~AstNumber() {}
  virtual double getNumber() const { return number; }
  virtual std::string getDataType() const { return "Number"; }
private:
  double number;
};

class AstInt: public Ast{
public:
  AstInt(char nodetype, int num, std::string name_arg, int n): Ast(nodetype, num), name(name_arg), number(n) {}
  virtual ~AstInt() {}
  virtual double getNumber() const { return number; } //Have to cast this to int while calling
  virtual std::string getName() const { return name; }
  virtual std::string getDataType() const { return "Int"; }
  virtual void setNumber(double a){ number = (int)a;}
private:
  std::string name;
  int number;
};

class AstFloat: public Ast{
public:
  AstFloat(char nodetype, int num, std::string name_arg, double n): Ast(nodetype, num), name(name_arg), number(n) {}
  virtual ~AstFloat() {}
  virtual double getNumber() const { return number; }
  virtual std::string getName() const { return name; }
  virtual std::string getDataType() const { return "Float"; }
  virtual void setNumber(double a){ number = a;}
private:
  std::string name;
  double number;
};

class AstSuiteNode: public Ast{
public:
  AstSuiteNode(char nodetype, int num, std::string name_arg, std::vector<Ast*>* nodes_arg): Ast(nodetype, num), name(name_arg), nodes(nodes_arg) {}
  virtual ~AstSuiteNode() {}
  virtual double getNumber() const { return -99; }
  virtual std::string getName() const {return name;}
  virtual std::string getDataType() const{ return "Suite";}
  virtual void setNumber(double a) {}
private:
  std::string name;
  std::vector<Ast*>* nodes;
};

class AstAssignmentNode:public Ast{
public:
  AstAssignmentNode(char nodetype, int num, std::string name_arg, std::string type_arg):  Ast(nodetype, num), name(name_arg), type(type_arg){}//, rhs(val) {}
  virtual ~AstAssignmentNode() {}
  virtual double getNumber() const { return -99;}
  virtual std::string getName() const { return name;}
  virtual std::string getDataType() const { return type;} 
  virtual void setNumber(double a) {}
private:
  std::string name;
  std::string type;
  //Ast* rhs; //We might need to create store the node rhs here or maybe not since they point to the same thing
};
class AstCallNode:public Ast{
public:
  AstCallNode(char nodetype, int num, std::string name_arg):  Ast(nodetype, num), name(name_arg), type("CallNode"){}
  virtual ~AstCallNode() {}
  virtual double getNumber() const { return -99;}
  virtual std::string getName() const { return name;}
  virtual std::string getDataType() const { return type;}
  virtual void setNumber(double a) {}
private:
  std::string name;
  std::string type;
};



double eval(Ast*);   // Evaluate an AST
void treeFree(Ast*); // delete and free an AST 
void makeGraph(const Ast *a, std::fstream& output);
std::string makeOperatorNode(const Ast *a, std::fstream& output);
//std::string makeNumberNode(int num, const Ast *a, std::fstream& output);
