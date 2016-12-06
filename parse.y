// Generated by transforming |cwd:///parser/2.7.2.y| on 2016-10-15 at 17:11:42 +0000
%{
  #include <iostream>
  #include <math.h>
//  #include "symbolTable.h"
//#ifndef TABLEMANAGER_H
//#define TABLEMANAGER_H
  #include "tableManager.h"
  #include <cmath>
  #include "ast.h"
  #include<fstream>
  #include<string.h>
  #include<vector>
  #include<stdlib.h>
  #include<cstdlib>
  #include<cstring>
  #include<iomanip>
  #include<string>
        TableManager& tableMan = TableManager::getInstance();
	int yylex (void);
	extern int yylineno;
	extern char *yytext;
        extern int count;
        bool add=false,subtract=false, mult=false, division=false, powe=false, modulus=false;
        bool dSlash = false, uPlus = false, uNeg = false, comingFromPar = false;
        bool eAdd=false, eSub=false, eMult=false, eDiv=false, eMod=false, eDSlash=false;
        bool pFlag = false;
        bool globalFlag = false;
        int uNegCount = 0, uPlusCount = 0;
	void yyerror (char const *);
        std::string identName, globalName;
        //SymbolTable& symTab = SymbolTable::getInstance();
        //TableManager& tableMan = TableManager::getInstance();
        //std::vector<Ast*>* nodes = new std::vector<Ast*>();
        //int nodes_index = 0;
//#endif
%}

%union {
  Ast* ast;
  double d; 
  int i;
  char* s; //Do we create a type class?
  std::vector<Ast*>* nodes;
  //int a[10];
  //Ast* nodes[10];
}
%token <d> FLOAT
%token <i> INT 
%type <ast> arith_expr term factor atom power opt_yield_test opt_test or_test pick_yield_expr_testlist testlist expr_stmt star_EQUAL 
%type <ast>funcdef stmt suite print_stmt star_trailer return_stmt
%type <nodes>plus_stmt
%token <s> NAME
//pick_yield_expr_testlist_comp yield_expr
//shift_expr xor_expr and_expr expr
//exec_stmt comparison
//not_test and_test opt_test test
//pick_yield_expr_testlist_comp
//yield_expr testlist
// 83 tokens, in alphabetical order:
%token AMPEREQUAL AMPERSAND AND AS ASSERT AT BACKQUOTE BAR BREAK
%token CIRCUMFLEX CIRCUMFLEXEQUAL CLASS COLON COMMA CONTINUE DEDENT
%token DEF DEL DOT DOUBLESLASH DOUBLESLASHEQUAL 
%token DOUBLESTAR DOUBLESTAREQUAL ELIF ELSE ENDMARKER EQEQUAL
%token EQUAL EXCEPT EXEC FINALLY FOR FROM GLOBAL GREATER GREATEREQUAL GRLT
%token IF IMPORT IN INDENT IS LAMBDA LBRACE LEFTSHIFT LEFTSHIFTEQUAL LESS
%token LESSEQUAL LPAR LSQB MINEQUAL MINUS NEWLINE NOT NOTEQUAL
%token OR PASS PERCENT PERCENTEQUAL PLUS PLUSEQUAL PRINT RAISE 
%token RBRACE RETURN RIGHTSHIFT RIGHTSHIFTEQUAL RPAR RSQB 
%token SEMI SLASH SLASHEQUAL STAR STAREQUAL
%token STRING TILDE TRY VBAREQUAL WHILE WITH YIELD

%start start


%%

start
	: file_input
	| encoding_decl {
            //std::cout<<"Hello\n";
          }
	| single_input
	;
//single_input // Used in: start
//	: NEWLINE
//	| simple_stmt
//	| compound_stmt NEWLINE
//	;

single_input // Used in: start
	: NEWLINE
	| stmt
	;
file_input // Used in: start
	: star_NEWLINE_stmt ENDMARKER
	;
pick_NEWLINE_stmt // Used in: star_NEWLINE_stmt
	: NEWLINE
	| stmt
	;
star_NEWLINE_stmt // Used in: file_input, star_NEWLINE_stmt
	: pick_NEWLINE_stmt star_NEWLINE_stmt
	| %empty
	;
