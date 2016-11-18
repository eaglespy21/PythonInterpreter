/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSE_TAB_HPP_INCLUDED
# define YY_YY_PARSE_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUMBER = 258,
    NAME = 259,
    AMPEREQUAL = 260,
    AMPERSAND = 261,
    AND = 262,
    AS = 263,
    ASSERT = 264,
    AT = 265,
    BACKQUOTE = 266,
    BAR = 267,
    BREAK = 268,
    CIRCUMFLEX = 269,
    CIRCUMFLEXEQUAL = 270,
    CLASS = 271,
    COLON = 272,
    COMMA = 273,
    CONTINUE = 274,
    DEDENT = 275,
    DEF = 276,
    DEL = 277,
    DOT = 278,
    DOUBLESLASH = 279,
    DOUBLESLASHEQUAL = 280,
    DOUBLESTAR = 281,
    DOUBLESTAREQUAL = 282,
    ELIF = 283,
    ELSE = 284,
    ENDMARKER = 285,
    EQEQUAL = 286,
    EQUAL = 287,
    EXCEPT = 288,
    EXEC = 289,
    FINALLY = 290,
    FOR = 291,
    FROM = 292,
    GLOBAL = 293,
    GREATER = 294,
    GREATEREQUAL = 295,
    GRLT = 296,
    IF = 297,
    IMPORT = 298,
    IN = 299,
    INDENT = 300,
    IS = 301,
    LAMBDA = 302,
    LBRACE = 303,
    LEFTSHIFT = 304,
    LEFTSHIFTEQUAL = 305,
    LESS = 306,
    LESSEQUAL = 307,
    LPAR = 308,
    LSQB = 309,
    MINEQUAL = 310,
    MINUS = 311,
    NEWLINE = 312,
    NOT = 313,
    NOTEQUAL = 314,
    OR = 315,
    PASS = 316,
    PERCENT = 317,
    PERCENTEQUAL = 318,
    PLUS = 319,
    PLUSEQUAL = 320,
    PRINT = 321,
    RAISE = 322,
    RBRACE = 323,
    RETURN = 324,
    RIGHTSHIFT = 325,
    RIGHTSHIFTEQUAL = 326,
    RPAR = 327,
    RSQB = 328,
    SEMI = 329,
    SLASH = 330,
    SLASHEQUAL = 331,
    STAR = 332,
    STAREQUAL = 333,
    STRING = 334,
    TILDE = 335,
    TRY = 336,
    VBAREQUAL = 337,
    WHILE = 338,
    WITH = 339,
    YIELD = 340
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 22 "parse.y" /* yacc.c:1909  */

  Ast* ast;
  double d; 
  char* s; //Do we create a type class?

#line 146 "parse.tab.hpp" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_HPP_INCLUDED  */
