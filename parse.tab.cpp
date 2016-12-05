/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 2 "parse.y" /* yacc.c:339  */

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

#line 103 "parse.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parse.tab.hpp".  */
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
    FLOAT = 258,
    INT = 259,
    NAME = 260,
    AMPEREQUAL = 261,
    AMPERSAND = 262,
    AND = 263,
    AS = 264,
    ASSERT = 265,
    AT = 266,
    BACKQUOTE = 267,
    BAR = 268,
    BREAK = 269,
    CIRCUMFLEX = 270,
    CIRCUMFLEXEQUAL = 271,
    CLASS = 272,
    COLON = 273,
    COMMA = 274,
    CONTINUE = 275,
    DEDENT = 276,
    DEF = 277,
    DEL = 278,
    DOT = 279,
    DOUBLESLASH = 280,
    DOUBLESLASHEQUAL = 281,
    DOUBLESTAR = 282,
    DOUBLESTAREQUAL = 283,
    ELIF = 284,
    ELSE = 285,
    ENDMARKER = 286,
    EQEQUAL = 287,
    EQUAL = 288,
    EXCEPT = 289,
    EXEC = 290,
    FINALLY = 291,
    FOR = 292,
    FROM = 293,
    GLOBAL = 294,
    GREATER = 295,
    GREATEREQUAL = 296,
    GRLT = 297,
    IF = 298,
    IMPORT = 299,
    IN = 300,
    INDENT = 301,
    IS = 302,
    LAMBDA = 303,
    LBRACE = 304,
    LEFTSHIFT = 305,
    LEFTSHIFTEQUAL = 306,
    LESS = 307,
    LESSEQUAL = 308,
    LPAR = 309,
    LSQB = 310,
    MINEQUAL = 311,
    MINUS = 312,
    NEWLINE = 313,
    NOT = 314,
    NOTEQUAL = 315,
    OR = 316,
    PASS = 317,
    PERCENT = 318,
    PERCENTEQUAL = 319,
    PLUS = 320,
    PLUSEQUAL = 321,
    PRINT = 322,
    RAISE = 323,
    RBRACE = 324,
    RETURN = 325,
    RIGHTSHIFT = 326,
    RIGHTSHIFTEQUAL = 327,
    RPAR = 328,
    RSQB = 329,
    SEMI = 330,
    SLASH = 331,
    SLASHEQUAL = 332,
    STAR = 333,
    STAREQUAL = 334,
    STRING = 335,
    TILDE = 336,
    TRY = 337,
    VBAREQUAL = 338,
    WHILE = 339,
    WITH = 340,
    YIELD = 341
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 39 "parse.y" /* yacc.c:355  */

  Ast* ast;
  double d; 
  int i;
  char* s; //Do we create a type class?
  std::vector<Ast*>* nodes;
  //int a[10];
  //Ast* nodes[10];

#line 240 "parse.tab.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 255 "parse.tab.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  140
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   969

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  141
/* YYNRULES -- Number of rules.  */
#define YYNRULES  325
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  491

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   341

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    79,    79,    80,    83,    92,    93,    96,    99,   100,
     103,   104,   107,   108,   111,   112,   115,   116,   119,   120,
     123,   129,   130,   133,   134,   137,   138,   141,   142,   145,
     146,   149,   150,   153,   154,   157,   160,   161,   164,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   178,   220,
     230,   231,   234,   264,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   281,   288,   291,   297,
     300,   301,   304,   307,   310,   311,   312,   313,   314,   317,
     320,   323,   328,   331,   334,   335,   338,   339,   342,   343,
     346,   347,   350,   353,   354,   357,   358,   361,   362,   365,
     366,   367,   370,   371,   374,   375,   378,   381,   382,   385,
     386,   389,   390,   396,   400,   406,   407,   410,   411,   412,
     413,   414,   415,   416,   417,   420,   421,   424,   425,   428,
     429,   432,   433,   436,   437,   440,   441,   444,   445,   448,
     449,   452,   455,   456,   459,   460,   463,   464,   467,   468,
     471,   472,   476,   481,   481,   493,   498,   505,   506,   509,
     512,   515,   516,   525,   528,   531,   532,   535,   538,   541,
     544,   547,   548,   553,   556,   559,   560,   561,   562,   563,
     564,   565,   566,   567,   568,   569,   573,   589,   593,   596,
     599,   602,   605,   608,   613,   614,   617,   618,   637,   638,
     641,   644,   680,   681,   684,   687,   693,   722,   725,   726,
     731,   734,   739,   765,   770,   773,   779,   780,   781,   782,
     800,   806,   810,   813,   818,   821,   826,   829,   830,   833,
     834,   837,   838,   841,   842,   845,   846,   849,   850,   853,
     854,   855,   858,   861,   862,   863,   866,   867,   870,   871,
     874,   875,   878,   882,   888,   889,   892,   893,   896,   897,
     900,   901,   904,   905,   908,   909,   910,   911,   912,   913,
     916,   917,   920,   921,   924,   925,   928,   929,   932,   933,
     936,   937,   941,   942,   945,   946,   949,   950,   953,   957,
     961,   967,   968,   969,   972,   973,   974,   977,   978,   979,
     982,   983,   984,   987,   988,   989,   992,   993,   994,   998,
     999,  1000,  1003,  1004,  1005,  1008,  1009,  1010,  1013,  1016,
    1019,  1020,  1021,  1024,  1025,  1026
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FLOAT", "INT", "NAME", "AMPEREQUAL",
  "AMPERSAND", "AND", "AS", "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK",
  "CIRCUMFLEX", "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE",
  "DEDENT", "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL",
  "DOUBLESTAR", "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL",
  "EQUAL", "EXCEPT", "EXEC", "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER",
  "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR",
  "LSQB", "MINEQUAL", "MINUS", "NEWLINE", "NOT", "NOTEQUAL", "OR", "PASS",
  "PERCENT", "PERCENTEQUAL", "PLUS", "PLUSEQUAL", "PRINT", "RAISE",
  "RBRACE", "RETURN", "RIGHTSHIFT", "RIGHTSHIFTEQUAL", "RPAR", "RSQB",
  "SEMI", "SLASH", "SLASHEQUAL", "STAR", "STAREQUAL", "STRING", "TILDE",
  "TRY", "VBAREQUAL", "WHILE", "WITH", "YIELD", "$accept", "start",
  "single_input", "file_input", "pick_NEWLINE_stmt", "star_NEWLINE_stmt",
  "decorator", "opt_arglist", "decorators", "decorated", "funcdef",
  "parameters", "varargslist", "opt_EQUAL_test", "star_fpdef_COMMA",
  "opt_DOUBLESTAR_NAME", "pick_STAR_DOUBLESTAR", "fpdef", "fplist", "stmt",
  "simple_stmt", "small_stmt", "expr_stmt", "pick_yield_expr_testlist",
  "star_EQUAL", "augassign", "print_stmt", "opt_test", "opt_test_2",
  "del_stmt", "pass_stmt", "flow_stmt", "break_stmt", "continue_stmt",
  "return_stmt", "yield_stmt", "raise_stmt", "opt_COMMA_test",
  "opt_test_3", "import_stmt", "import_name", "import_from", "star_DOT",
  "plus_DOT", "pick_STAR_import", "import_as_name", "dotted_as_name",
  "import_as_names", "dotted_as_names", "dotted_name", "global_stmt",
  "exec_stmt", "assert_stmt", "compound_stmt", "if_stmt", "star_ELIF",
  "while_stmt", "for_stmt", "try_stmt", "plus_except", "opt_ELSE",
  "opt_FINALLY", "with_stmt", "star_COMMA_with_item", "with_item",
  "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite", "$@1",
  "plus_stmt", "testlist_safe", "old_test", "old_lambdef", "test",
  "opt_IF_ELSE", "or_test", "and_test", "not_test", "comparison",
  "comp_op", "expr", "xor_expr", "and_expr", "shift_expr",
  "pick_LEFTSHIFT_RIGHTSHIFT", "arith_expr", "pick_PLUS_MINUS", "term",
  "pick_multop", "factor", "pick_unop", "power", "star_trailer", "atom",
  "pick_yield_expr_testlist_comp", "opt_yield_test", "opt_listmaker",
  "opt_dictorsetmaker", "plus_STRING", "listmaker", "testlist_comp",
  "lambdef", "trailer", "subscriptlist", "subscript", "opt_test_only",
  "opt_sliceop", "sliceop", "exprlist", "testlist", "dictorsetmaker",
  "pick_comp_for", "pick_for_test", "classdef", "opt_testlist", "arglist",
  "argument", "opt_comp_for", "list_iter", "list_for", "list_if",
  "comp_iter", "comp_for", "comp_if", "testlist1", "encoding_decl",
  "yield_expr", "star_fpdef_notest", "star_COMMA_expr", "star_COMMA_fpdef",
  "star_COMMA_test", "star_test_COLON_test", "star_COMMA_subscript",
  "star_COMMA_import_as_name", "plus_COMMA_test", "plus_COMMA_old_test",
  "dictarg", "listarg", "arglist_postlist", "small_stmt_STAR_OR_SEMI", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341
};
# endif

