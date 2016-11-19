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
  #include "symbolTable.h"
  #include <cmath>
//  #include "ast.h"
  #include<fstream>
  #include<string.h>
	int yylex (void);
	extern int yylineno;
	extern char *yytext;
        extern int count;
        bool add=false,subtract=false, mult=false, division=false, powe=false, modulus=false;
        bool dSlash = false, uPlus = false, uNeg = false, comingFromPar = false;
        bool eAdd=false, eSub=false, eMult=false, eDiv=false, eMod=false, eDSlash=false;
        int uNegCount = 0, uPlusCount = 0;
	void yyerror (char const *);
        std::string identName;
        SymbolTable& symTab = SymbolTable::getInstance();

#line 87 "parse.tab.cpp" /* yacc.c:339  */

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
#line 23 "parse.y" /* yacc.c:355  */

  Ast* ast;
  double d; 
  int i;
  char* s; //Do we create a type class?

#line 221 "parse.tab.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 236 "parse.tab.cpp" /* yacc.c:358  */

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
#define YYLAST   999

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  324
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  490

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
       0,    58,    58,    59,    60,    69,    70,    73,    76,    77,
      80,    81,    84,    85,    88,    89,    92,    93,    96,    97,
     100,   103,   104,   107,   108,   111,   112,   115,   116,   119,
     120,   123,   124,   127,   128,   131,   134,   135,   138,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   152,   187,
     193,   194,   197,   213,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   230,   235,   238,   244,
     247,   248,   251,   254,   257,   258,   259,   260,   261,   264,
     267,   270,   271,   274,   277,   278,   281,   282,   285,   286,
     289,   290,   293,   296,   297,   300,   301,   304,   305,   308,
     309,   310,   313,   314,   317,   318,   321,   324,   325,   328,
     329,   332,   333,   336,   340,   346,   347,   350,   351,   352,
     353,   354,   355,   356,   357,   360,   361,   364,   365,   368,
     369,   372,   373,   376,   377,   380,   381,   384,   385,   388,
     389,   392,   395,   396,   399,   400,   403,   404,   407,   408,
     411,   412,   416,   417,   420,   421,   424,   425,   428,   431,
     434,   435,   444,   447,   450,   451,   454,   457,   460,   463,
     466,   467,   472,   475,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   492,   508,   512,   515,   518,
     521,   524,   527,   532,   533,   536,   537,   556,   557,   560,
     563,   599,   600,   603,   606,   612,   636,   639,   640,   645,
     648,   653,   661,   662,   665,   675,   676,   677,   678,   690,
     696,   700,   703,   708,   711,   716,   719,   720,   723,   724,
     727,   728,   731,   732,   735,   736,   739,   740,   743,   744,
     745,   748,   751,   752,   753,   756,   757,   760,   761,   764,
     765,   768,   772,   778,   779,   782,   783,   786,   787,   790,
     791,   794,   795,   798,   799,   800,   801,   802,   803,   806,
     807,   810,   811,   814,   815,   818,   819,   822,   823,   826,
     827,   831,   832,   835,   836,   839,   840,   843,   847,   851,
     857,   858,   859,   862,   863,   864,   867,   868,   869,   872,
     873,   874,   877,   878,   879,   882,   883,   884,   888,   889,
     890,   893,   894,   895,   898,   899,   900,   903,   906,   909,
     910,   911,   914,   915,   916
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
  "except_clause", "pick_AS_COMMA", "opt_AS_COMMA", "suite", "plus_stmt",
  "testlist_safe", "old_test", "old_lambdef", "test", "opt_IF_ELSE",
  "or_test", "and_test", "not_test", "comparison", "comp_op", "expr",
  "xor_expr", "and_expr", "shift_expr", "pick_LEFTSHIFT_RIGHTSHIFT",
  "arith_expr", "pick_PLUS_MINUS", "term", "pick_multop", "factor",
  "pick_unop", "power", "star_trailer", "atom",
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

#define YYPACT_NINF -353

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-353)))