decorator // Used in: decorators
	: AT dotted_name LPAR opt_arglist RPAR NEWLINE
	| AT dotted_name NEWLINE
	;
opt_arglist // Used in: decorator, trailer
	: arglist
	| %empty
	;
decorators // Used in: decorators, decorated
	: decorator decorators
	| decorator
	;
decorated // Used in: compound_stmt
	: decorators classdef
	| decorators funcdef
	;
funcdef // Used in: decorated, compound_stmt
	: DEF NAME parameters COLON suite 
          {
            tableMan.getCurrentTable()->insertFuncDef($2, $5);
            //std::cout<<"Inserted function: "<<$2<<std::endl;
          } 
	;
parameters // Used in: funcdef
	: LPAR varargslist RPAR
	| LPAR RPAR
	;
varargslist // Used in: parameters, old_lambdef, lambdef
	: star_fpdef_COMMA pick_STAR_DOUBLESTAR
	| fpdef opt_EQUAL_test star_COMMA_fpdef {std::cout<<"varaglist\n";}
	;
opt_EQUAL_test // Used in: varargslist, star_fpdef_COMMA, star_COMMA_fpdef
	: EQUAL test {std::cout<<"EQUAL\n";}
	| %empty
	;
star_fpdef_COMMA // Used in: varargslist, star_fpdef_COMMA
	: fpdef opt_EQUAL_test COMMA star_fpdef_COMMA {std::cout<<"star_fpdef\n";}
	| %empty
	;
opt_DOUBLESTAR_NAME // Used in: pick_STAR_DOUBLESTAR
	: COMMA DOUBLESTAR NAME
	| %empty
	;
pick_STAR_DOUBLESTAR // Used in: varargslist
	: STAR NAME opt_DOUBLESTAR_NAME
	| DOUBLESTAR NAME
	;
fpdef // Used in: varargslist, star_fpdef_COMMA, fplist, star_fpdef_notest, star_COMMA_fpdef
	: NAME
	| LPAR fplist RPAR
	;
fplist // Used in: fpdef
	: fpdef star_fpdef_notest
	;
stmt // Used in: pick_NEWLINE_stmt, plus_stmt
	: simple_stmt {}
	| compound_stmt {}
	;
simple_stmt // Used in: single_input, stmt, suite
	: small_stmt small_stmt_STAR_OR_SEMI NEWLINE
	;
small_stmt // Used in: simple_stmt, small_stmt_STAR_OR_SEMI
	: expr_stmt
	| print_stmt
	| del_stmt
	| pass_stmt
	| flow_stmt
	| import_stmt
	| global_stmt
	| exec_stmt
	| assert_stmt
	;
expr_stmt // Used in: small_stmt
	: testlist augassign pick_yield_expr_testlist 
          { 
            //std::cout<<$1->getNumber()<<" rhs "<<$3->getNumber()<<std::endl; 
            double val_exp_st = $1->getNumber();
            double rhs = $3->getNumber();
            if(eAdd)
            {
              val_exp_st += rhs;
              eAdd = false;
            }
            else if(eSub)
            {
              val_exp_st -=  rhs;
              eSub = false;
            }
            else if(eMult){
              val_exp_st *= rhs;
              eMult = false;
            }
            else if(eDiv){
              val_exp_st /= rhs;
              eDiv = false;
            }
            else if(eMod){
              val_exp_st = (int)val_exp_st%(int)rhs;
              eMod = false;
            }
            else if(eDSlash){
              val_exp_st = floor(val_exp_st/rhs);
              eDSlash = false;
            }
            //if(symTab.ifExists($1->getName())){
              //std::cout<<$1->getName()<<std::endl;
              //symTab.modifyEntry(val_exp_st, $1->getName());
              //tableMan.getCurrentTable()->modifyEntry(val_exp_st, $1->getName());
              if(globalFlag){ 
              tableMan.getTableAt(0)->modifyEntry(val_exp_st, $1->getName()); globalFlag = false;
              }else{
              tableMan.modifyEntry(val_exp_st, $1->getName());
              }
            //}
            //else{
              //std::cout<<"NameError: name is not defined\n";
            //}
            //symTab.insert(val_exp_st, $1->getName(), $1->getDataType());
            //$$ = symTab.lookUp($1->getName(), count); count++;
          } 
	| testlist star_EQUAL 
          {  //Testlist is the name 
            //std::cout << "hello"<<$2->getDataType()<<std::endl;
            //std::cout<<"expr_stmt\n";
            //Ast* a = $2->getLeft();
            //std::cout<<a->getNumber()<<std::endl;
            //symTab.insert(a->getNumber(), identName, "Int");
          }
	;