#define YYPACT_NINF -366

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-366)))

#define YYTABLE_NINF -308

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     395,  -366,  -366,    65,   818,    99,   818,  -366,   139,  -366,
     140,   316,   316,   316,    92,   141,   818,    99,    43,   818,
      41,   818,  -366,   148,   875,  -366,  -366,    69,   818,   818,
      80,  -366,   151,   818,   818,   818,   176,  -366,  -366,   479,
     147,   173,   160,  -366,  -366,   186,  -366,   112,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,   170,  -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
     175,     8,   184,  -366,   111,   183,   182,   191,    59,     3,
       0,  -366,   316,  -366,    78,  -366,  -366,   886,  -366,  -366,
    -366,  -366,   181,  -366,    17,  -366,    47,    29,   156,    66,
    -366,    25,   157,    18,    99,   161,  -366,   189,  -366,   193,
      96,  -366,   818,    45,   195,     6,   187,   117,   150,  -366,
     118,  -366,   144,  -366,  -366,   120,   152,  -366,  -366,   818,
    -366,   175,   202,  -366,  -366,   647,   204,   206,   219,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,  -366,   720,   172,
     226,   818,  -366,   875,   875,  -366,   875,  -366,  -366,  -366,
    -366,  -366,   179,  -366,  -366,   197,  -366,   316,   316,   316,
     316,  -366,  -366,   316,  -366,  -366,   316,  -366,  -366,  -366,
    -366,   316,  -366,   238,   236,   748,   218,    78,  -366,  -366,
    -366,  -366,    41,  -366,  -366,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,    41,   818,   244,   236,  -366,  -366,   818,   647,
     818,    34,   233,   316,  -366,   818,   818,  -366,  -366,    33,
      32,   647,    99,   247,  -366,   234,   185,   818,   249,   250,
    -366,   818,   237,   818,   316,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,   316,  -366,  -366,  -366,   240,  -366,   818,  -366,
     214,  -366,    95,   647,   818,   243,   316,   112,  -366,  -366,
     175,    19,   184,  -366,  -366,  -366,   183,   182,   191,    59,
       3,     0,  -366,  -366,   818,   818,   196,   142,  -366,   245,
    -366,   254,   242,   256,   188,   257,   259,   316,  -366,   235,
    -366,  -366,  -366,  -366,  -366,   205,  -366,  -366,  -366,   207,
    -366,   208,   647,    66,   263,   265,    32,   266,   281,  -366,
    -366,   268,  -366,   260,  -366,  -366,    45,  -366,  -366,  -366,
    -366,   269,  -366,    38,  -366,   122,   251,   252,   818,  -366,
    -366,   263,  -366,   818,   274,   264,   280,   270,   206,   647,
     183,  -366,  -366,   818,  -366,  -366,  -366,   818,  -366,  -366,
     236,   805,   275,  -366,   330,  -366,   818,  -366,  -366,   246,
     284,  -366,  -366,  -366,   818,  -366,   647,  -366,   300,   239,
     281,  -366,   818,   276,   234,   283,  -366,  -366,   187,   818,
    -366,  -366,  -366,   875,   846,   289,  -366,   563,   153,   647,
     293,   279,   647,   304,  -366,  -366,  -366,  -366,  -366,   299,
    -366,  -366,  -366,   257,  -366,   305,  -366,   647,  -366,   295,
    -366,  -366,   268,   308,   309,  -366,   326,   237,   314,    21,
      49,   130,   317,  -366,   277,   818,  -366,   563,   320,  -366,
    -366,   818,  -366,  -366,   647,   319,  -366,   310,   647,   805,
    -366,   818,  -366,  -366,  -366,   327,  -366,   647,   647,  -366,
    -366,   818,   846,  -366,  -366,  -366,   846,   331,   846,  -366,
    -366,  -366,   846,  -366,  -366,  -366,  -366,  -366,   647,  -366,
    -366,  -366,  -366,   647,   260,  -366,   329,   131,  -366,   846,
     130,   332,  -366,  -366,  -366,  -366,  -366,  -366,  -366,   846,
    -366
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      11,   220,   221,   219,     0,     0,     0,    79,     0,    80,
       0,     0,     0,     0,    96,     0,     0,     0,    28,   230,
     226,   228,   209,     8,     0,    73,   208,    69,    85,    82,
     232,   210,     0,     0,     0,   290,     0,     4,     2,    11,
       0,    17,     0,   124,   122,     9,    36,   325,    39,    40,
      41,    42,    43,    74,    75,    76,    78,    77,    44,    90,
      91,    45,    46,    47,    37,   117,   118,   119,   120,   121,
     302,   166,   167,   169,   172,   173,   186,   188,   190,   192,
     196,   200,     0,   207,   214,   222,   164,    53,   123,     3,
      83,   219,   116,   109,     0,   286,     0,     0,     0,   296,
      72,   114,     0,    96,     0,     0,   112,     0,   107,    92,
     105,    33,     0,     0,     0,     0,    26,   302,     0,   229,
     302,   225,     0,   224,   223,   302,     0,   227,   171,     0,
      66,   302,    89,    81,   231,     0,     0,   143,   145,   289,
       1,     8,    10,     9,     7,    16,    19,    18,   324,     0,
       0,   301,   253,     0,     0,   163,     0,   177,   176,   178,
     180,   182,   184,   175,   179,     0,   181,     0,     0,     0,
       0,   194,   195,     0,   199,   198,     0,   205,   204,   203,
     202,     0,   206,     0,    15,   247,   212,   214,    59,    61,
      65,    64,     0,    62,    55,    58,    54,    63,    57,    56,
      60,    49,     0,     0,     0,    15,    13,   218,     0,     0,
     263,    28,     0,   295,   252,     0,     0,    95,    97,     0,
       0,     0,     0,     0,   238,   293,     0,     0,     0,     0,
      23,     0,   299,     0,     0,   255,   258,   259,   217,   235,
     236,   215,     0,   233,   234,   216,    71,    68,     0,    84,
       0,   152,     0,     0,     0,     0,     0,   325,    38,   111,
     302,     0,   168,   170,   185,   183,   174,   187,   189,   191,
     193,   197,   201,   241,     0,     0,     0,   273,    14,   266,
     269,   268,     0,   244,     0,   308,     0,     0,   213,    53,
      51,    50,    48,   115,   110,     0,   287,   261,   262,     0,
      22,     0,     0,   296,    87,     0,     0,   103,     0,    99,
      94,   311,   101,   128,   108,   104,   292,    35,    34,   237,
      32,    30,    25,    28,    24,   305,     0,     0,     0,    67,
      70,    87,   153,   147,     0,   138,     0,   130,   143,     0,
     144,   323,   300,     0,   318,   319,   239,     0,   270,   272,
     265,     0,     0,   240,   247,   242,   247,   211,    52,     0,
       0,    21,    20,   294,     0,   113,     0,    93,     0,     0,
     310,   106,     0,   126,   293,     0,    31,    27,    26,   304,
     254,   256,   257,     0,     0,   314,    88,     0,   151,     0,
       0,   140,     0,     0,   142,   141,   165,   271,   264,   322,
     321,   267,   243,   308,   246,   249,    12,     0,    86,   132,
     102,   100,   311,     0,     0,   291,     0,   299,     0,   283,
      28,   277,   158,   160,   159,   313,   312,   156,     0,   148,
     149,     0,   146,   134,     0,     0,   133,   136,     0,     0,
     306,   251,   245,   248,   260,     0,   309,     0,     0,    29,
     297,     0,     0,   282,   280,   281,     0,     0,     0,   276,
     274,   275,     0,   157,   155,   154,   150,   137,     0,   135,
     129,   320,   250,     0,   128,   125,   305,   285,   162,     0,
     279,   317,   139,   131,   127,   303,   284,   161,   278,   316,
     315
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -366,  -366,  -366,  -366,  -366,   318,  -366,   154,   312,  -366,
     313,  -366,  -204,   -22,    35,  -366,  -366,  -108,  -366,    55,
       1,   213,  -366,   162,    73,  -366,  -366,  -366,  -366,  -366,
    -366,  -366,  -366,  -366,  -366,  -366,  -366,    36,  -366,  -366,
    -366,  -366,   271,   273,    57,    -1,   155,    58,  -366,     9,
    -366,  -366,  -366,  -366,  -366,  -102,  -366,  -366,  -366,   -57,
    -366,  -366,  -366,    44,   129,  -366,  -366,  -366,  -201,  -366,
     -41,  -366,  -365,  -366,    -4,  -366,  -149,   248,   -14,  -366,
    -366,    23,   222,   223,   221,  -366,   220,  -366,   225,  -366,
     -69,  -366,  -366,   216,  -366,  -366,  -366,  -366,  -366,   364,
    -366,  -366,  -366,  -366,  -366,    54,    60,  -366,  -366,   -10,
      -7,  -366,  -366,  -366,   371,  -366,    64,  -324,  -366,   -61,
     297,  -366,   -54,  -111,  -366,  -366,  -366,    -9,    46,   121,
      12,   -99,   -51,    28,    14,    51,   -40,  -320,  -366,     7,
     194
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    36,    37,    38,    39,    40,    41,   276,    42,    43,
      44,   212,   114,   232,   115,   376,   230,   116,   226,   427,
     251,    47,    48,   289,   201,   202,    49,   130,   329,    50,
      51,    52,    53,    54,    55,    56,    57,   365,   249,    58,
      59,    60,   104,   105,   310,   311,   108,   312,   109,   110,
      61,    62,    63,    64,    65,   373,    66,    67,    68,   335,
     391,   436,    69,   255,   137,   336,   431,   432,   252,   387,
     428,   421,   481,   423,    70,   155,    71,    72,    73,    74,
     167,    75,    76,    77,    78,   173,    79,   176,    80,   181,
      81,    82,    83,   186,    84,   121,   122,   126,   118,    85,
     127,   123,    86,   187,   284,   285,   286,   442,   443,   100,
      87,   119,   380,   235,    88,   299,   278,   279,   348,   459,
     460,   461,   453,   454,   455,    96,    89,    90,   317,   214,
     324,   152,   382,   355,   371,   330,   463,   280,   281,   401,
     149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,    46,    95,   102,   261,   225,   236,   301,   297,   239,
     128,   124,   107,   182,    94,   117,   120,   125,   237,   422,
     313,   240,   133,   131,   132,   177,   244,   399,   139,   136,
     138,   400,   247,   228,    99,   101,    99,   307,   168,   111,
      46,   204,   103,   111,     1,     2,    91,   209,   111,   343,
     111,   153,   337,     6,   111,    45,  -298,   204,   234,   207,
     174,   112,   -98,   178,   452,  -288,   208,   456,   175,   154,
     215,   205,     1,     2,    91,   206,   179,   306,   180,   168,
     154,     6,   154,   210,   229,   213,   308,   477,   113,    18,
      19,   478,   113,   480,   143,    20,    21,   113,    22,   113,
      24,   362,   183,   113,    93,   223,    26,   300,   224,   171,
     309,  -298,   272,   219,   487,   399,   103,    18,    19,   400,
     204,    30,    31,    20,    21,   246,    22,    35,    24,   333,
     172,   334,   184,   185,    26,   233,   151,   151,   395,   151,
     129,   379,   263,   157,    97,    98,   106,   260,    -5,    30,
      31,   158,   159,   160,   234,   234,   161,   242,   162,   234,
      30,   342,   429,   163,   164,   409,   349,   242,   234,   135,
     165,   166,   430,   458,   452,   347,   140,     8,   144,   234,
     277,   283,    10,   291,     5,   290,    -6,   148,   433,   150,
     266,   437,   156,   291,   151,   290,   168,   169,   170,   293,
     203,   277,   216,   298,   296,   220,   444,   221,   374,   305,
     211,   304,   222,   227,   381,   378,   457,   241,   357,   238,
     231,   248,   253,   319,   326,   254,   245,   322,   256,   325,
     258,   259,   327,   467,   419,   424,   303,   470,   264,     1,
       2,    91,   265,   273,   331,   287,   474,   475,     6,   294,
     138,   302,   315,   316,   320,   321,   323,    99,   318,   328,
     332,   339,   353,   274,   350,    99,   352,   482,   192,   346,
     344,   345,   483,   351,  -246,   368,   354,   356,   359,   340,
     360,   361,   364,   366,    18,    19,   307,   370,   375,   372,
      20,    21,   389,    22,   390,    24,   383,   384,   392,   402,
     393,    26,   407,   424,   406,   410,   414,   424,   425,   424,
     416,   434,   411,   424,   275,   435,    30,    31,   439,     1,
       2,    91,   438,   441,   385,   445,   447,   448,     6,   388,
     424,   449,   451,     1,     2,    91,   462,   468,   154,   396,
     424,   465,     6,   397,   333,   473,   277,   277,   379,   479,
     283,   489,   404,   145,   282,   146,   417,   142,   377,   295,
     408,   257,   358,   367,   292,    19,   369,   386,   413,   412,
      20,    21,   484,    22,   217,   418,   218,   314,    18,    19,
     469,    26,   394,   338,    20,    21,   464,    22,    46,    24,
     267,   269,   268,   270,   134,    26,    30,    31,     1,     2,
       3,   271,   262,   288,  -307,     4,     5,     6,   403,     7,
      30,    31,     8,   147,   398,     9,   405,    10,    11,   488,
     415,   385,   243,   486,   363,   485,   446,   466,    46,   450,
      12,   440,    13,    14,    15,   277,   426,   472,    16,    17,
       0,   490,     0,    18,    19,     0,   471,   476,     0,    20,
      21,   341,    22,    23,    24,     0,     0,    25,     0,     0,
      26,     0,    27,    28,     0,    29,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,    31,    32,     0,    33,
      34,    35,     1,     2,    91,     0,     0,     0,     0,     4,
       5,     6,     0,     7,     0,     0,     8,     0,     0,     9,
       0,    10,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,    13,    14,    15,     0,
       0,     0,    16,    17,     0,     0,     0,    18,    19,     0,
       0,     0,     0,    20,    21,     0,    22,   141,    24,     0,
       0,    25,     0,     0,    26,     0,    27,    28,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
      31,    32,     0,    33,    34,    35,     1,     2,    91,     0,
       0,     0,     0,     4,     5,     6,     0,     7,     0,     0,
       8,     0,     0,     9,     0,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
      13,    14,    15,     0,     0,     0,    16,    17,     0,     0,
       0,    18,    19,     0,     0,     0,     0,    20,    21,     0,
      22,     0,    24,     0,     0,    25,     0,     0,    26,     0,
      27,    28,     0,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    31,    32,     0,    33,    34,    35,
       1,     2,    91,     0,     0,     0,     0,     4,     0,     6,
       0,     7,     0,     0,     0,     0,     0,     9,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,     0,    14,    15,     0,     0,     0,
       0,    17,     0,     0,     0,    18,    19,     0,     0,     0,
       0,    20,    21,     0,    22,   250,    24,     0,     0,    25,
       0,     0,    26,     0,    27,    28,     0,    29,     0,     0,
       0,     0,     0,     1,     2,    91,     0,    30,    31,     0,
       4,     0,     6,    35,     7,     0,     0,     0,     0,     0,
       9,     0,     0,    11,     0,     0,     0,     0,     0,     0,
       0,     1,     2,    91,     0,    12,     0,     0,    14,    15,
       6,     0,     0,     0,    17,     0,     0,     0,    18,    19,
       0,     0,   282,     0,    20,    21,     0,    22,     0,    24,
       0,     0,    25,     0,     0,    26,     0,    27,    28,     0,
      29,     0,     0,     0,     0,     0,    18,    19,     0,     0,
      30,    31,    20,    21,     0,    22,    35,    24,     1,     2,
      91,     0,     0,    26,     0,     0,     0,     6,     0,     0,
       0,     1,     2,    91,     0,     0,     0,     0,    30,    31,
       6,     0,   274,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,    91,     0,    18,    19,     0,     0,     0,     6,    20,
      21,     0,    22,     0,    24,     0,    18,    19,     0,     0,
      26,     0,    20,    21,     0,    22,     0,    24,     1,     2,
      91,     0,     0,    26,     0,    30,    31,     6,     0,     0,
       0,     0,   188,     0,   420,    19,     0,     0,    30,    31,
      20,    21,   189,    22,     0,    24,     0,     0,     0,     0,
       0,    26,   190,     0,   191,     0,     0,     0,     0,   192,
       0,     0,     0,     0,    19,     0,    30,    31,     0,    20,
      21,     0,    22,     0,    24,     0,     0,   193,     0,     0,
      26,     0,   194,     0,     0,     0,     0,     0,     0,     0,
     195,     0,   196,     0,     0,    30,    31,     0,   197,     0,
       0,     0,     0,   198,     0,   199,     0,     0,     0,   200
};