#define YYTABLE_NINF -307

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     359,  -353,  -353,    62,   870,    64,   870,  -353,   119,  -353,
     122,   918,   918,   918,   108,   144,   870,    64,    43,   870,
      31,   870,  -353,   170,   900,  -353,  -353,   772,   870,   870,
      95,  -353,   159,   870,   870,   870,   179,  -353,  -353,   446,
     151,   172,    36,  -353,  -353,   186,  -353,   113,  -353,  -353,
    -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,
    -353,   173,  -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,
     174,     4,   181,  -353,    98,   178,   182,   189,    13,    10,
      24,  -353,   918,  -353,    18,  -353,  -353,    65,  -353,  -353,
    -353,  -353,   184,  -353,    20,  -353,    45,    23,   146,   143,
    -353,    38,   153,   109,    64,   162,  -353,   191,  -353,   194,
     137,  -353,   870,    55,   198,    11,   185,   141,   148,  -353,
      33,  -353,   147,  -353,  -353,    73,   150,  -353,  -353,   870,
    -353,   174,   202,  -353,  -353,   614,   204,   206,   217,  -353,
    -353,  -353,  -353,  -353,  -353,  -353,  -353,  -353,   687,   177,
     223,   870,  -353,   900,   900,  -353,   900,  -353,  -353,  -353,
    -353,  -353,   171,  -353,  -353,   192,  -353,   918,   918,   918,
     918,  -353,  -353,   918,  -353,  -353,   918,  -353,  -353,  -353,
    -353,   918,  -353,   233,   277,   800,   214,    18,  -353,  -353,
    -353,  -353,    31,  -353,  -353,  -353,  -353,  -353,  -353,  -353,
    -353,  -353,    31,   870,   237,   277,  -353,  -353,   870,   614,
     870,    49,   225,   918,  -353,   870,   870,  -353,  -353,   111,
      40,   614,    64,   242,  -353,   230,   183,   870,   246,   247,
    -353,   870,   235,   870,   918,  -353,  -353,  -353,  -353,  -353,
    -353,  -353,   918,  -353,  -353,  -353,   236,  -353,   870,  -353,
     211,  -353,   140,   614,   870,   240,   918,   113,  -353,  -353,
     174,    52,   181,  -353,  -353,  -353,   178,   182,   189,    13,
      10,    24,  -353,  -353,   870,   870,   187,   132,  -353,   243,
    -353,   244,   241,   248,   193,   249,   254,   918,  -353,   226,
    -353,  -353,  -353,  -353,  -353,   188,  -353,  -353,  -353,   200,
    -353,   201,   614,   143,   256,   258,    40,   268,   273,  -353,
    -353,   260,  -353,   255,  -353,  -353,    55,  -353,  -353,  -353,
    -353,   264,  -353,    41,  -353,   104,   245,   250,   870,  -353,
    -353,   256,   530,   870,   267,   257,   270,   261,   206,   614,
     178,  -353,  -353,   870,  -353,  -353,  -353,   870,  -353,  -353,
     277,   813,   262,  -353,   715,  -353,   870,  -353,  -353,   234,
     275,  -353,  -353,  -353,   870,  -353,   614,  -353,   289,   224,
     273,  -353,   870,   266,   230,   271,  -353,  -353,   185,   870,
    -353,  -353,  -353,   900,   883,   280,  -353,   530,   279,    47,
     614,   283,   269,   614,   284,  -353,  -353,  -353,  -353,  -353,
     287,  -353,  -353,  -353,   249,  -353,   290,  -353,   614,  -353,
     281,  -353,  -353,   260,   292,   294,  -353,   309,   235,   297,
      91,    50,   129,   298,  -353,   259,   870,  -353,  -353,  -353,
    -353,  -353,   870,  -353,  -353,   614,   300,  -353,   282,   614,
     813,  -353,   870,  -353,  -353,  -353,   301,  -353,   614,   614,
    -353,  -353,   870,   883,  -353,  -353,  -353,   883,   303,   883,
    -353,  -353,  -353,   883,  -353,  -353,  -353,   614,  -353,  -353,
    -353,  -353,   614,   255,  -353,   304,   130,  -353,   883,   129,
     308,  -353,  -353,  -353,  -353,  -353,  -353,  -353,   883,  -353
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      11,   219,   220,   218,     0,     0,     0,    79,     0,    80,
       0,     0,     0,     0,    96,     0,     0,     0,    28,   229,
     225,   227,   208,     8,     0,    73,   207,    69,    85,    82,
     231,   209,     0,     0,     0,   289,     0,     4,     2,    11,
       0,    17,     0,   124,   122,     9,    36,   324,    39,    40,
      41,    42,    43,    74,    75,    76,    78,    77,    44,    90,
      91,    45,    46,    47,    37,   117,   118,   119,   120,   121,
     301,   165,   166,   168,   171,   172,   185,   187,   189,   191,
     195,   199,     0,   206,   213,   221,   163,    53,   123,     3,
      83,   218,   116,   109,     0,   285,     0,     0,     0,   295,
      72,   114,     0,    96,     0,     0,   112,     0,   107,    92,
     105,    33,     0,     0,     0,     0,    26,   301,     0,   228,
     301,   224,     0,   223,   222,   301,     0,   226,   170,     0,
      66,   301,    89,    81,   230,     0,     0,   143,   145,   288,
       1,     8,    10,     9,     7,    16,    19,    18,   323,     0,
       0,   300,   252,     0,     0,   162,     0,   176,   175,   177,
     179,   181,   183,   174,   178,     0,   180,     0,     0,     0,
       0,   193,   194,     0,   198,   197,     0,   204,   203,   202,
     201,     0,   205,     0,    15,   246,   211,   213,    59,    61,
      65,    64,     0,    62,    55,    58,    54,    63,    57,    56,
      60,    49,     0,     0,     0,    15,    13,   217,     0,     0,
     262,    28,     0,   294,   251,     0,     0,    95,    97,     0,
       0,     0,     0,     0,   237,   292,     0,     0,     0,     0,
      23,     0,   298,     0,     0,   254,   257,   258,   216,   234,
     235,   214,     0,   232,   233,   215,    71,    68,     0,    84,
       0,   152,     0,     0,     0,     0,     0,   324,    38,   111,
     301,     0,   167,   169,   184,   182,   173,   186,   188,   190,
     192,   196,   200,   240,     0,     0,     0,   272,    14,   265,
     268,   267,     0,   243,     0,   307,     0,     0,   212,    53,
      51,    50,    48,   115,   110,     0,   286,   260,   261,     0,
      22,     0,     0,   295,    87,     0,     0,   103,     0,    99,
      94,   310,   101,   128,   108,   104,   291,    35,    34,   236,
      32,    30,    25,    28,    24,   304,     0,     0,     0,    67,
      70,    87,     0,   147,     0,   138,     0,   130,   143,     0,
     144,   322,   299,     0,   317,   318,   238,     0,   269,   271,
     264,     0,     0,   239,   246,   241,   246,   210,    52,     0,
       0,    21,    20,   293,     0,   113,     0,    93,     0,     0,
     309,   106,     0,   126,   292,     0,    31,    27,    26,   303,
     253,   255,   256,     0,     0,   313,    88,   155,     0,   151,
       0,     0,   140,     0,     0,   142,   141,   164,   270,   263,
     321,   320,   266,   242,   307,   245,   248,    12,     0,    86,
     132,   102,   100,   310,     0,     0,   290,     0,   298,     0,
     282,    28,   276,   157,   159,   158,   312,   311,   154,   153,
     148,   149,     0,   146,   134,     0,     0,   133,   136,     0,
       0,   305,   250,   244,   247,   259,     0,   308,     0,     0,
      29,   296,     0,     0,   281,   279,   280,     0,     0,     0,
     275,   273,   274,     0,   156,   150,   137,     0,   135,   129,
     319,   249,     0,   128,   125,   304,   284,   161,     0,   278,
     316,   139,   131,   127,   302,   283,   160,   277,   315,   314
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -353,  -353,  -353,  -353,  -353,   291,  -353,   117,   296,  -353,
     293,  -353,  -206,   -38,    21,  -353,  -353,  -109,  -353,    37,
       1,   197,  -353,   139,    59,  -353,  -353,  -353,  -353,  -353,
    -353,  -353,  -353,  -353,  -353,  -353,  -353,    22,  -353,  -353,
    -353,  -353,   251,   253,    53,   -21,   145,    57,  -353,    15,
    -353,  -353,  -353,  -353,  -353,  -122,  -353,  -353,  -353,   -77,
    -353,  -353,  -353,    28,   118,  -353,  -353,  -353,  -203,   -13,
    -353,  -352,  -353,    -4,  -353,  -150,   229,    -2,  -353,  -353,
      -3,   209,   215,   208,  -353,   207,  -353,   210,  -353,   -75,
    -353,  -353,   203,  -353,  -353,  -353,  -353,  -353,   355,  -353,
    -353,  -353,  -353,  -353,    35,    39,  -353,  -353,     6,    -8,
    -353,  -353,  -353,   345,  -353,    42,  -325,  -353,   -88,   274,
    -353,   -83,  -106,  -353,  -353,  -353,    -7,    26,   101,   -17,
     -92,   -70,     2,    -1,    25,   -71,  -320,  -353,   -29,   158
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    36,    37,    38,    39,    40,    41,   276,    42,    43,
      44,   212,   114,   232,   115,   376,   230,   116,   226,   387,
     251,    47,    48,   289,   201,   202,    49,   130,   329,    50,
      51,    52,    53,    54,    55,    56,    57,   365,   249,    58,
      59,    60,   104,   105,   310,   311,   108,   312,   109,   110,
      61,    62,    63,    64,    65,   373,    66,    67,    68,   335,
     392,   437,    69,   255,   137,   336,   432,   433,   252,   388,
     422,   480,   424,    70,   155,    71,    72,    73,    74,   167,
      75,    76,    77,    78,   173,    79,   176,    80,   181,    81,
      82,    83,   186,    84,   121,   122,   126,   118,    85,   127,
     123,    86,   187,   284,   285,   286,   443,   444,   100,    87,
     119,   380,   235,    88,   299,   278,   279,   348,   460,   461,
     462,   454,   455,   456,    96,    89,    90,   317,   214,   324,
     152,   382,   355,   371,   330,   464,   280,   281,   402,   149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,    46,    95,   261,   225,   301,   297,   182,    99,   101,
      99,   236,   107,   124,   239,   117,   120,   125,   313,   102,
      94,   133,   128,   131,   132,   237,   400,   139,   240,   136,
     138,   401,   423,   244,     1,     2,    91,    45,   228,   247,
      46,   209,   183,     6,   204,   307,   111,   153,   111,   177,
     337,   168,   151,     8,   111,   111,   430,   207,    10,  -297,
     111,   112,  -287,   171,   208,   154,   431,   174,   457,    93,
     234,   188,   184,   185,   205,   175,   143,   210,   206,    18,
      19,   189,   343,   215,   172,    20,    21,   178,    22,   229,
      24,   190,   151,   191,   308,   113,    26,   113,   192,   362,
     179,   476,   180,   113,   113,   477,   272,   479,   224,   113,
     242,    30,    31,   154,  -297,   400,   193,    35,   309,   219,
     401,   194,   300,   379,    97,   246,   486,    98,   234,   195,
     157,   196,   103,   103,   453,   204,   396,   197,   158,   159,
     160,   234,   198,   161,   199,   162,   223,   260,   200,   106,
     163,   164,   154,   -98,   263,   306,   168,   165,   166,   233,
     151,   204,   213,   410,   266,   347,   242,   234,   342,   234,
      -5,   349,   459,   453,   333,    30,   334,   135,   234,   140,
     277,   283,   144,     5,   290,   291,    -6,   434,   148,   156,
     438,   168,   150,   151,   290,   291,   170,   169,   216,   293,
     211,   277,   298,   203,   296,   445,   220,   374,   305,   221,
     303,   304,   357,   222,   378,   458,   227,   238,   231,   381,
     241,   248,   253,   319,   245,   254,   256,   322,   259,   325,
     264,    99,   466,   420,   425,   258,   469,   265,   273,    99,
     326,   287,   294,   302,   331,   473,   474,   315,   327,   316,
     138,   320,   321,   340,   323,   328,   318,   332,   339,   192,
     346,   359,   350,   351,   481,   352,  -245,   353,   354,   482,
     344,   345,   356,   360,   361,   364,   366,   368,   307,   370,
       1,     2,    91,   375,   372,   390,   403,   391,   393,     6,
     383,   394,   407,   408,   411,   384,   415,   412,   417,   426,
     429,   435,   439,   425,   274,   436,   440,   425,   442,   425,
     448,   446,   449,   425,   450,   452,   333,   463,   467,   472,
     154,   478,   295,   379,   385,    18,    19,   488,   425,   389,
     142,    20,    21,    46,    22,   146,    24,   145,   425,   397,
     418,   292,    26,   398,   377,   257,   277,   277,   358,   413,
     283,   483,   405,   386,   217,   275,   218,    30,    31,   367,
     409,   468,     1,     2,     3,   369,   395,   314,   414,     4,
       5,     6,   338,     7,   428,   419,     8,   267,   269,     9,
     270,    10,    11,   262,   268,   134,   271,   147,    46,   404,
     288,   487,   399,   485,    12,   406,    13,    14,    15,   243,
     416,   451,    16,    17,   363,   484,   441,    18,    19,   489,
     427,   470,   447,    20,    21,   341,    22,    23,    24,     0,
       0,    25,   385,     0,    26,     0,    27,    28,   465,    29,
       0,     0,     0,     0,     0,     0,   277,     0,   471,    30,
      31,    32,     0,    33,    34,    35,     0,     0,   475,     1,
       2,    91,     0,     0,     0,     0,     4,     5,     6,     0,
       7,     0,     0,     8,     0,     0,     9,     0,    10,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,    13,    14,    15,     0,     0,     0,    16,
      17,     0,     0,     0,    18,    19,     0,     0,     0,     0,
      20,    21,     0,    22,   141,    24,     0,     0,    25,     0,
       0,    26,     0,    27,    28,     0,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,    31,    32,     0,
      33,    34,    35,     1,     2,    91,     0,     0,     0,     0,
       4,     5,     6,     0,     7,     0,     0,     8,     0,     0,
       9,     0,    10,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,     0,    13,    14,    15,
       0,     0,     0,    16,    17,     0,     0,     0,    18,    19,
       0,     0,     0,     0,    20,    21,     0,    22,     0,    24,
       0,     0,    25,     0,     0,    26,     0,    27,    28,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    31,    32,     0,    33,    34,    35,     1,     2,    91,
       0,     0,     0,     0,     4,     0,     6,     0,     7,     0,
       0,     0,     0,     0,     9,     0,     0,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,     0,    14,    15,     0,     0,     0,     0,    17,     0,
       0,     0,    18,    19,     0,     0,     0,     0,    20,    21,
       0,    22,   250,    24,     0,     0,    25,     0,     0,    26,
       0,    27,    28,     0,    29,     0,     0,     0,     0,     0,
       1,     2,    91,     0,    30,    31,     0,     4,     0,     6,
      35,     7,     0,     0,     0,     0,     0,     9,     0,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     1,     2,
      91,     0,    12,     0,     0,    14,    15,     6,     0,     0,
       0,    17,     0,     0,     0,    18,    19,     0,     0,   282,
       0,    20,    21,     0,    22,     0,    24,     0,     0,    25,
       0,     0,    26,     0,    27,    28,     0,    29,     0,     0,
       0,     0,     0,    18,    19,     0,     0,    30,    31,    20,
      21,     0,    22,    35,    24,     1,     2,    91,     0,     0,
      26,     0,     0,     0,     6,     0,     0,     0,     0,  -306,
       0,     0,     0,     0,     0,    30,    31,     0,     0,     0,
       0,     0,     0,     1,     2,    91,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     1,     2,    91,     0,
      18,    19,     0,     0,   282,     6,    20,    21,     0,    22,
       0,    24,     0,     0,     0,     0,     0,    26,     0,     0,
     274,     0,     0,   129,     0,     0,     0,     0,    18,    19,
       0,     0,    30,    31,    20,    21,     0,    22,     0,    24,
       0,    18,    19,     0,     0,    26,     0,    20,    21,     0,
      22,     0,    24,     1,     2,    91,     0,     0,    26,     0,
      30,    31,     6,     0,     0,     0,     1,     2,    91,     0,
       0,     0,     0,    30,    31,     6,     0,     0,     0,     0,
       0,     0,     0,     1,     2,    91,     0,     0,     0,     0,
       0,     0,     6,     0,     0,     0,     0,     0,    18,    19,
       0,     1,     2,    91,    20,    21,     0,    22,     0,    24,
       6,   421,    19,     0,     0,    26,     0,    20,    21,     0,
      22,     0,    24,     0,     0,     0,     0,     0,    26,    19,
      30,    31,     0,     0,    20,    21,     0,    22,     0,    24,
       0,     0,     0,    30,    31,    26,     0,    19,     0,     0,
       0,     0,    20,    21,     0,    22,     0,     0,     0,     0,
      30,    31,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,    31
};