pick_yield_expr_testlist // Used in: expr_stmt, star_EQUAL
	: yield_expr {}
	| testlist
	;
star_EQUAL // Used in: expr_stmt, star_EQUAL
	: EQUAL pick_yield_expr_testlist star_EQUAL 
          {
              if(globalFlag){
                tableMan.getTableAt(0)->modifyEntry(eval($2), globalName);
              }
              else{
              if($2->getNodetype() == 'I'){  
                tableMan.getCurrentTable()->insert(eval($2), identName, "Int");
              }
              else if($2->getNodetype() == 'F'){
                tableMan.getCurrentTable()->insert(eval($2), identName, "Float");
              }
              else if($2->getNodetype() == 'M'){
                tableMan.getCurrentTable()->insert(-eval($2->getLeft()), identName, ($2->getLeft())->getDataType());
              }  
              else{
                tableMan.getCurrentTable()->insert(eval($2), identName, "Float");
              }
              }
              globalFlag = false;
              std::string tempType;
              if($2->getNodetype() == 'I'){  
                tempType = "Int";
              } 
              //We might not need to do all of this. if we send the rhs ast node as an argument 
              else if($2->getNodetype() == 'F'){  tempType = "Float"; }
              else if($2->getNodetype() == 'M'){  tempType = ($2->getLeft())->getDataType(); }
              else { tempType = "Float"; }
              $$ = new AstAssignmentNode('A', count, identName, tempType); //Change to tempType later
          }
	| %empty {}
	;
augassign // Used in: expr_stmt
	: PLUSEQUAL { eAdd = true;}
	| MINEQUAL  { eSub = true;}
	| STAREQUAL { eMult = true;}
	| SLASHEQUAL {eDiv = true;}
	| PERCENTEQUAL {eMod = true;}
	| AMPEREQUAL
	| VBAREQUAL { std::cout<<"VBARE\n"; }
	| CIRCUMFLEXEQUAL {std::cout<<"CIRCUM\n";}
	| LEFTSHIFTEQUAL {std::cout<<"LEFTS\n";}
	| RIGHTSHIFTEQUAL {std::cout<<"RIGHTS\n";}
	| DOUBLESTAREQUAL
	| DOUBLESLASHEQUAL {eDSlash = true;}
	;
print_stmt // Used in: small_stmt
	: PRINT opt_test
          {
            pFlag = true;
            $$ = new AstPrintNode('Q', count, $2); count++;
            //std::cout<<"Type Print node points to: "<<$2->getNodetype()<<std::endl;
            if(tableMan.ifInGlobal()) { std::cout<<eval($2)<<std::endl; } 
          }
	| PRINT RIGHTSHIFT test opt_test_2 {}
	;
opt_test // Used in: print_stmt
	: test star_COMMA_test 
          { 
            //std::cout<<"opt_test"; 
            //std::cout << "= "<<eval($1) <<std::endl;
            //treeFree($1);
          }
	| %empty {}
	;
opt_test_2 // Used in: print_stmt
	: plus_COMMA_test
	| %empty
	;
del_stmt // Used in: small_stmt
	: DEL exprlist
	;
pass_stmt // Used in: small_stmt
	: PASS
	;
flow_stmt // Used in: small_stmt
	: break_stmt
	| continue_stmt
	| return_stmt
	| raise_stmt
	| yield_stmt
	;
break_stmt // Used in: flow_stmt
	: BREAK
	;
continue_stmt // Used in: flow_stmt
	: CONTINUE
	;
return_stmt // Used in: flow_stmt
	: RETURN testlist
          {
            $$ = new AstPrintNode('Q', count, $2); count++;
            if(tableMan.ifInGlobal()) { std::cout<<eval($2)<<std::endl; }       
          }     
	| RETURN {}
	;
yield_stmt // Used in: flow_stmt
	: yield_expr
	;
