CCC = g++
LEX = flex
YACC = bison
CFLAGS = -Wall -std=c++11
LEXFLAGS = -Wno-unused

#LEXDEBUG = -d
LEXDEBUG =
YACCDEBUG = -vtd

OBJS = main.o ast.o symbolTable.o tableManager.o parse.tab.o lex.yy.o

run: $(OBJS)
	$(CCC) $(CFLAGS) -o run $(OBJS)

main.o: main.cpp parse.y scan.l parse.tab.cpp lex.yy.cpp
	$(CCC) $(CFLAGS) -c main.cpp

parse.tab.cpp: parse.y ast.h
	$(YACC) $(YACCDEBUG) -oparse.tab.cpp parse.y

ast.o: ast.cpp ast.h
	$(CCC) $(CFLAGS) -c ast.cpp

symbolTable.o: symbolTable.cpp symbolTable.h
	$(CCC) $(CFLAGS) -c symbolTable.cpp

tableManager.o: tableManager.cpp tableManager.h
	$(CCC) $(CFLAGS) -c tableManager.cpp

parse.tab.o: parse.tab.cpp
	$(CCC) $(CFLAGS) -c parse.tab.cpp

lex.yy.cpp: scan.l parse.tab.o
	$(LEX) $(LEXDEBUG) -olex.yy.cpp scan.l

lex.yy.o: lex.yy.cpp
	$(CCC) $(CFLAGS) $(LEXFLAGS) -c lex.yy.cpp
	
clean:
	rm -f run *.o parse.tab.cpp lex.yy.cpp
	rm -f parse.tab.h
	rm -f parse.output