static const yytype_int16 yycheck[] =
{
       4,     0,     6,    13,   153,   113,   117,   211,   209,   120,
      24,    20,    16,    82,     5,    19,    20,    21,   117,   384,
     221,   120,    29,    27,    28,    25,   125,   351,    35,    33,
      34,   351,   131,    27,    11,    12,    13,     5,    13,     5,
      39,    24,    24,     5,     3,     4,     5,    18,     5,    30,
       5,    43,   253,    12,     5,     0,    18,    24,    37,    12,
      57,    18,    44,    63,    43,     0,    19,    18,    65,    61,
      45,    54,     3,     4,     5,    58,    76,    44,    78,    13,
      61,    12,    61,    54,    78,    19,    54,   452,    54,    48,
      49,   456,    54,   458,    39,    54,    55,    54,    57,    54,
      59,   302,    24,    54,     5,     9,    65,    73,   112,    50,
      78,    73,   181,   104,   479,   439,    24,    48,    49,   439,
      24,    80,    81,    54,    55,   129,    57,    86,    59,    34,
      71,    36,    54,    55,    65,    18,    19,    19,   339,    19,
      71,    19,   156,    32,     5,     5,     5,   151,     0,    80,
      81,    40,    41,    42,    37,    37,    45,    37,    47,    37,
      80,   260,     9,    52,    53,   366,   277,    37,    37,    18,
      59,    60,    19,    43,    43,    33,     0,    17,    31,    37,
     184,   185,    22,   192,    11,   192,     0,    75,   389,    19,
     167,   392,     8,   202,    19,   202,    13,    15,     7,   203,
      19,   205,    45,   210,   208,    44,   407,    18,   316,   216,
      54,   215,    19,    18,   325,   323,   420,    73,   287,    69,
      33,    19,    18,   227,   234,    19,    74,   231,     9,   233,
      58,     5,   242,   434,   383,   384,   213,   438,    59,     3,
       4,     5,    45,     5,   248,    27,   447,   448,    12,     5,
     254,    18,     5,    19,     5,     5,    19,   234,    73,    19,
      46,    18,    74,    27,    19,   242,    24,   468,    33,    73,
     274,   275,   473,    19,    18,     9,    19,    18,    73,   256,
      73,    73,    19,    18,    48,    49,     5,    19,    19,    29,
      54,    55,    18,    57,    30,    59,    45,    45,    18,    24,
      30,    65,    18,   452,    58,     5,    30,   456,    19,   458,
      27,    18,    73,   462,    78,    36,    80,    81,    19,     3,
       4,     5,    18,    18,   328,    30,    18,    18,    12,   333,
     479,     5,    18,     3,     4,     5,    19,    18,    61,   343,
     489,    21,    12,   347,    34,    18,   350,   351,    19,    18,
     354,    19,   356,    41,    24,    42,   378,    39,   323,   205,
     364,   148,   289,   306,   202,    49,   308,   331,   372,   370,
      54,    55,   474,    57,   103,   379,   103,   222,    48,    49,
     437,    65,   338,   254,    54,    55,   427,    57,   387,    59,
     168,   170,   169,   173,    30,    65,    80,    81,     3,     4,
       5,   176,   154,   187,    74,    10,    11,    12,   354,    14,
      80,    81,    17,    42,   350,    20,   356,    22,    23,   480,
     374,   425,   125,   477,   303,   476,   412,   431,   427,   417,
      35,   403,    37,    38,    39,   439,   385,   441,    43,    44,
      -1,   481,    -1,    48,    49,    -1,   439,   451,    -1,    54,
      55,   257,    57,    58,    59,    -1,    -1,    62,    -1,    -1,
      65,    -1,    67,    68,    -1,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    -1,    84,
      85,    86,     3,     4,     5,    -1,    -1,    -1,    -1,    10,
      11,    12,    -1,    14,    -1,    -1,    17,    -1,    -1,    20,
      -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    37,    38,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    54,    55,    -1,    57,    58,    59,    -1,
      -1,    62,    -1,    -1,    65,    -1,    67,    68,    -1,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    -1,    84,    85,    86,     3,     4,     5,    -1,
      -1,    -1,    -1,    10,    11,    12,    -1,    14,    -1,    -1,
      17,    -1,    -1,    20,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      37,    38,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    54,    55,    -1,
      57,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,    -1,
      67,    68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    -1,    84,    85,    86,
       3,     4,     5,    -1,    -1,    -1,    -1,    10,    -1,    12,
      -1,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    54,    55,    -1,    57,    58,    59,    -1,    -1,    62,
      -1,    -1,    65,    -1,    67,    68,    -1,    70,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    80,    81,    -1,
      10,    -1,    12,    86,    14,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    -1,    35,    -1,    -1,    38,    39,
      12,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,    49,
      -1,    -1,    24,    -1,    54,    55,    -1,    57,    -1,    59,
      -1,    -1,    62,    -1,    -1,    65,    -1,    67,    68,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,
      80,    81,    54,    55,    -1,    57,    86,    59,     3,     4,
       5,    -1,    -1,    65,    -1,    -1,    -1,    12,    -1,    -1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    80,    81,
      12,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,    48,    49,    -1,    -1,    -1,    12,    54,
      55,    -1,    57,    -1,    59,    -1,    48,    49,    -1,    -1,
      65,    -1,    54,    55,    -1,    57,    -1,    59,     3,     4,
       5,    -1,    -1,    65,    -1,    80,    81,    12,    -1,    -1,
      -1,    -1,     6,    -1,    48,    49,    -1,    -1,    80,    81,
      54,    55,    16,    57,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    65,    26,    -1,    28,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    49,    -1,    80,    81,    -1,    54,
      55,    -1,    57,    -1,    59,    -1,    -1,    51,    -1,    -1,
      65,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    -1,    -1,    80,    81,    -1,    72,    -1,
      -1,    -1,    -1,    77,    -1,    79,    -1,    -1,    -1,    83
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    10,    11,    12,    14,    17,    20,
      22,    23,    35,    37,    38,    39,    43,    44,    48,    49,
      54,    55,    57,    58,    59,    62,    65,    67,    68,    70,
      80,    81,    82,    84,    85,    86,    88,    89,    90,    91,
      92,    93,    95,    96,    97,   106,   107,   108,   109,   113,
     116,   117,   118,   119,   120,   121,   122,   123,   126,   127,
     128,   137,   138,   139,   140,   141,   143,   144,   145,   149,
     161,   163,   164,   165,   166,   168,   169,   170,   171,   173,
     175,   177,   178,   179,   181,   186,   189,   197,   201,   213,
     214,     5,   161,     5,   136,   161,   212,     5,     5,   168,
     196,   168,   196,    24,   129,   130,     5,   161,   133,   135,
     136,     5,    18,    54,    99,   101,   104,   161,   185,   198,
     161,   182,   183,   188,   214,   161,   184,   187,   165,    71,
     114,   161,   161,   197,   186,    18,   161,   151,   161,   197,
       0,    58,    92,   106,    31,    95,    97,   201,    75,   227,
      19,    19,   218,    43,    61,   162,     8,    32,    40,    41,
      42,    45,    47,    52,    53,    59,    60,   167,    13,    15,
       7,    50,    71,   172,    57,    65,   174,    25,    63,    76,
      78,   176,   177,    24,    54,    55,   180,   190,     6,    16,
      26,    28,    33,    51,    56,    64,    66,    72,    77,    79,
      83,   111,   112,    19,    24,    54,    58,    12,    19,    18,
      54,    54,    98,    19,   216,    45,    45,   129,   130,   136,
      44,    18,    19,     9,   161,   104,   105,    18,    27,    78,
     103,    33,   100,    18,    37,   200,   210,   218,    69,   210,
     218,    73,    37,   207,   218,    74,   161,   218,    19,   125,
      58,   107,   155,    18,    19,   150,     9,   108,    58,     5,
     161,   163,   164,   165,    59,    45,   168,   169,   170,   171,
     173,   175,   177,     5,    27,    78,    94,   161,   203,   204,
     224,   225,    24,   161,   191,   192,   193,    27,   180,   110,
     197,   214,   110,   161,     5,    94,   161,   155,   197,   202,
      73,    99,    18,   168,   161,   197,    44,     5,    54,    78,
     131,   132,   134,   155,   133,     5,    19,   215,    73,   161,
       5,     5,   161,    19,   217,   161,   196,   196,    19,   115,
     222,   161,    46,    34,    36,   146,   152,   155,   151,    18,
     168,   227,   218,    30,   161,   161,    73,    33,   205,   210,
      19,    19,    24,    74,    19,   220,    18,   177,   111,    73,
      73,    73,   155,   216,    19,   124,    18,   131,     9,   134,
      19,   221,    29,   142,   104,    19,   102,   101,   104,    19,
     199,   210,   219,    45,    45,   161,   124,   156,   161,    18,
      30,   147,    18,    30,   150,   155,   161,   161,   203,   204,
     224,   226,    24,   192,   161,   193,    58,    18,   161,   155,
       5,    73,   132,   161,    30,   215,    27,   100,   161,   163,
      48,   158,   159,   160,   163,    19,   222,   106,   157,     9,
      19,   153,   154,   155,    18,    36,   148,   155,    18,    19,
     220,    18,   194,   195,   155,    30,   221,    18,    18,     5,
     217,    18,    43,   209,   210,   211,    18,    99,    43,   206,
     207,   208,    19,   223,   157,    21,   161,   155,    18,   146,
     155,   226,   161,    18,   155,   155,   161,   159,   159,    18,
     159,   159,   155,   155,   142,   219,   209,   159,   206,    19,
     223
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    89,    89,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    98,    98,    99,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   105,   106,   106,   107,   108,
     108,   108,   108,   108,   108,   108,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   117,   118,   118,   118,   118,   118,   119,
     120,   121,   121,   122,   123,   123,   124,   124,   125,   125,
     126,   126,   127,   128,   128,   129,   129,   130,   130,   131,
     131,   131,   132,   132,   133,   133,   134,   135,   135,   136,
     136,   137,   137,   138,   138,   139,   139,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   148,
     148,   149,   150,   150,   151,   151,   152,   152,   153,   153,
     154,   154,   155,   156,   155,   157,   157,   158,   158,   159,
     159,   160,   160,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   166,   166,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   168,   168,   169,   169,
     170,   170,   171,   171,   172,   172,   173,   173,   174,   174,
     175,   175,   176,   176,   176,   176,   177,   177,   178,   178,
     178,   179,   179,   180,   180,   181,   181,   181,   181,   181,
     181,   181,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   186,   186,   187,   187,   188,   188,   189,   189,   190,
     190,   190,   191,   192,   192,   192,   193,   193,   194,   194,
     195,   195,   196,   197,   198,   198,   199,   199,   200,   200,
     201,   201,   202,   202,   203,   203,   203,   203,   203,   203,
     204,   204,   205,   205,   206,   206,   207,   207,   208,   208,
     209,   209,   210,   210,   211,   211,   212,   212,   213,   214,
     214,   215,   215,   215,   216,   216,   216,   217,   217,   217,
     218,   218,   218,   219,   219,   219,   220,   220,   220,   221,
     221,   221,   222,   222,   222,   223,   223,   223,   224,   225,
     226,   226,   226,   227,   227,   227
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       2,     0,     6,     3,     1,     0,     2,     1,     2,     2,
       5,     3,     2,     2,     3,     2,     0,     4,     0,     3,
       0,     3,     2,     1,     3,     2,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       1,     1,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     2,     0,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     3,     1,     2,     0,     3,     0,
       1,     1,     2,     5,     4,     2,     0,     2,     1,     1,
       3,     1,     3,     1,     3,     1,     2,     1,     3,     1,
       3,     3,     2,     5,     2,     4,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     8,     5,     5,     0,     7,
       4,     9,     6,     6,     6,     4,     3,     3,     0,     3,
       0,     5,     3,     0,     3,     1,     3,     1,     1,     1,
       2,     0,     1,     0,     5,     2,     1,     2,     1,     1,
       1,     4,     3,     2,     1,     4,     0,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     4,     2,     2,     0,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     0,     1,
       0,     2,     1,     2,     2,     2,     2,     4,     3,     3,
       3,     2,     2,     3,     1,     4,     1,     0,     1,     0,
       2,     1,     2,     2,     4,     2,     1,     1,     1,     1,
       7,     4,     1,     0,     3,     2,     1,     3,     1,     1,
       2,     3,     1,     0,     1,     1,     5,     4,     3,     2,
       1,     1,     5,     4,     3,     2,     1,     3,     1,     2,
       1,     3,     1,     0,     3,     1,     0,     4,     1,     0,
       3,     1,     0,     5,     1,     0,     3,     1,     0,     3,
       1,     0,     3,     3,     2,     3,     3,     2,     2,     2,
       3,     1,     1,     3,     1,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 80 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"Hello\n";
          }