raise_stmt // Used in: flow_stmt
	: RAISE test opt_test_3
	| RAISE
	;
opt_COMMA_test // Used in: opt_test_3, exec_stmt
	: COMMA test
	| %empty
	;
opt_test_3 // Used in: raise_stmt
	: COMMA test opt_COMMA_test
	| %empty
	;
import_stmt // Used in: small_stmt
	: import_name
	| import_from
	;
import_name // Used in: import_stmt
	: IMPORT dotted_as_names
	;
import_from // Used in: import_stmt
	: FROM star_DOT dotted_name IMPORT pick_STAR_import
	| FROM plus_DOT IMPORT pick_STAR_import
	;
star_DOT // Used in: import_from, star_DOT
	: DOT star_DOT
	| %empty
	;
plus_DOT // Used in: import_from, plus_DOT
	: DOT plus_DOT
	| DOT
	;
pick_STAR_import // Used in: import_from
	: STAR
	| LPAR import_as_names RPAR
	| import_as_names
	;
import_as_name // Used in: import_as_names, star_COMMA_import_as_name
	: NAME AS NAME
	| NAME
	;
dotted_as_name // Used in: dotted_as_names
	: dotted_name AS NAME
	| dotted_name
	;
import_as_names // Used in: pick_STAR_import
	: import_as_name star_COMMA_import_as_name
	;
dotted_as_names // Used in: import_name, dotted_as_names
	: dotted_as_name
	| dotted_as_names COMMA dotted_as_name
	;
dotted_name // Used in: decorator, import_from, dotted_as_name, dotted_name
	: NAME
	| dotted_name DOT NAME
	;
global_stmt // Used in: small_stmt, global_stmt
	: global_stmt COMMA NAME
	| GLOBAL NAME 
          {
            globalFlag = true;
          } 
	;
exec_stmt // Used in: small_stmt
	: EXEC expr IN test opt_COMMA_test
          {
            //std::cout<<"exec_stmt\n";
          }
	| EXEC expr
          {
            //std::cout<<"exec_stmt\n";
          }
	;
assert_stmt // Used in: small_stmt
	: ASSERT test COMMA test
	| ASSERT test
	;
compound_stmt // Used in: single_input, stmt
	: if_stmt
	| while_stmt
	| for_stmt
	| try_stmt
	| with_stmt
	| funcdef
	| classdef
	| decorated
	;
if_stmt // Used in: compound_stmt
	: IF test COLON suite star_ELIF ELSE COLON suite
	| IF test COLON suite star_ELIF
	;
star_ELIF // Used in: if_stmt, star_ELIF
	: ELIF test COLON suite star_ELIF
	| %empty
	;
while_stmt // Used in: compound_stmt
	: WHILE test COLON suite ELSE COLON suite
	| WHILE test COLON suite
	;
for_stmt // Used in: compound_stmt
	: FOR exprlist IN testlist COLON suite ELSE COLON suite
	| FOR exprlist IN testlist COLON suite
	;
try_stmt // Used in: compound_stmt
	: TRY COLON suite plus_except opt_ELSE opt_FINALLY
	| TRY COLON suite FINALLY COLON suite
	;
plus_except // Used in: try_stmt, plus_except
	: except_clause COLON suite plus_except
	| except_clause COLON suite
	;
opt_ELSE // Used in: try_stmt
	: ELSE COLON suite
	| %empty
	;
opt_FINALLY // Used in: try_stmt
	: FINALLY COLON suite
	| %empty
	;
with_stmt // Used in: compound_stmt
	: WITH with_item star_COMMA_with_item COLON suite
	;
star_COMMA_with_item // Used in: with_stmt, star_COMMA_with_item
	: COMMA with_item star_COMMA_with_item
	| %empty
	;
with_item // Used in: with_stmt, star_COMMA_with_item
	: test AS expr {std::cout<<"Test as expr\n";}
	| test
	;
except_clause // Used in: plus_except
	: EXCEPT test opt_AS_COMMA
	| EXCEPT
	;
pick_AS_COMMA // Used in: opt_AS_COMMA
	: AS
	| COMMA
	;
opt_AS_COMMA // Used in: except_clause
	: pick_AS_COMMA test
	| %empty
	;