static const yytype_int16 yycheck[] =
{
       4,     0,     6,   153,   113,   211,   209,    82,    11,    12,
      13,   117,    16,    20,   120,    19,    20,    21,   221,    13,
       5,    29,    24,    27,    28,   117,   351,    35,   120,    33,
      34,   351,   384,   125,     3,     4,     5,     0,    27,   131,
      39,    18,    24,    12,    24,     5,     5,    43,     5,    25,
     253,    13,    19,    17,     5,     5,     9,    12,    22,    18,
       5,    18,     0,    50,    19,    61,    19,    57,    18,     5,
      37,     6,    54,    55,    54,    65,    39,    54,    58,    48,
      49,    16,    30,    45,    71,    54,    55,    63,    57,    78,
      59,    26,    19,    28,    54,    54,    65,    54,    33,   302,
      76,   453,    78,    54,    54,   457,   181,   459,   112,    54,
      37,    80,    81,    61,    73,   440,    51,    86,    78,   104,
     440,    56,    73,    19,     5,   129,   478,     5,    37,    64,
      32,    66,    24,    24,    43,    24,   339,    72,    40,    41,
      42,    37,    77,    45,    79,    47,     9,   151,    83,     5,
      52,    53,    61,    44,   156,    44,    13,    59,    60,    18,
      19,    24,    19,   366,   167,    33,    37,    37,   260,    37,
       0,   277,    43,    43,    34,    80,    36,    18,    37,     0,
     184,   185,    31,    11,   192,   192,     0,   390,    75,     8,
     393,    13,    19,    19,   202,   202,     7,    15,    45,   203,
      54,   205,   210,    19,   208,   408,    44,   316,   216,    18,
     213,   215,   287,    19,   323,   421,    18,    69,    33,   325,
      73,    19,    18,   227,    74,    19,     9,   231,     5,   233,
      59,   234,   435,   383,   384,    58,   439,    45,     5,   242,
     234,    27,     5,    18,   248,   448,   449,     5,   242,    19,
     254,     5,     5,   256,    19,    19,    73,    46,    18,    33,
      73,    73,    19,    19,   467,    24,    18,    74,    19,   472,
     274,   275,    18,    73,    73,    19,    18,     9,     5,    19,
       3,     4,     5,    19,    29,    18,    24,    30,    18,    12,
      45,    30,    58,    18,     5,    45,    30,    73,    27,    19,
      21,    18,    18,   453,    27,    36,    19,   457,    18,   459,
      18,    30,    18,   463,     5,    18,    34,    19,    18,    18,
      61,    18,   205,    19,   328,    48,    49,    19,   478,   333,
      39,    54,    55,   332,    57,    42,    59,    41,   488,   343,
     378,   202,    65,   347,   323,   148,   350,   351,   289,   370,
     354,   473,   356,   331,   103,    78,   103,    80,    81,   306,
     364,   438,     3,     4,     5,   308,   338,   222,   372,    10,
      11,    12,   254,    14,   387,   379,    17,   168,   170,    20,
     173,    22,    23,   154,   169,    30,   176,    42,   387,   354,
     187,   479,   350,   476,    35,   356,    37,    38,    39,   125,
     374,   418,    43,    44,   303,   475,   404,    48,    49,   480,
     385,   440,   413,    54,    55,   257,    57,    58,    59,    -1,
      -1,    62,   426,    -1,    65,    -1,    67,    68,   432,    70,
      -1,    -1,    -1,    -1,    -1,    -1,   440,    -1,   442,    80,
      81,    82,    -1,    84,    85,    86,    -1,    -1,   452,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    11,    12,    -1,
      14,    -1,    -1,    17,    -1,    -1,    20,    -1,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    37,    38,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      54,    55,    -1,    57,    58,    59,    -1,    -1,    62,    -1,
      -1,    65,    -1,    67,    68,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    -1,
      84,    85,    86,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    11,    12,    -1,    14,    -1,    -1,    17,    -1,    -1,
      20,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    37,    38,    39,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    59,
      -1,    -1,    62,    -1,    -1,    65,    -1,    67,    68,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    -1,    84,    85,    86,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    -1,    12,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    20,    -1,    -1,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    54,    55,
      -1,    57,    58,    59,    -1,    -1,    62,    -1,    -1,    65,
      -1,    67,    68,    -1,    70,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,    80,    81,    -1,    10,    -1,    12,
      86,    14,    -1,    -1,    -1,    -1,    -1,    20,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,    -1,    35,    -1,    -1,    38,    39,    12,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,    24,
      -1,    54,    55,    -1,    57,    -1,    59,    -1,    -1,    62,
      -1,    -1,    65,    -1,    67,    68,    -1,    70,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    80,    81,    54,
      55,    -1,    57,    86,    59,     3,     4,     5,    -1,    -1,
      65,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    80,    81,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,     3,     4,     5,    -1,
      48,    49,    -1,    -1,    24,    12,    54,    55,    -1,    57,
      -1,    59,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      27,    -1,    -1,    71,    -1,    -1,    -1,    -1,    48,    49,
      -1,    -1,    80,    81,    54,    55,    -1,    57,    -1,    59,
      -1,    48,    49,    -1,    -1,    65,    -1,    54,    55,    -1,
      57,    -1,    59,     3,     4,     5,    -1,    -1,    65,    -1,
      80,    81,    12,    -1,    -1,    -1,     3,     4,     5,    -1,
      -1,    -1,    -1,    80,    81,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,     3,     4,     5,    54,    55,    -1,    57,    -1,    59,
      12,    48,    49,    -1,    -1,    65,    -1,    54,    55,    -1,
      57,    -1,    59,    -1,    -1,    -1,    -1,    -1,    65,    49,
      80,    81,    -1,    -1,    54,    55,    -1,    57,    -1,    59,
      -1,    -1,    -1,    80,    81,    65,    -1,    49,    -1,    -1,
      -1,    -1,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,
      80,    81,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81
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
     160,   162,   163,   164,   165,   167,   168,   169,   170,   172,
     174,   176,   177,   178,   180,   185,   188,   196,   200,   212,
     213,     5,   160,     5,   136,   160,   211,     5,     5,   167,
     195,   167,   195,    24,   129,   130,     5,   160,   133,   135,
     136,     5,    18,    54,    99,   101,   104,   160,   184,   197,
     160,   181,   182,   187,   213,   160,   183,   186,   164,    71,
     114,   160,   160,   196,   185,    18,   160,   151,   160,   196,
       0,    58,    92,   106,    31,    95,    97,   200,    75,   226,
      19,    19,   217,    43,    61,   161,     8,    32,    40,    41,
      42,    45,    47,    52,    53,    59,    60,   166,    13,    15,
       7,    50,    71,   171,    57,    65,   173,    25,    63,    76,
      78,   175,   176,    24,    54,    55,   179,   189,     6,    16,
      26,    28,    33,    51,    56,    64,    66,    72,    77,    79,
      83,   111,   112,    19,    24,    54,    58,    12,    19,    18,
      54,    54,    98,    19,   215,    45,    45,   129,   130,   136,
      44,    18,    19,     9,   160,   104,   105,    18,    27,    78,
     103,    33,   100,    18,    37,   199,   209,   217,    69,   209,
     217,    73,    37,   206,   217,    74,   160,   217,    19,   125,
      58,   107,   155,    18,    19,   150,     9,   108,    58,     5,
     160,   162,   163,   164,    59,    45,   167,   168,   169,   170,
     172,   174,   176,     5,    27,    78,    94,   160,   202,   203,
     223,   224,    24,   160,   190,   191,   192,    27,   179,   110,
     196,   213,   110,   160,     5,    94,   160,   155,   196,   201,
      73,    99,    18,   167,   160,   196,    44,     5,    54,    78,
     131,   132,   134,   155,   133,     5,    19,   214,    73,   160,
       5,     5,   160,    19,   216,   160,   195,   195,    19,   115,
     221,   160,    46,    34,    36,   146,   152,   155,   151,    18,
     167,   226,   217,    30,   160,   160,    73,    33,   204,   209,
      19,    19,    24,    74,    19,   219,    18,   176,   111,    73,
      73,    73,   155,   215,    19,   124,    18,   131,     9,   134,
      19,   220,    29,   142,   104,    19,   102,   101,   104,    19,
     198,   209,   218,    45,    45,   160,   124,   106,   156,   160,
      18,    30,   147,    18,    30,   150,   155,   160,   160,   202,
     203,   223,   225,    24,   191,   160,   192,    58,    18,   160,
     155,     5,    73,   132,   160,    30,   214,    27,   100,   160,
     162,    48,   157,   158,   159,   162,    19,   221,   156,    21,
       9,    19,   153,   154,   155,    18,    36,   148,   155,    18,
      19,   219,    18,   193,   194,   155,    30,   220,    18,    18,
       5,   216,    18,    43,   208,   209,   210,    18,    99,    43,
     205,   206,   207,    19,   222,   160,   155,    18,   146,   155,
     225,   160,    18,   155,   155,   160,   158,   158,    18,   158,
     158,   155,   155,   142,   218,   208,   158,   205,    19,   222
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
     154,   154,   155,   155,   156,   156,   157,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   162,   162,   163,   163,
     164,   164,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   167,   167,   168,   168,   169,
     169,   170,   170,   171,   171,   172,   172,   173,   173,   174,
     174,   175,   175,   175,   175,   176,   176,   177,   177,   177,
     178,   178,   179,   179,   180,   180,   180,   180,   180,   180,
     180,   180,   181,   181,   182,   182,   183,   183,   184,   184,
     185,   185,   186,   186,   187,   187,   188,   188,   189,   189,
     189,   190,   191,   191,   191,   192,   192,   193,   193,   194,
     194,   195,   196,   197,   197,   198,   198,   199,   199,   200,
     200,   201,   201,   202,   202,   202,   202,   202,   202,   203,
     203,   204,   204,   205,   205,   206,   206,   207,   207,   208,
     208,   209,   209,   210,   210,   211,   211,   212,   213,   213,
     214,   214,   214,   215,   215,   215,   216,   216,   216,   217,
     217,   217,   218,   218,   218,   219,   219,   219,   220,   220,
     220,   221,   221,   221,   222,   222,   222,   223,   224,   225,
     225,   225,   226,   226,   226
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
       2,     0,     1,     4,     2,     1,     2,     1,     1,     1,
       4,     3,     2,     1,     4,     0,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       4,     2,     2,     0,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     0,     1,     0,
       2,     1,     2,     2,     2,     2,     4,     3,     3,     3,
       2,     2,     3,     1,     4,     1,     0,     1,     0,     2,
       1,     2,     2,     4,     2,     1,     1,     1,     1,     7,
       4,     1,     0,     3,     2,     1,     3,     1,     1,     2,
       3,     1,     0,     1,     1,     5,     4,     3,     2,     1,
       1,     5,     4,     3,     2,     1,     3,     1,     2,     1,
       3,     1,     0,     3,     1,     0,     4,     1,     0,     3,
       1,     0,     5,     1,     0,     3,     1,     0,     3,     1,
       0,     3,     3,     2,     3,     3,     2,     2,     2,     3,
       1,     1,     3,     1,     0
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
#line 59 "parse.y" /* yacc.c:1646  */
    {std::cout<<"Hello\n";}
#line 1824 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 108 "parse.y" /* yacc.c:1646  */
    {std::cout<<"varaglist\n";}
#line 1830 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 111 "parse.y" /* yacc.c:1646  */
    {std::cout<<"EQUAL\n";}
#line 1836 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 115 "parse.y" /* yacc.c:1646  */
    {std::cout<<"star_fpdef\n";}
#line 1842 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 153 "parse.y" /* yacc.c:1646  */
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
            symTab.modifyEntry(val_exp_st, (yyvsp[-2].ast)->getName());
            //symTab.insert(val_exp_st, $1->getName(), $1->getDataType());
            //$$ = symTab.lookUp($1->getName(), count); count++;
          }
