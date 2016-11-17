//  Declarations for an AST calculator
//  From "flex & bison", fb3-1, by John Levine
//  Adapted by Brian Malloy

#include <string>
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
private:
  Ast *left;
  Ast *right;
};

class AstNumber : public Ast {
public:
  AstNumber(char nodetype, int num, double n) : Ast(nodetype, num), number(n) {} 
  virtual ~AstNumber() {}
  virtual double getNumber() const { return number; }
private:
  double number;
};

double eval(Ast*);   // Evaluate an AST
void treeFree(Ast*); // delete and free an AST 
void makeGraph(const Ast *a, std::fstream& output);
std::string makeOperatorNode(const Ast *a, std::fstream& output);
//std::string makeNumberNode(int num, const Ast *a, std::fstream& output);