#line 1844 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 124 "parse.y" /* yacc.c:1646  */
    {
            tableMan.getCurrentTable()->insertFuncDef((yyvsp[-3].s), (yyvsp[0].ast));
          }
#line 1852 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 134 "parse.y" /* yacc.c:1646  */
    {std::cout<<"varaglist\n";}
#line 1858 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 137 "parse.y" /* yacc.c:1646  */
    {std::cout<<"EQUAL\n";}
#line 1864 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 141 "parse.y" /* yacc.c:1646  */
    {std::cout<<"star_fpdef\n";}
#line 1870 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 179 "parse.y" /* yacc.c:1646  */
    { 
            //std::cout<<$1->getNumber()<<" rhs "<<$3->getNumber()<<std::endl; 
            double val_exp_st = (yyvsp[-2].ast)->getNumber();
            double rhs = (yyvsp[0].ast)->getNumber();
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
              tableMan.getCurrentTable()->modifyEntry(val_exp_st, (yyvsp[-2].ast)->getName());
            //}
            //else{
              //std::cout<<"NameError: name is not defined\n";
            //}
            //symTab.insert(val_exp_st, $1->getName(), $1->getDataType());
            //$$ = symTab.lookUp($1->getName(), count); count++;
          }
#line 1916 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 221 "parse.y" /* yacc.c:1646  */
    {  //Testlist is the name 
            //std::cout << "hello"<<$2->getDataType()<<std::endl;
            //std::cout<<"expr_stmt\n";
            //Ast* a = $2->getLeft();
            //std::cout<<a->getNumber()<<std::endl;
            //symTab.insert(a->getNumber(), identName, "Int");
          }