#line 1881 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 188 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"expr_stmt\n";
          }
#line 1889 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 198 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"star_EQ"<<$2->getNumber()<<std::endl;
            double num = (yyvsp[-1].ast)->getNumber();
            if((yyvsp[-1].ast)->getNodetype() == 'I'){  
              //std::cout<<"Insert Int\n";
              symTab.insert((yyvsp[-1].ast)->getNumber(), identName, "Int");
            }
            else if((yyvsp[-1].ast)->getNodetype() == 'F'){
              //std::cout<<"Insert Float\n";
              symTab.insert((yyvsp[-1].ast)->getNumber(), identName, "Float");
            } 
            else{
              std::cout<<"Wrong data type\n";
            }
          }
#line 1909 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 216 "parse.y" /* yacc.c:1646  */
    { eAdd = true;}
#line 1915 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 217 "parse.y" /* yacc.c:1646  */
    { eSub = true;}
#line 1921 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 218 "parse.y" /* yacc.c:1646  */
    { eMult = true;}
#line 1927 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 219 "parse.y" /* yacc.c:1646  */
    {eDiv = true;}
#line 1933 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 220 "parse.y" /* yacc.c:1646  */
    {eMod = true;}
#line 1939 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 222 "parse.y" /* yacc.c:1646  */
    { std::cout<<"VBARE\n"; }