suite // Used in: funcdef, if_stmt, star_ELIF, while_stmt, for_stmt, 
      // try_stmt, plus_except, opt_ELSE, opt_FINALLY, with_stmt, classdef
	: simple_stmt  
          { 
            //std::cout<<"Inside Suite(1)\n";
            //$$[index]=new AstNode();
          }
	| NEWLINE INDENT{tableMan.pushTable();} plus_stmt DEDENT 
          { 
            //std::cout<<"Inside Suite(2)\n";
            //$3->getName();
            $$ = new AstSuiteNode('S', count, "Function_name", $4); //You should also be sending current[parent] scope 
            //std::cout<<"created a suite node\n";
            //std::cout<<"Popped fake scope\n";
            //tableMan.getCurrentTable()->displayTable();
            
            tableMan.popTable();
          }
	;
plus_stmt // Used in: suite, plus_stmt
	: stmt plus_stmt 
          {
            $$ = $2;
            $$->push_back($1);
          }
	| stmt {
            $$ = new std::vector<Ast*>();
            $$->reserve(8);
            $$->push_back($1); 
          } 
	;
testlist_safe // Used in: list_for
	: old_test plus_COMMA_old_test
	| old_test
	;
old_test // Used in: testlist_safe, old_lambdef, list_if, comp_if, plus_COMMA_old_test
	: or_test { 
            //std::cout<<"old_test\n";
          }
	| old_lambdef
	;
old_lambdef // Used in: old_test
	: LAMBDA varargslist COLON old_test
	| LAMBDA COLON old_test
	;
test // Used in: opt_EQUAL_test, print_stmt, opt_test, raise_stmt, 
     // opt_COMMA_test, opt_test_3, exec_stmt, assert_stmt, if_stmt, 
     // star_ELIF, while_stmt, with_item, except_clause, opt_AS_COMMA, 
     // opt_IF_ELSE, listmaker, testlist_comp, lambdef, subscript, 
     // opt_test_only, sliceop, testlist, dictorsetmaker, argument, 
     // testlist1, star_COMMA_test, star_test_COLON_test,
     // plus_COMMA_test, dictarg, listarg
	: or_test opt_IF_ELSE {
            //std::cout<<"test"<<$1<<std::endl;
          }
	| lambdef
	;
opt_IF_ELSE // Used in: test
	: IF or_test ELSE test
	| %empty
	;
or_test // Used in: old_test, test, opt_IF_ELSE, or_test, comp_for
	: and_test
          { //std::cout<<"or test\n";
          }
	| or_test OR and_test
	;
and_test // Used in: or_test, and_test
	: not_test
          { //std::cout<<"and_test\n";
          }
	| and_test AND not_test
	;
not_test // Used in: and_test, not_test
	: NOT not_test
	| comparison
          { //std::cout<<"not_test\n";
          }
	;
comparison // Used in: not_test, comparison
	: expr 
          { //std::cout<<"Comparison\n"; 
          }
	| comparison comp_op expr
	;
comp_op // Used in: comparison
	: LESS
	| GREATER
	| EQEQUAL
	| GREATEREQUAL
	| LESSEQUAL
	| GRLT
	| NOTEQUAL
	| IN
	| NOT IN
	| IS
	| IS NOT
	;
expr // Used in: exec_stmt, with_item, comparison, expr, 
     // exprlist, star_COMMA_expr
	: xor_expr 
          {
       
            //std::cout<<"In expr\n";
             if(comingFromPar){
               comingFromPar = false;
               //std::cout << "= "<<eval($1) <<std::endl;
               //treeFree($1);
              //$$ = new AstNode('Z', count, $1, NULL);
             }
             else{
               //std::cout << "= "<<eval($1) <<std::endl;
               //treeFree($1);
             }
             //$$ = new AstNode('Z', count, $1, NULL);
          }
	| expr BAR xor_expr{
          }
	;
xor_expr // Used in: expr, xor_expr
	: and_expr 
          { 
          }
	| xor_expr CIRCUMFLEX and_expr
	;
and_expr // Used in: xor_expr, and_expr
	: shift_expr  
          { 
          }
	| and_expr AMPERSAND shift_expr
	;
shift_expr // Used in: and_expr, shift_expr
	: arith_expr 
          { 
          }
	| shift_expr pick_LEFTSHIFT_RIGHTSHIFT arith_expr 
          {
          }
	;