#line 1928 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 235 "parse.y" /* yacc.c:1646  */
    {
              if(globalFlag){
                tableMan.getTableAt(0)->modifyEntry(eval((yyvsp[-1].ast)), globalName);
              }
              else{
              if((yyvsp[-1].ast)->getNodetype() == 'I'){  
                tableMan.getCurrentTable()->insert(eval((yyvsp[-1].ast)), identName, "Int");
              }
              else if((yyvsp[-1].ast)->getNodetype() == 'F'){
                tableMan.getCurrentTable()->insert(eval((yyvsp[-1].ast)), identName, "Float");
              }
              else if((yyvsp[-1].ast)->getNodetype() == 'M'){
                tableMan.getCurrentTable()->insert(-eval((yyvsp[-1].ast)->getLeft()), identName, ((yyvsp[-1].ast)->getLeft())->getDataType());
              }  
              else{
                tableMan.getCurrentTable()->insert(eval((yyvsp[-1].ast)), identName, "Float");
              }
              }
              globalFlag = false;
              std::string tempType;
              if((yyvsp[-1].ast)->getNodetype() == 'I'){  
                tempType = "Int";
              } 
              //We might not need to do all of this. if we send the rhs ast node as an argument 
              else if((yyvsp[-1].ast)->getNodetype() == 'F'){  tempType = "Float"; }
              else if((yyvsp[-1].ast)->getNodetype() == 'M'){  tempType = ((yyvsp[-1].ast)->getLeft())->getDataType(); }
              else { tempType = "Float"; }
              (yyval.ast) = new AstAssignmentNode('A', count, identName, tempType); //Change to tempType later
          }