#line 1945 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 223 "parse.y" /* yacc.c:1646  */
    {std::cout<<"CIRCUM\n";}
#line 1951 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 224 "parse.y" /* yacc.c:1646  */
    {std::cout<<"LEFTS\n";}
#line 1957 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 225 "parse.y" /* yacc.c:1646  */
    {std::cout<<"RIGHTS\n";}
#line 1963 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 227 "parse.y" /* yacc.c:1646  */
    {eDSlash = true;}
#line 1969 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 231 "parse.y" /* yacc.c:1646  */
    {
            std::cout << eval((yyvsp[0].ast)) <<std::endl;
            treeFree((yyvsp[0].ast));
          }
#line 1978 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 239 "parse.y" /* yacc.c:1646  */
    { 
            //std::cout<<"opt_test"; 
            //std::cout << "= "<<eval($1) <<std::endl;
            //treeFree($1);
          }
#line 1988 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 337 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"exec_stmt\n";
          }
#line 1996 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 341 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"exec_stmt\n";
          }
#line 2004 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 399 "parse.y" /* yacc.c:1646  */
    {std::cout<<"Test as expr\n";}
#line 2010 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 428 "parse.y" /* yacc.c:1646  */
    { 
            //std::cout<<"old_test\n";
          }
#line 2018 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 444 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"test"<<$1<<std::endl;
          }