pick_LEFTSHIFT_RIGHTSHIFT // Used in: shift_expr
	: LEFTSHIFT
	| RIGHTSHIFT
	;
arith_expr // Used in: shift_expr, arith_expr
	: term
	| arith_expr pick_PLUS_MINUS term
        {
            if(add)
            {
              //$$ = $1 + $3;
              $$ = new AstNode('+',count, $1, $3);
              count++;
              add = false;
            }
            else if(subtract)
            {
              //$$ = $1 - $3;
              $$ = new AstNode('-',count, $1, $3);
              count++;
              subtract = false;
            }
        }
	;
pick_PLUS_MINUS // Used in: arith_expr
	: PLUS {add = true;}
	| MINUS {subtract = true;}
	;
term // Used in: arith_expr, term
	: factor {  
            //std::cout<<"Term\n";
            }
	| term pick_multop factor
          {
            //std::cout<<"EXECUTE DOUBLESLASH"<<dSlash<<std::endl;
            if(mult){
              //$$ = $1 * $3;
              $$ = new AstNode('*', count, $1, $3);
              count++;
              //std::cout<<"EXECUTE MULT"<<mult<<std::endl;
              mult = false;
            }
            else if(division){
                //$$ = floor((float)$1 / (float)$3);
                $$ = new AstNode('/', count, $1, $3); count++;
              //std::cout<<"EXECUTE DIV"<<division<<std::endl;
              division = false;
            }
            else if(modulus){
              if($3 != 0){
                //$$ = $1 % $3;
                $$ = new AstNode('%', count, $1, $3); count++;
              }
              else{
                //$$ = 0;
              }
              //std::cout<<"EXECUTE MOD"<<modulus<<std::endl;
              modulus = false;
            }
            else if(dSlash){
                //$$ = floor((float)$1/(float)$3);
                $$ = new AstNode('D', count, $1, $3); count++;
              dSlash = false;
            }
            //std::cout<<"Term\n";
          }
	;
pick_multop // Used in: term
	: STAR { mult = true;}
	| SLASH { 
                  division = true;
                }
	| PERCENT { 
                    modulus = true;
                  }
	| DOUBLESLASH 
                  { 
                    dSlash = true;
                  }
	;
factor // Used in: term, factor, power
	: pick_unop factor
          {
            //std::cout<<"Come into factor\n";
            //std::cout<<uNegCount<<std::endl;
            if(uPlus){
              //$$ = $2;
              $$ = new AstNode('P', count, $2, NULL); count++;
              uPlusCount--;
              if(uPlusCount<=0){
                uPlusCount = 0;
                uPlus = false;
              }
            }
            else if(uNeg){
              //$$ = -$2;
              //std::cout<<$2->getNodetype()<<std::endl;
              //char ch = $2->getNodetype();
              //std::cout<<"uNeg, factor "<<$2->getDataType()<<std::endl;
              //$2->setNumber(-$2->getNumber());
              //std::cout<<$2->getNumber()<<std::endl;
              $$ = new AstNode('M', count, $2, NULL); count++;
              //std::cout<<"uNegValue: "<<$$<<std::endl;
              uNegCount--;
              if(uNegCount<=0){
                uNegCount = 0;
                uNeg = false;
              }
            }
          }
	| power
	;
pick_unop // Used in: factor
	: PLUS { uPlus = true; uPlusCount++; }
	| MINUS { 
                  uNeg = true;
                  uNegCount++;
                  //std::cout<<"MINUS"<<std::endl;
                }
	| TILDE
	;
power // Used in: factor
	: atom star_trailer DOUBLESTAR factor 
          { 
            //$$ = pow($1, $4);
            $$ = new AstNode('E', count, $1, $4); count++;
          }
	| atom star_trailer 
          {
            if($2 != NULL){
              if(tableMan.ifInGlobal()){
                eval($1);
            }
           else{
             $$ = new AstCallNode('C',count,globalName);
             //std::cout<<"Created call node\n";
           } 
           }
          }
	;
star_trailer // Used in: power, star_trailer
	: trailer star_trailer
          {
            //std::cout<<"Inside star_trailer\n";
            //$$ = new AstNode('P', count, NULL, NULL);
          }
	| %empty { $$ = NULL; }
	;