#line 1962 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 267 "parse.y" /* yacc.c:1646  */
    { eAdd = true;}
#line 1968 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 268 "parse.y" /* yacc.c:1646  */
    { eSub = true;}
#line 1974 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 269 "parse.y" /* yacc.c:1646  */
    { eMult = true;}
#line 1980 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 270 "parse.y" /* yacc.c:1646  */
    {eDiv = true;}
#line 1986 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 271 "parse.y" /* yacc.c:1646  */
    {eMod = true;}
#line 1992 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 273 "parse.y" /* yacc.c:1646  */
    { std::cout<<"VBARE\n"; }
#line 1998 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 274 "parse.y" /* yacc.c:1646  */
    {std::cout<<"CIRCUM\n";}
#line 2004 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 275 "parse.y" /* yacc.c:1646  */
    {std::cout<<"LEFTS\n";}
#line 2010 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 276 "parse.y" /* yacc.c:1646  */
    {std::cout<<"RIGHTS\n";}
#line 2016 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 278 "parse.y" /* yacc.c:1646  */
    {eDSlash = true;}
#line 2022 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 282 "parse.y" /* yacc.c:1646  */
    {
            pFlag = true;
            (yyval.ast) = new AstPrintNode('Q', count, (yyvsp[0].ast)); count++;
            //std::cout<<"Type Print node points to: "<<$2->getNodetype()<<std::endl;
            if(tableMan.ifInGlobal()) { std::cout<<eval((yyvsp[0].ast))<<std::endl; } 
          }