#line 2026 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 455 "parse.y" /* yacc.c:1646  */
    { //std::cout<<"or test\n";
          }
#line 2033 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 461 "parse.y" /* yacc.c:1646  */
    { //std::cout<<"and_test\n";
          }
#line 2040 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 468 "parse.y" /* yacc.c:1646  */
    { //std::cout<<"not_test\n";
          }
#line 2047 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 473 "parse.y" /* yacc.c:1646  */
    { //std::cout<<"Comparison\n"; 
          }
#line 2054 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 493 "parse.y" /* yacc.c:1646  */
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
#line 2074 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 508 "parse.y" /* yacc.c:1646  */
    {
          }
#line 2081 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 513 "parse.y" /* yacc.c:1646  */
    { 
          }
#line 2088 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 519 "parse.y" /* yacc.c:1646  */
    { 
          }
#line 2095 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 525 "parse.y" /* yacc.c:1646  */
    { 
          }
#line 2102 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 528 "parse.y" /* yacc.c:1646  */
    {
          }
#line 2109 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 538 "parse.y" /* yacc.c:1646  */
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
#line 2130 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 556 "parse.y" /* yacc.c:1646  */
    {add = true;}
#line 2136 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 557 "parse.y" /* yacc.c:1646  */
    {subtract = true;}