atom // Used in: power
	: LPAR opt_yield_test RPAR 
          { 
            //std::cout<<"In atom\n";
            $$ = $2; 
            comingFromPar = true;
          }
	| LSQB opt_listmaker RSQB {}
	| LBRACE opt_dictorsetmaker RBRACE {}
	| BACKQUOTE testlist1 BACKQUOTE {}
	| NAME 
          { 
              //tableMan.getCurrentTable()->displayTable();
            //std::cout<<"Searching for: "<<$1<<std::endl;
            if(tableMan.ifExists($1)){
              $$ = tableMan.lookUp($1, count); count++;
              //std::cout<<"It exists: "<<$$->getDataType()<<std::endl;
              //std::cout<<"In atom: "<<$$->getNodetype()<<std::endl;
              globalName = $1; //To enable global
            }
            else{
              if(pFlag){
                //std::cout<<"NameError: name "<<$1<<" is not defined\n";
              }  
              identName = $1; 
              //std::cout<<$1<<std::endl;
            }
          }
	| FLOAT 
          {
            //std::cout<<"Float value="<<$1<<std::endl;
            //std::cout<<"Reached atom"<<std::endl; 
            $$ = new AstFloat('F',count, "temp", $1); count++; //This node gets discarded anyways, temp node 
          }
        | INT
          {
            $$ = new AstInt('I',count, "temp", $1); count++; //This node gets discarded anyways, temp node 
          } 
	| plus_STRING {std::cout<<"PLUS IN ATOM\n";}
	;
pick_yield_expr_testlist_comp // Used in: opt_yield_test
	: yield_expr 
          {
            //$$ = new AstNode('Z', count, $1, NULL); count++; 
            //std::cout<<"In yield expr"<<$$<<std::endl; 
          }
	| testlist_comp
	;
opt_yield_test // Used in: atom
	: pick_yield_expr_testlist_comp
          {
            //$$ = new AstNode('Z', count, $1, NULL); count++;  
            //std::cout<<"In pick_yield"<<$$<<std::endl; 
          }
	| %empty {}
	;
opt_listmaker // Used in: atom
	: listmaker
	| %empty {}
	;
opt_dictorsetmaker // Used in: atom
	: dictorsetmaker
	| %empty
	;
plus_STRING // Used in: atom, plus_STRING
	: STRING plus_STRING { std::cout <<"STRINGPLUS\n";}
	| STRING {std::cout<<"STRING\n";}
	;
listmaker // Used in: opt_listmaker
	: test list_for
	| test star_COMMA_test
	;
testlist_comp // Used in: pick_yield_expr_testlist_comp
	: test comp_for
	| test star_COMMA_test
	;
lambdef // Used in: test
	: LAMBDA varargslist COLON test
	| LAMBDA COLON test
	;
trailer // Used in: star_trailer
	: LPAR opt_arglist RPAR
	| LSQB subscriptlist RSQB
	| DOT NAME
	;
subscriptlist // Used in: trailer
	: subscript star_COMMA_subscript
	;
subscript // Used in: subscriptlist, star_COMMA_subscript
	: DOT DOT DOT
	| test
	| opt_test_only COLON opt_test_only opt_sliceop
	;
opt_test_only // Used in: subscript
	: test
	| %empty
	;
opt_sliceop // Used in: subscript
	: sliceop
	| %empty
	;
sliceop // Used in: opt_sliceop
	: COLON test
	| COLON
	;
exprlist // Used in: del_stmt, for_stmt, list_for, comp_for
	: expr star_COMMA_expr
	;
testlist // Used in: expr_stmt, pick_yield_expr_testlist, 
         // return_stmt, for_stmt, opt_testlist, yield_expr
	: test star_COMMA_test 
          {
            //std::cout<<"testlist"<<$1<<std::endl;
          }
	;
dictorsetmaker // Used in: opt_dictorsetmaker
	: test COLON test pick_comp_for
	| test pick_for_test
	;
pick_comp_for // Used in: dictorsetmaker
	: comp_for
	| star_test_COLON_test
	;
pick_for_test // Used in: dictorsetmaker
	: comp_for
	| star_COMMA_test {std::cout<<"star_COMMA\n";}
	;