#line 2033 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 292 "parse.y" /* yacc.c:1646  */
    { 
            //std::cout<<"opt_test"; 
            //std::cout << "= "<<eval($1) <<std::endl;
            //treeFree($1);
          }
#line 2043 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 324 "parse.y" /* yacc.c:1646  */
    {
            (yyval.ast) = new AstPrintNode('Q', count, (yyvsp[0].ast)); count++;
            if(tableMan.ifInGlobal()) { std::cout<<eval((yyvsp[0].ast))<<std::endl; }       
          }
#line 2052 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 391 "parse.y" /* yacc.c:1646  */
    {
            globalFlag = true;
          }
#line 2060 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 397 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"exec_stmt\n";
          }
#line 2068 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 401 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"exec_stmt\n";
          }
#line 2076 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 459 "parse.y" /* yacc.c:1646  */
    {std::cout<<"Test as expr\n";}
#line 2082 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 477 "parse.y" /* yacc.c:1646  */
    { 
            //std::cout<<"Inside Suite(1)\n";
            //$$[index]=new AstNode();
          }
#line 2091 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 481 "parse.y" /* yacc.c:1646  */
    {tableMan.pushTable();}
#line 2097 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 482 "parse.y" /* yacc.c:1646  */
    { 
            //std::cout<<"Inside Suite(2)\n";
            //$3->getName();
            (yyval.ast) = new AstSuiteNode('S', count, "Function_name", (yyvsp[-1].nodes)); //You should also be sending current[parent] scope 
            //std::cout<<"created a suite node\n";
            //std::cout<<"Popped fake scope\n";
            //tableMan.getCurrentTable()->displayTable();
            tableMan.popTable();
          }
#line 2111 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 494 "parse.y" /* yacc.c:1646  */
    {
            (yyval.nodes) = (yyvsp[0].nodes);
            (yyval.nodes)->push_back((yyvsp[-1].ast));
          }
#line 2120 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 498 "parse.y" /* yacc.c:1646  */
    {
            (yyval.nodes) = new std::vector<Ast*>();
            (yyval.nodes)->reserve(8);
            (yyval.nodes)->push_back((yyvsp[0].ast)); 
          }
#line 2130 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 509 "parse.y" /* yacc.c:1646  */
    { 
            //std::cout<<"old_test\n";
          }
#line 2138 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 525 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"test"<<$1<<std::endl;
          }
#line 2146 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 536 "parse.y" /* yacc.c:1646  */
    { //std::cout<<"or test\n";
          }
#line 2153 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 542 "parse.y" /* yacc.c:1646  */
    { //std::cout<<"and_test\n";
          }
#line 2160 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 549 "parse.y" /* yacc.c:1646  */
    { //std::cout<<"not_test\n";
          }
#line 2167 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 554 "parse.y" /* yacc.c:1646  */
    { //std::cout<<"Comparison\n"; 
          }
#line 2174 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 574 "parse.y" /* yacc.c:1646  */
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
#line 2194 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 589 "parse.y" /* yacc.c:1646  */
    {
          }
#line 2201 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 594 "parse.y" /* yacc.c:1646  */
    { 
          }
#line 2208 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 600 "parse.y" /* yacc.c:1646  */
    { 
          }
#line 2215 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 606 "parse.y" /* yacc.c:1646  */
    { 
          }
#line 2222 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 609 "parse.y" /* yacc.c:1646  */
    {
          }
#line 2229 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 619 "parse.y" /* yacc.c:1646  */
    {
            if(add)
            {
              //$$ = $1 + $3;
              (yyval.ast) = new AstNode('+',count, (yyvsp[-2].ast), (yyvsp[0].ast));
              count++;
              add = false;
            }
            else if(subtract)
            {
              //$$ = $1 - $3;
              (yyval.ast) = new AstNode('-',count, (yyvsp[-2].ast), (yyvsp[0].ast));
              count++;
              subtract = false;
            }
        }
#line 2250 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 637 "parse.y" /* yacc.c:1646  */
    {add = true;}
#line 2256 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 638 "parse.y" /* yacc.c:1646  */
    {subtract = true;}
#line 2262 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 641 "parse.y" /* yacc.c:1646  */
    {  
            //std::cout<<"Term\n";
            }