#line 2142 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 560 "parse.y" /* yacc.c:1646  */
    {  
            //std::cout<<"Term\n";
            }
#line 2150 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 564 "parse.y" /* yacc.c:1646  */
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
#line 2188 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 599 "parse.y" /* yacc.c:1646  */
    { mult = true;}
#line 2194 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 600 "parse.y" /* yacc.c:1646  */
    { 
                  division = true;
                }
#line 2202 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 603 "parse.y" /* yacc.c:1646  */
    { 
                    modulus = true;
                  }
#line 2210 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 607 "parse.y" /* yacc.c:1646  */
    { 
                    dSlash = true;
                  }
#line 2218 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 613 "parse.y" /* yacc.c:1646  */
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
              (yyval.ast) = new AstNode('M', count, (yyvsp[0].ast), NULL); count++;
              //std::cout<<"uNegValue: "<<$$<<std::endl;
              uNegCount--;
              if(uNegCount<=0){
                uNegCount = 0;
                uNeg = false;
              }
            }
          }
#line 2246 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 639 "parse.y" /* yacc.c:1646  */
    { uPlus = true; uPlusCount++; }
#line 2252 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 640 "parse.y" /* yacc.c:1646  */
    { 
                  uNeg = true;
                  uNegCount++;
                  //std::cout<<"MINUS"<<std::endl;
                }