classdef // Used in: decorated, compound_stmt
	: CLASS NAME LPAR opt_testlist RPAR COLON suite
	| CLASS NAME COLON suite
	;
opt_testlist // Used in: classdef
	: testlist
	| %empty
	;
arglist // Used in: opt_arglist, arglist
	: argument COMMA arglist
	| argument COMMA
	| argument
	| listarg COMMA arglist_postlist
	| listarg
	| dictarg
	;
argument // Used in: arglist, arglist_postlist
	: test opt_comp_for
	| test EQUAL test {std::cout<<"argument\n";} 
	;
opt_comp_for // Used in: argument
	: comp_for
	| %empty
	;
list_iter // Used in: list_for, list_if
	: list_for
	| list_if
	;
list_for // Used in: listmaker, list_iter
	: FOR exprlist IN testlist_safe list_iter
	| FOR exprlist IN testlist_safe
	;
list_if // Used in: list_iter
	: IF old_test list_iter
	| IF old_test
	;
comp_iter // Used in: comp_for, comp_if
	: comp_for
	| comp_if
	;
comp_for // Used in: testlist_comp, pick_comp_for, pick_for_test, 
         // opt_comp_for, comp_iter
	: FOR exprlist IN or_test comp_iter
	| FOR exprlist IN or_test
	;
comp_if // Used in: comp_iter
	: IF old_test comp_iter
	| IF old_test
	;
testlist1 // Used in: atom, testlist1
	: test
	| testlist1 COMMA test
	;
encoding_decl // Used in: start
	: NAME {std::cout<<"Encoding_decl\n";}
	;
yield_expr // Used in: pick_yield_expr_testlist, yield_stmt, 
           // pick_yield_expr_testlist_comp
	: YIELD testlist 
          { 
            //$$ = new AstNode('Z', count, NULL, $2); count++; 
          }  
	| YIELD 
          { 
            //$$ = new AstNode('Z', count, NULL, NULL); count++; 
          }
	;
star_fpdef_notest // Used in: fplist, star_fpdef_notest
	: COMMA fpdef star_fpdef_notest
	| COMMA
	| %empty
	;
star_COMMA_expr // Used in: exprlist, star_COMMA_expr
	: COMMA expr star_COMMA_expr
	| COMMA
	| %empty
	;
star_COMMA_fpdef // Used in: varargslist, star_COMMA_fpdef
	: COMMA fpdef opt_EQUAL_test star_COMMA_fpdef {std::cout<<"star_comma\n";}
	| COMMA
	| %empty
	;
star_COMMA_test // Used in: opt_test, listmaker, testlist_comp, testlist, pick_for_test, star_COMMA_test
	: COMMA test star_COMMA_test {std::cout<<"Star_COMMA\n";}
	| COMMA
	| %empty
	;
star_test_COLON_test // Used in: pick_comp_for, star_test_COLON_test
	: COMMA test COLON test star_test_COLON_test
	| COMMA
	| %empty
	;
star_COMMA_subscript // Used in: subscriptlist, star_COMMA_subscript
	: COMMA subscript star_COMMA_subscript
	| COMMA
	| %empty
	;
star_COMMA_import_as_name // Used in: import_as_names, 
                          // star_COMMA_import_as_name
	: COMMA import_as_name star_COMMA_import_as_name
	| COMMA
	| %empty
	;
plus_COMMA_test // Used in: opt_test_2, plus_COMMA_test
	: COMMA test plus_COMMA_test
	| COMMA test COMMA
	| COMMA test
	;
plus_COMMA_old_test // Used in: testlist_safe, plus_COMMA_old_test
	: COMMA old_test plus_COMMA_old_test
	| COMMA old_test COMMA
	| COMMA old_test
	;
dictarg // Used in: arglist, arglist_postlist
	: DOUBLESTAR test
	;
listarg // Used in: arglist
	: STAR test
	;
arglist_postlist // Used in: arglist, arglist_postlist
	: argument COMMA arglist_postlist
	| dictarg
	| argument
	;
small_stmt_STAR_OR_SEMI // Used in: simple_stmt, small_stmt_STAR_OR_SEMI
	: SEMI small_stmt small_stmt_STAR_OR_SEMI
	| SEMI
	| %empty
	;

%%

#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}