#line 2270 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 645 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"EXECUTE DOUBLESLASH"<<dSlash<<std::endl;
            if(mult){
              //$$ = $1 * $3;
              (yyval.ast) = new AstNode('*', count, (yyvsp[-2].ast), (yyvsp[0].ast));
              count++;
              //std::cout<<"EXECUTE MULT"<<mult<<std::endl;
              mult = false;
            }
            else if(division){
                //$$ = floor((float)$1 / (float)$3);
                (yyval.ast) = new AstNode('/', count, (yyvsp[-2].ast), (yyvsp[0].ast)); count++;
              //std::cout<<"EXECUTE DIV"<<division<<std::endl;
              division = false;
            }
            else if(modulus){
              if((yyvsp[0].ast) != 0){
                //$$ = $1 % $3;
                (yyval.ast) = new AstNode('%', count, (yyvsp[-2].ast), (yyvsp[0].ast)); count++;
              }
              else{
                //$$ = 0;
              }
              //std::cout<<"EXECUTE MOD"<<modulus<<std::endl;
              modulus = false;
            }
            else if(dSlash){
                //$$ = floor((float)$1/(float)$3);
                (yyval.ast) = new AstNode('D', count, (yyvsp[-2].ast), (yyvsp[0].ast)); count++;
              dSlash = false;
            }
            //std::cout<<"Term\n";
          }
#line 2308 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 680 "parse.y" /* yacc.c:1646  */
    { mult = true;}
#line 2314 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 681 "parse.y" /* yacc.c:1646  */
    { 
                  division = true;
                }
#line 2322 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 684 "parse.y" /* yacc.c:1646  */
    { 
                    modulus = true;
                  }
#line 2330 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 688 "parse.y" /* yacc.c:1646  */
    { 
                    dSlash = true;
                  }
#line 2338 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 694 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"Come into factor\n";
            //std::cout<<uNegCount<<std::endl;
            if(uPlus){
              //$$ = $2;
              (yyval.ast) = new AstNode('P', count, (yyvsp[0].ast), NULL); count++;
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
              (yyval.ast) = new AstNode('M', count, (yyvsp[0].ast), NULL); count++;
              //std::cout<<"uNegValue: "<<$$<<std::endl;
              uNegCount--;
              if(uNegCount<=0){
                uNegCount = 0;
                uNeg = false;
              }
            }
          }
#line 2371 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 725 "parse.y" /* yacc.c:1646  */
    { uPlus = true; uPlusCount++; }
#line 2377 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 726 "parse.y" /* yacc.c:1646  */
    { 
                  uNeg = true;
                  uNegCount++;
                  //std::cout<<"MINUS"<<std::endl;
                }
#line 2387 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 735 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = pow($1, $4);
            (yyval.ast) = new AstNode('E', count, (yyvsp[-3].ast), (yyvsp[0].ast)); count++;
          }
#line 2396 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 740 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<$2<<std::endl;
            if((yyvsp[0].ast) != NULL){
            //std::cout<<"Inside power star_trailer\n";
            //std::cout<<$1->getName();
            if(tableMan.ifInGlobal()){
              //if(tableMan.ifFuncEntryExists(identName)){
                //Ast* tempSuite = tableMan.getCurrentTable()->getFuncEntry(identName);
                //tableMan.pushTable();
                //std::cout<<$1->getDataType()<<std::endl;
                eval((yyvsp[-1].ast));
                //std::cout<<"Evaluated suite node on call\n";
                //tableMan.popTable(); //Nested functions won't work here I think
              //}
              //else{
                //std::cout<<"Function not found\n";
              //}
           }
           else{
             std::cout<<"Create call node\n";
           } 
           }
          }
#line 2424 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 766 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"Inside star_trailer\n";
            //$$ = new AstNode('P', count, NULL, NULL);
          }
#line 2433 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 770 "parse.y" /* yacc.c:1646  */
    { (yyval.ast) = NULL; }
#line 2439 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 774 "parse.y" /* yacc.c:1646  */
    { 
            //std::cout<<"In atom\n";
            (yyval.ast) = (yyvsp[-1].ast); 
            comingFromPar = true;
          }
#line 2449 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 783 "parse.y" /* yacc.c:1646  */
    { 
              //tableMan.getCurrentTable()->displayTable();
            //std::cout<<"Searching for: "<<$1<<std::endl;
            if(tableMan.ifExists((yyvsp[0].s))){
              (yyval.ast) = tableMan.lookUp((yyvsp[0].s), count); count++;
              //std::cout<<"It exists: "<<$$->getDataType()<<std::endl;
              //std::cout<<"In atom: "<<$$->getNodetype()<<std::endl;
              globalName = (yyvsp[0].s); //To enable global
            }
            else{
              if(pFlag){
                //std::cout<<"NameError: name "<<$1<<" is not defined\n";
              }  
              identName = (yyvsp[0].s); 
              //std::cout<<$1<<std::endl;
            }
          }
#line 2471 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 801 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"Float value="<<$1<<std::endl;
            //std::cout<<"Reached atom"<<std::endl; 
            (yyval.ast) = new AstFloat('F',count, "temp", (yyvsp[0].d)); count++; //This node gets discarded anyways, temp node 
          }
#line 2481 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 807 "parse.y" /* yacc.c:1646  */
    {
            (yyval.ast) = new AstInt('I',count, "temp", (yyvsp[0].i)); count++; //This node gets discarded anyways, temp node 
          }
#line 2489 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 810 "parse.y" /* yacc.c:1646  */
    {std::cout<<"PLUS IN ATOM\n";}
#line 2495 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 814 "parse.y" /* yacc.c:1646  */
    {
            //$$ = new AstNode('Z', count, $1, NULL); count++; 
            //std::cout<<"In yield expr"<<$$<<std::endl; 
          }
#line 2504 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 822 "parse.y" /* yacc.c:1646  */
    {
            //$$ = new AstNode('Z', count, $1, NULL); count++;  
            //std::cout<<"In pick_yield"<<$$<<std::endl; 
          }
#line 2513 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 837 "parse.y" /* yacc.c:1646  */
    { std::cout <<"STRINGPLUS\n";}
#line 2519 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 838 "parse.y" /* yacc.c:1646  */
    {std::cout<<"STRING\n";}
#line 2525 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 883 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"testlist"<<$1<<std::endl;
          }
#line 2533 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 897 "parse.y" /* yacc.c:1646  */
    {std::cout<<"star_COMMA\n";}
#line 2539 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 917 "parse.y" /* yacc.c:1646  */
    {std::cout<<"argument\n";}
#line 2545 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 953 "parse.y" /* yacc.c:1646  */
    {std::cout<<"Encoding_decl\n";}
#line 2551 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 958 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = new AstNode('Z', count, NULL, $2); count++; 
          }
#line 2559 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 962 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = new AstNode('Z', count, NULL, NULL); count++; 
          }
#line 2567 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 977 "parse.y" /* yacc.c:1646  */
    {std::cout<<"star_comma\n";}
#line 2573 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 982 "parse.y" /* yacc.c:1646  */
    {std::cout<<"Star_COMMA\n";}
#line 2579 "parse.tab.cpp" /* yacc.c:1646  */
    break;


#line 2583 "parse.tab.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 1029 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}