#line 2262 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 649 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = pow($1, $4);
            (yyval.ast) = new AstNode('E', count, (yyvsp[-3].ast), (yyvsp[0].ast)); count++;
          }
#line 2271 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 654 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<$2<<std::endl;
            //$$ = new AstNode('Z', count, $1, NULL); count++;
            //std::cout<<"in power"<<$$<<std::endl;
          }
#line 2281 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 666 "parse.y" /* yacc.c:1646  */
    { 
            //std::cout<<"In atom\n";
            (yyval.ast) = (yyvsp[-1].ast); 
            //$$ = new AstNode('R', count, $2, NULL); count++;
            //$$ = new AstNumber('K', count, $2); count++;
            //$$ = new AstNode('Z', count, $2, NULL); count++; 
            //std::cout<<"In atom"<<$$<<std::endl; 
            comingFromPar = true;
          }
#line 2295 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 679 "parse.y" /* yacc.c:1646  */
    { 
            if(symTab.ifExists((yyvsp[0].s))){
              (yyval.ast) = symTab.lookUp((yyvsp[0].s), count); count++;
              //std::cout<<"In atom="<<$$->getNumber()<<std::endl;
              //$$ = new AstNumber('K',count, ); count++; 
            }
            else{  
              identName = (yyvsp[0].s); 
              //std::cout<<$1<<std::endl;
            }
          }
#line 2311 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 691 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"Float value="<<$1<<std::endl;
            //std::cout<<"Reached atom"<<std::endl; 
            (yyval.ast) = new AstFloat('F',count, "temp", (yyvsp[0].d)); count++; //This node gets discarded anyways, temp node 
          }
#line 2321 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 697 "parse.y" /* yacc.c:1646  */
    {
            (yyval.ast) = new AstInt('I',count, "temp", (yyvsp[0].i)); count++; //This node gets discarded anyways, temp node 
          }
#line 2329 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 700 "parse.y" /* yacc.c:1646  */
    {std::cout<<"PLUS IN ATOM\n";}
#line 2335 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 704 "parse.y" /* yacc.c:1646  */
    {
            //$$ = new AstNode('Z', count, $1, NULL); count++; 
            //std::cout<<"In yield expr"<<$$<<std::endl; 
          }
#line 2344 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 712 "parse.y" /* yacc.c:1646  */
    {
            //$$ = new AstNode('Z', count, $1, NULL); count++;  
            //std::cout<<"In pick_yield"<<$$<<std::endl; 
          }
#line 2353 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 727 "parse.y" /* yacc.c:1646  */
    { std::cout <<"STRINGPLUS\n";}
#line 2359 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 728 "parse.y" /* yacc.c:1646  */
    {std::cout<<"STRING\n";}
#line 2365 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 773 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"testlist"<<$1<<std::endl;
          }
#line 2373 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 787 "parse.y" /* yacc.c:1646  */
    {std::cout<<"star_COMMA\n";}
#line 2379 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 807 "parse.y" /* yacc.c:1646  */
    {std::cout<<"argument\n";}
#line 2385 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 843 "parse.y" /* yacc.c:1646  */
    {std::cout<<"Encoding_decl\n";}
#line 2391 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 848 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = new AstNode('Z', count, NULL, $2); count++; 
          }
#line 2399 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 852 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = new AstNode('Z', count, NULL, NULL); count++; 
          }
#line 2407 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 867 "parse.y" /* yacc.c:1646  */
    {std::cout<<"star_comma\n";}
#line 2413 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 872 "parse.y" /* yacc.c:1646  */
    {std::cout<<"Star_COMMA\n";}
#line 2419 "parse.tab.cpp" /* yacc.c:1646  */
    break;


#line 2423 "parse.tab.cpp" /* yacc.c:1646  */
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
#line 919 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}

