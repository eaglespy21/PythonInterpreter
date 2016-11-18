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
  #include "ast.h"
  #include<fstream>
  #include<string.h>
	int yylex (void);
	extern int yylineno;
	extern char *yytext;
        extern int count;
        bool add=false,subtract=false, mult=false, division=false, powe=false, modulus=false;
        bool dSlash = false, uPlus = false, uNeg = false, comingFromPar = false;
        int uNegCount = 0, uPlusCount = 0;
	void yyerror (char const *);

#line 82 "parse.tab.cpp" /* yacc.c:339  */

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
#line 18 "parse.y" /* yacc.c:355  */

  Ast* ast;
  double d; 
  char* s; //Do we create a type class?

#line 214 "parse.tab.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 229 "parse.tab.cpp" /* yacc.c:358  */

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
#define YYFINAL  139
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   918

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  140
/* YYNRULES -- Number of rules.  */
#define YYNRULES  323
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  489

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

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
      85
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    51,    51,    52,    53,    62,    63,    66,    69,    70,
      73,    74,    77,    78,    81,    82,    85,    86,    89,    90,
      93,    96,    97,   100,   101,   104,   105,   108,   109,   112,
     113,   116,   117,   120,   121,   124,   127,   128,   131,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   145,   146,
     152,   153,   156,   160,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   177,   182,   185,   191,
     194,   195,   198,   201,   204,   205,   206,   207,   208,   211,
     214,   217,   218,   221,   224,   225,   228,   229,   232,   233,
     236,   237,   240,   243,   244,   247,   248,   251,   252,   255,
     256,   257,   260,   261,   264,   265,   268,   271,   272,   275,
     276,   279,   280,   283,   287,   293,   294,   297,   298,   299,
     300,   301,   302,   303,   304,   307,   308,   311,   312,   315,
     316,   319,   320,   323,   324,   327,   328,   331,   332,   335,
     336,   339,   342,   343,   346,   347,   350,   351,   354,   355,
     358,   359,   363,   364,   367,   368,   371,   372,   375,   378,
     381,   382,   391,   394,   397,   398,   401,   404,   407,   410,
     413,   414,   419,   422,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   439,   455,   459,   462,   465,
     468,   471,   474,   479,   480,   483,   484,   503,   504,   507,
     508,   543,   544,   547,   550,   556,   580,   583,   584,   589,
     592,   597,   604,   605,   608,   618,   619,   620,   621,   625,
     630,   633,   638,   641,   646,   649,   650,   653,   654,   657,
     658,   661,   662,   665,   666,   669,   670,   673,   674,   675,
     678,   681,   682,   683,   686,   687,   690,   691,   694,   695,
     698,   702,   708,   709,   712,   713,   716,   717,   720,   721,
     724,   725,   728,   729,   730,   731,   732,   733,   736,   737,
     740,   741,   744,   745,   748,   749,   752,   753,   756,   757,
     761,   762,   765,   766,   769,   770,   773,   777,   781,   787,
     788,   789,   792,   793,   794,   797,   798,   799,   802,   803,
     804,   807,   808,   809,   812,   813,   814,   818,   819,   820,
     823,   824,   825,   828,   829,   830,   833,   836,   839,   840,
     841,   844,   845,   846
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "NAME", "AMPEREQUAL",
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
     335,   336,   337,   338,   339,   340
};
# endif

#define YYPACT_NINF -363

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-363)))

#define YYTABLE_NINF -306

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     360,  -363,    62,   808,    59,   808,  -363,    60,  -363,    61,
     838,   838,   838,    50,    96,   808,    59,    39,   808,    64,
     808,  -363,   114,   277,  -363,  -363,   696,   808,   808,    69,
    -363,   121,   808,   808,   808,   151,  -363,  -363,   443,   158,
     144,   153,  -363,  -363,   173,  -363,   115,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
     174,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,   177,
      67,   184,  -363,   126,   185,   182,   192,    56,    -4,    14,
    -363,   838,  -363,   108,  -363,  -363,   731,  -363,  -363,  -363,
    -363,   188,  -363,    17,  -363,    48,    24,   149,    86,  -363,
      37,   159,    35,    59,   165,  -363,   196,  -363,   191,    87,
    -363,   808,    44,   199,    11,   186,    36,   152,  -363,   123,
    -363,   145,  -363,  -363,   124,   146,  -363,  -363,   808,  -363,
     177,   203,  -363,  -363,   609,   205,   206,   217,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,   668,   169,   224,
     808,  -363,   277,   277,  -363,   277,  -363,  -363,  -363,  -363,
    -363,   179,  -363,  -363,   194,  -363,   838,   838,   838,   838,
    -363,  -363,   838,  -363,  -363,   838,  -363,  -363,  -363,  -363,
     838,  -363,   238,    76,   767,   221,   108,  -363,  -363,  -363,
    -363,    64,  -363,  -363,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,    64,   808,   245,    76,  -363,  -363,   808,   609,   808,
      31,   234,   838,  -363,   808,   808,  -363,  -363,    90,    30,
     609,    59,   248,  -363,   236,   183,   808,   252,   253,  -363,
     808,   240,   808,   838,  -363,  -363,  -363,  -363,  -363,  -363,
    -363,   838,  -363,  -363,  -363,   241,  -363,   808,  -363,   216,
    -363,   102,   609,   808,   246,   838,   115,  -363,  -363,   177,
      26,   184,  -363,  -363,  -363,   185,   182,   192,    56,    -4,
      14,  -363,  -363,   808,   808,   190,   143,  -363,   247,  -363,
     249,   243,   251,   200,   254,   257,   838,  -363,   244,  -363,
    -363,  -363,  -363,  -363,   207,  -363,  -363,  -363,   210,  -363,
     211,   609,    86,   259,   258,    30,   270,   282,  -363,  -363,
     269,  -363,   261,  -363,  -363,    44,  -363,  -363,  -363,  -363,
     274,  -363,    29,  -363,   132,   250,   255,   808,  -363,  -363,
     259,   526,   808,   279,   268,   281,   271,   206,   609,   185,
    -363,  -363,   808,  -363,  -363,  -363,   808,  -363,  -363,    76,
     780,   283,  -363,   237,  -363,   808,  -363,  -363,   262,   285,
    -363,  -363,  -363,   808,  -363,   609,  -363,   300,   233,   282,
    -363,   808,   286,   236,   288,  -363,  -363,   186,   808,  -363,
    -363,  -363,   277,   826,   290,  -363,   526,   291,    53,   609,
     295,   287,   609,   301,  -363,  -363,  -363,  -363,  -363,   302,
    -363,  -363,  -363,   254,  -363,   304,  -363,   609,  -363,   294,
    -363,  -363,   269,   309,   310,  -363,   330,   240,   319,     9,
      40,   103,   322,  -363,   284,   808,  -363,  -363,  -363,  -363,
    -363,   808,  -363,  -363,   609,   320,  -363,   312,   609,   780,
    -363,   808,  -363,  -363,  -363,   325,  -363,   609,   609,  -363,
    -363,   808,   826,  -363,  -363,  -363,   826,   331,   826,  -363,
    -363,  -363,   826,  -363,  -363,  -363,   609,  -363,  -363,  -363,
    -363,   609,   261,  -363,   333,   110,  -363,   826,   103,   335,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,   826,  -363
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      11,   219,   218,     0,     0,     0,    79,     0,    80,     0,
       0,     0,     0,    96,     0,     0,     0,    28,   228,   224,
     226,   208,     8,     0,    73,   207,    69,    85,    82,   230,
     209,     0,     0,     0,   288,     0,     4,     2,    11,     0,
      17,     0,   124,   122,     9,    36,   323,    39,    40,    41,
      42,    43,    74,    75,    76,    78,    77,    44,    90,    91,
      45,    46,    47,    37,   117,   118,   119,   120,   121,   300,
     165,   166,   168,   171,   172,   185,   187,   189,   191,   195,
     199,     0,   206,   213,   220,   163,    53,   123,     3,    83,
     218,   116,   109,     0,   284,     0,     0,     0,   294,    72,
     114,     0,    96,     0,     0,   112,     0,   107,    92,   105,
      33,     0,     0,     0,     0,    26,   300,     0,   227,   300,
     223,     0,   222,   221,   300,     0,   225,   170,     0,    66,
     300,    89,    81,   229,     0,     0,   143,   145,   287,     1,
       8,    10,     9,     7,    16,    19,    18,   322,     0,     0,
     299,   251,     0,     0,   162,     0,   176,   175,   177,   179,
     181,   183,   174,   178,     0,   180,     0,     0,     0,     0,
     193,   194,     0,   198,   197,     0,   204,   203,   202,   201,
       0,   205,     0,    15,   245,   211,   213,    59,    61,    65,
      64,     0,    62,    55,    58,    54,    63,    57,    56,    60,
      49,     0,     0,     0,    15,    13,   217,     0,     0,   261,
      28,     0,   293,   250,     0,     0,    95,    97,     0,     0,
       0,     0,     0,   236,   291,     0,     0,     0,     0,    23,
       0,   297,     0,     0,   253,   256,   257,   216,   233,   234,
     214,     0,   231,   232,   215,    71,    68,     0,    84,     0,
     152,     0,     0,     0,     0,     0,   323,    38,   111,   300,
       0,   167,   169,   184,   182,   173,   186,   188,   190,   192,
     196,   200,   239,     0,     0,     0,   271,    14,   264,   267,
     266,     0,   242,     0,   306,     0,     0,   212,    53,    51,
      50,    48,   115,   110,     0,   285,   259,   260,     0,    22,
       0,     0,   294,    87,     0,     0,   103,     0,    99,    94,
     309,   101,   128,   108,   104,   290,    35,    34,   235,    32,
      30,    25,    28,    24,   303,     0,     0,     0,    67,    70,
      87,     0,   147,     0,   138,     0,   130,   143,     0,   144,
     321,   298,     0,   316,   317,   237,     0,   268,   270,   263,
       0,     0,   238,   245,   240,   245,   210,    52,     0,     0,
      21,    20,   292,     0,   113,     0,    93,     0,     0,   308,
     106,     0,   126,   291,     0,    31,    27,    26,   302,   252,
     254,   255,     0,     0,   312,    88,   155,     0,   151,     0,
       0,   140,     0,     0,   142,   141,   164,   269,   262,   320,
     319,   265,   241,   306,   244,   247,    12,     0,    86,   132,
     102,   100,   309,     0,     0,   289,     0,   297,     0,   281,
      28,   275,   157,   159,   158,   311,   310,   154,   153,   148,
     149,     0,   146,   134,     0,     0,   133,   136,     0,     0,
     304,   249,   243,   246,   258,     0,   307,     0,     0,    29,
     295,     0,     0,   280,   278,   279,     0,     0,     0,   274,
     272,   273,     0,   156,   150,   137,     0,   135,   129,   318,
     248,     0,   128,   125,   303,   283,   161,     0,   277,   315,
     139,   131,   127,   301,   282,   160,   276,   314,   313
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -363,  -363,  -363,  -363,  -363,   311,  -363,   150,   315,  -363,
     317,  -363,  -205,   -18,    43,  -363,  -363,  -108,  -363,    47,
       1,   214,  -363,   161,    78,  -363,  -363,  -363,  -363,  -363,
    -363,  -363,  -363,  -363,  -363,  -363,  -363,    42,  -363,  -363,
    -363,  -363,   265,   272,    72,    15,   157,    73,  -363,    16,
    -363,  -363,  -363,  -363,  -363,   -89,  -363,  -363,  -363,   -52,
    -363,  -363,  -363,    49,   135,  -363,  -363,  -363,  -202,     4,
    -363,  -362,  -363,    -3,  -363,  -149,   239,     3,  -363,  -363,
      -2,   222,   223,   226,  -363,   227,  -363,   218,  -363,   -74,
    -363,  -363,   215,  -363,  -363,  -363,  -363,  -363,   371,  -363,
    -363,  -363,  -363,  -363,    51,    54,  -363,  -363,     2,   -15,
    -363,  -363,  -363,   364,  -363,    57,  -323,  -363,   -68,   296,
    -363,   -64,   -94,  -363,  -363,  -363,    -8,    46,   113,    -5,
     -88,   -51,    22,    18,    58,   -48,  -318,  -363,    -7,   178
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    35,    36,    37,    38,    39,    40,   275,    41,    42,
      43,   211,   113,   231,   114,   375,   229,   115,   225,   386,
     250,    46,    47,   288,   200,   201,    48,   129,   328,    49,
      50,    51,    52,    53,    54,    55,    56,   364,   248,    57,
      58,    59,   103,   104,   309,   310,   107,   311,   108,   109,
      60,    61,    62,    63,    64,   372,    65,    66,    67,   334,
     391,   436,    68,   254,   136,   335,   431,   432,   251,   387,
     421,   479,   423,    69,   154,    70,    71,    72,    73,   166,
      74,    75,    76,    77,   172,    78,   175,    79,   180,    80,
      81,    82,   185,    83,   120,   121,   125,   117,    84,   126,
     122,    85,   186,   283,   284,   285,   442,   443,    99,    86,
     118,   379,   234,    87,   298,   277,   278,   347,   459,   460,
     461,   453,   454,   455,    95,    88,    89,   316,   213,   323,
     151,   381,   354,   370,   329,   463,   279,   280,   401,   148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      91,    45,    94,   260,   224,   300,   296,   181,    98,   100,
      98,   123,   106,   132,   101,   116,   119,   124,   312,   138,
      93,   422,   235,   130,   131,   238,   127,   399,   236,   135,
     137,   239,   400,   110,   306,   110,   243,   227,   176,    45,
     203,   208,   246,   110,   110,   233,  -296,    44,   110,   167,
     336,   452,   173,   232,   150,   342,   111,   456,   102,   206,
     174,   429,  -286,    92,    96,    97,   207,     1,    90,   153,
     204,   430,   233,   102,   205,     5,   177,   209,   -98,     1,
      90,   214,   112,   307,   112,   142,   153,     5,   228,   178,
     475,   179,   112,   112,   476,   222,   478,   112,   167,   361,
     105,  -296,   273,   299,   212,   170,   271,   308,   223,   152,
     203,    17,    18,   203,    -5,   485,   399,    19,    20,   218,
      21,   400,    23,    17,    18,   245,   171,   153,    25,    19,
      20,   182,    21,   305,    23,   332,   395,   333,   134,   241,
      25,   150,   150,    29,    30,   458,   233,   259,    29,    34,
     378,   139,   452,   274,     4,    29,    30,   156,   262,   233,
     241,   183,   184,   409,   265,   157,   158,   159,   233,     7,
     160,   341,   161,    -6,     9,   346,   289,   162,   163,   233,
     276,   282,   348,   290,   164,   165,   289,   433,   143,   147,
     437,   155,   149,   290,   297,   150,   168,   167,   169,   292,
     304,   276,   210,   215,   295,   444,   202,   373,   219,   221,
     302,   303,   356,   220,   377,   457,   226,   240,   230,   244,
     237,   247,   252,   318,   253,   255,   257,   321,   258,   324,
     380,    98,   465,   419,   424,   325,   468,   263,   264,    98,
       1,    90,   272,   326,   330,   472,   473,   286,     5,   293,
     137,   301,   314,   339,   315,   317,   319,   320,   322,   327,
     281,   331,   345,   338,   480,   349,   351,   350,  -244,   481,
     343,   344,   353,   352,   355,   365,   191,   363,   367,   358,
       1,    90,   359,   360,    17,    18,   306,   369,     5,   371,
      19,    20,   374,    21,   382,    23,   389,   390,   392,   383,
     393,    25,   407,   424,   410,   411,   402,   424,   425,   424,
    -305,   428,   434,   424,   416,   414,    29,    30,   438,   406,
     439,   441,   435,   445,   384,    18,   447,   448,   424,   388,
      19,    20,    45,    21,   449,    23,   451,   466,   424,   396,
     462,    25,   471,   397,   153,   332,   276,   276,   477,   141,
     282,   378,   404,   487,   294,   144,    29,    30,   145,   417,
     408,   256,   291,     1,     2,   376,   357,   216,   413,     3,
       4,     5,   385,     6,   217,   418,     7,   366,   313,     8,
     368,     9,    10,   482,   412,   467,   394,    45,   337,   266,
     427,   267,   261,   270,    11,   268,    12,    13,    14,   269,
     133,   287,    15,    16,   403,   146,   398,    17,    18,   405,
     486,   484,   450,    19,    20,   362,    21,    22,    23,   415,
     242,    24,   384,   483,    25,   440,    26,    27,   464,    28,
     446,   488,   469,     0,   340,     0,   276,     0,   470,    29,
      30,    31,   426,    32,    33,    34,     1,    90,   474,     0,
       0,     0,     3,     4,     5,     0,     6,     0,     0,     7,
       0,     0,     8,     0,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,     0,    12,
      13,    14,     0,     0,     0,    15,    16,     0,     0,     0,
      17,    18,     0,     0,     0,     0,    19,    20,     0,    21,
     140,    23,     0,     0,    24,     0,     0,    25,     0,    26,
      27,     0,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    30,    31,     0,    32,    33,    34,     1,
      90,     0,     0,     0,     0,     3,     4,     5,     0,     6,
       0,     0,     7,     0,     0,     8,     0,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,     0,    12,    13,    14,     0,     0,     0,    15,    16,
       0,     0,     0,    17,    18,     0,     0,     0,     0,    19,
      20,     0,    21,     0,    23,     0,     0,    24,     0,     0,
      25,     0,    26,    27,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30,    31,     0,    32,
      33,    34,     1,    90,     0,     0,     0,     0,     3,     0,
       5,     0,     6,     0,     0,     0,     0,     0,     8,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,     0,     0,    13,    14,     0,     0,
       0,     0,    16,     0,     0,     0,    17,    18,     0,     0,
       0,     0,    19,    20,     0,    21,   249,    23,     0,     0,
      24,     1,    90,    25,     0,    26,    27,     3,    28,     5,
       0,     6,     0,     0,     0,     0,     0,     8,    29,    30,
      10,     0,     0,     0,    34,     0,     0,     0,     0,     1,
      90,     0,    11,     0,     0,    13,    14,     5,     0,     0,
       0,    16,     0,     0,     0,    17,    18,     0,     0,     0,
       0,    19,    20,     0,    21,     0,    23,     0,     0,    24,
       0,     0,    25,     0,    26,    27,   187,    28,     0,     0,
       0,     0,     0,    17,    18,     0,   188,    29,    30,    19,
      20,     0,    21,    34,    23,     0,   189,     0,   190,     0,
      25,     0,     0,   191,     0,     0,   128,     0,     0,     0,
       1,    90,     0,     0,     0,    29,    30,     0,     5,     0,
       0,   192,     0,     1,    90,     0,   193,     0,     0,     0,
     281,     5,     0,     0,   194,     0,   195,     0,     0,     0,
       0,     0,   196,     0,     0,     0,   273,   197,     0,   198,
       0,     1,    90,   199,    17,    18,     0,     0,     0,     5,
      19,    20,     0,    21,     0,    23,     0,    17,    18,     1,
      90,    25,     0,    19,    20,     0,    21,     5,    23,     0,
       0,     1,    90,     0,    25,     0,    29,    30,     0,     5,
       0,     0,     0,     0,     0,    17,    18,     0,     0,    29,
      30,    19,    20,     0,    21,     0,    23,     0,     0,     0,
       0,     0,    25,   420,    18,     0,     0,     0,     0,    19,
      20,     0,    21,     0,    23,     0,    18,    29,    30,     0,
      25,    19,    20,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,    30
};

static const yytype_int16 yycheck[] =
{
       3,     0,     5,   152,   112,   210,   208,    81,    10,    11,
      12,    19,    15,    28,    12,    18,    19,    20,   220,    34,
       4,   383,   116,    26,    27,   119,    23,   350,   116,    32,
      33,   119,   350,     4,     4,     4,   124,    26,    24,    38,
      23,    17,   130,     4,     4,    36,    17,     0,     4,    12,
     252,    42,    56,    17,    18,    29,    17,    17,    23,    11,
      64,     8,     0,     4,     4,     4,    18,     3,     4,    60,
      53,    18,    36,    23,    57,    11,    62,    53,    43,     3,
       4,    44,    53,    53,    53,    38,    60,    11,    77,    75,
     452,    77,    53,    53,   456,     8,   458,    53,    12,   301,
       4,    72,    26,    72,    18,    49,   180,    77,   111,    42,
      23,    47,    48,    23,     0,   477,   439,    53,    54,   103,
      56,   439,    58,    47,    48,   128,    70,    60,    64,    53,
      54,    23,    56,    43,    58,    33,   338,    35,    17,    36,
      64,    18,    18,    79,    80,    42,    36,   150,    79,    85,
      18,     0,    42,    77,    10,    79,    80,    31,   155,    36,
      36,    53,    54,   365,   166,    39,    40,    41,    36,    16,
      44,   259,    46,     0,    21,    32,   191,    51,    52,    36,
     183,   184,   276,   191,    58,    59,   201,   389,    30,    74,
     392,     7,    18,   201,   209,    18,    14,    12,     6,   202,
     215,   204,    53,    44,   207,   407,    18,   315,    43,    18,
     212,   214,   286,    17,   322,   420,    17,    72,    32,    73,
      68,    18,    17,   226,    18,     8,    57,   230,     4,   232,
     324,   233,   434,   382,   383,   233,   438,    58,    44,   241,
       3,     4,     4,   241,   247,   447,   448,    26,    11,     4,
     253,    17,     4,   255,    18,    72,     4,     4,    18,    18,
      23,    45,    72,    17,   466,    18,    23,    18,    17,   471,
     273,   274,    18,    73,    17,    17,    32,    18,     8,    72,
       3,     4,    72,    72,    47,    48,     4,    18,    11,    28,
      53,    54,    18,    56,    44,    58,    17,    29,    17,    44,
      29,    64,    17,   452,     4,    72,    23,   456,    18,   458,
      73,    20,    17,   462,    26,    29,    79,    80,    17,    57,
      18,    17,    35,    29,   327,    48,    17,    17,   477,   332,
      53,    54,   331,    56,     4,    58,    17,    17,   487,   342,
      18,    64,    17,   346,    60,    33,   349,   350,    17,    38,
     353,    18,   355,    18,   204,    40,    79,    80,    41,   377,
     363,   147,   201,     3,     4,   322,   288,   102,   371,     9,
      10,    11,   330,    13,   102,   378,    16,   305,   221,    19,
     307,    21,    22,   472,   369,   437,   337,   386,   253,   167,
     386,   168,   153,   175,    34,   169,    36,    37,    38,   172,
      29,   186,    42,    43,   353,    41,   349,    47,    48,   355,
     478,   475,   417,    53,    54,   302,    56,    57,    58,   373,
     124,    61,   425,   474,    64,   403,    66,    67,   431,    69,
     412,   479,   439,    -1,   256,    -1,   439,    -1,   441,    79,
      80,    81,   384,    83,    84,    85,     3,     4,   451,    -1,
      -1,    -1,     9,    10,    11,    -1,    13,    -1,    -1,    16,
      -1,    -1,    19,    -1,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    36,
      37,    38,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      47,    48,    -1,    -1,    -1,    -1,    53,    54,    -1,    56,
      57,    58,    -1,    -1,    61,    -1,    -1,    64,    -1,    66,
      67,    -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    -1,    83,    84,    85,     3,
       4,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    13,
      -1,    -1,    16,    -1,    -1,    19,    -1,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    36,    37,    38,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    53,
      54,    -1,    56,    -1,    58,    -1,    -1,    61,    -1,    -1,
      64,    -1,    66,    67,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    -1,    83,
      84,    85,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,
      11,    -1,    13,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    37,    38,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    53,    54,    -1,    56,    57,    58,    -1,    -1,
      61,     3,     4,    64,    -1,    66,    67,     9,    69,    11,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    19,    79,    80,
      22,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,     3,
       4,    -1,    34,    -1,    -1,    37,    38,    11,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,
      -1,    53,    54,    -1,    56,    -1,    58,    -1,    -1,    61,
      -1,    -1,    64,    -1,    66,    67,     5,    69,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    15,    79,    80,    53,
      54,    -1,    56,    85,    58,    -1,    25,    -1,    27,    -1,
      64,    -1,    -1,    32,    -1,    -1,    70,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,    79,    80,    -1,    11,    -1,
      -1,    50,    -1,     3,     4,    -1,    55,    -1,    -1,    -1,
      23,    11,    -1,    -1,    63,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    -1,    -1,    26,    76,    -1,    78,
      -1,     3,     4,    82,    47,    48,    -1,    -1,    -1,    11,
      53,    54,    -1,    56,    -1,    58,    -1,    47,    48,     3,
       4,    64,    -1,    53,    54,    -1,    56,    11,    58,    -1,
      -1,     3,     4,    -1,    64,    -1,    79,    80,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,    79,
      80,    53,    54,    -1,    56,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    64,    47,    48,    -1,    -1,    -1,    -1,    53,
      54,    -1,    56,    -1,    58,    -1,    48,    79,    80,    -1,
      64,    53,    54,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     9,    10,    11,    13,    16,    19,    21,
      22,    34,    36,    37,    38,    42,    43,    47,    48,    53,
      54,    56,    57,    58,    61,    64,    66,    67,    69,    79,
      80,    81,    83,    84,    85,    87,    88,    89,    90,    91,
      92,    94,    95,    96,   105,   106,   107,   108,   112,   115,
     116,   117,   118,   119,   120,   121,   122,   125,   126,   127,
     136,   137,   138,   139,   140,   142,   143,   144,   148,   159,
     161,   162,   163,   164,   166,   167,   168,   169,   171,   173,
     175,   176,   177,   179,   184,   187,   195,   199,   211,   212,
       4,   159,     4,   135,   159,   210,     4,     4,   166,   194,
     166,   194,    23,   128,   129,     4,   159,   132,   134,   135,
       4,    17,    53,    98,   100,   103,   159,   183,   196,   159,
     180,   181,   186,   212,   159,   182,   185,   163,    70,   113,
     159,   159,   195,   184,    17,   159,   150,   159,   195,     0,
      57,    91,   105,    30,    94,    96,   199,    74,   225,    18,
      18,   216,    42,    60,   160,     7,    31,    39,    40,    41,
      44,    46,    51,    52,    58,    59,   165,    12,    14,     6,
      49,    70,   170,    56,    64,   172,    24,    62,    75,    77,
     174,   175,    23,    53,    54,   178,   188,     5,    15,    25,
      27,    32,    50,    55,    63,    65,    71,    76,    78,    82,
     110,   111,    18,    23,    53,    57,    11,    18,    17,    53,
      53,    97,    18,   214,    44,    44,   128,   129,   135,    43,
      17,    18,     8,   159,   103,   104,    17,    26,    77,   102,
      32,    99,    17,    36,   198,   208,   216,    68,   208,   216,
      72,    36,   205,   216,    73,   159,   216,    18,   124,    57,
     106,   154,    17,    18,   149,     8,   107,    57,     4,   159,
     161,   162,   163,    58,    44,   166,   167,   168,   169,   171,
     173,   175,     4,    26,    77,    93,   159,   201,   202,   222,
     223,    23,   159,   189,   190,   191,    26,   178,   109,   195,
     212,   109,   159,     4,    93,   159,   154,   195,   200,    72,
      98,    17,   166,   159,   195,    43,     4,    53,    77,   130,
     131,   133,   154,   132,     4,    18,   213,    72,   159,     4,
       4,   159,    18,   215,   159,   194,   194,    18,   114,   220,
     159,    45,    33,    35,   145,   151,   154,   150,    17,   166,
     225,   216,    29,   159,   159,    72,    32,   203,   208,    18,
      18,    23,    73,    18,   218,    17,   175,   110,    72,    72,
      72,   154,   214,    18,   123,    17,   130,     8,   133,    18,
     219,    28,   141,   103,    18,   101,   100,   103,    18,   197,
     208,   217,    44,    44,   159,   123,   105,   155,   159,    17,
      29,   146,    17,    29,   149,   154,   159,   159,   201,   202,
     222,   224,    23,   190,   159,   191,    57,    17,   159,   154,
       4,    72,   131,   159,    29,   213,    26,    99,   159,   161,
      47,   156,   157,   158,   161,    18,   220,   155,    20,     8,
      18,   152,   153,   154,    17,    35,   147,   154,    17,    18,
     218,    17,   192,   193,   154,    29,   219,    17,    17,     4,
     215,    17,    42,   207,   208,   209,    17,    98,    42,   204,
     205,   206,    18,   221,   159,   154,    17,   145,   154,   224,
     159,    17,   154,   154,   159,   157,   157,    17,   157,   157,
     154,   154,   141,   217,   207,   157,   204,    18,   221
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    88,    88,    89,    90,    90,
      91,    91,    92,    92,    93,    93,    94,    94,    95,    95,
      96,    97,    97,    98,    98,    99,    99,   100,   100,   101,
     101,   102,   102,   103,   103,   104,   105,   105,   106,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   108,   108,
     109,   109,   110,   110,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   112,   112,   113,   113,
     114,   114,   115,   116,   117,   117,   117,   117,   117,   118,
     119,   120,   120,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   127,   127,   128,   128,   129,   129,   130,
     130,   130,   131,   131,   132,   132,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   139,
     139,   139,   139,   139,   139,   140,   140,   141,   141,   142,
     142,   143,   143,   144,   144,   145,   145,   146,   146,   147,
     147,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     153,   153,   154,   154,   155,   155,   156,   156,   157,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   162,   162,
     163,   163,   164,   164,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   166,   166,   167,   167,   168,
     168,   169,   169,   170,   170,   171,   171,   172,   172,   173,
     173,   174,   174,   174,   174,   175,   175,   176,   176,   176,
     177,   177,   178,   178,   179,   179,   179,   179,   179,   179,
     179,   180,   180,   181,   181,   182,   182,   183,   183,   184,
     184,   185,   185,   186,   186,   187,   187,   188,   188,   188,
     189,   190,   190,   190,   191,   191,   192,   192,   193,   193,
     194,   195,   196,   196,   197,   197,   198,   198,   199,   199,
     200,   200,   201,   201,   201,   201,   201,   201,   202,   202,
     203,   203,   204,   204,   205,   205,   206,   206,   207,   207,
     208,   208,   209,   209,   210,   210,   211,   212,   212,   213,
     213,   213,   214,   214,   214,   215,   215,   215,   216,   216,
     216,   217,   217,   217,   218,   218,   218,   219,   219,   219,
     220,   220,   220,   221,   221,   221,   222,   223,   224,   224,
     224,   225,   225,   225
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
       1,     1,     1,     1,     0,     1,     0,     1,     0,     2,
       1,     2,     2,     2,     2,     4,     3,     3,     3,     2,
       2,     3,     1,     4,     1,     0,     1,     0,     2,     1,
       2,     2,     4,     2,     1,     1,     1,     1,     7,     4,
       1,     0,     3,     2,     1,     3,     1,     1,     2,     3,
       1,     0,     1,     1,     5,     4,     3,     2,     1,     1,
       5,     4,     3,     2,     1,     3,     1,     2,     1,     3,
       1,     0,     3,     1,     0,     4,     1,     0,     3,     1,
       0,     5,     1,     0,     3,     1,     0,     3,     1,     0,
       3,     3,     2,     3,     3,     2,     2,     2,     3,     1,
       1,     3,     1,     0
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
        case 24:
#line 101 "parse.y" /* yacc.c:1646  */
    {std::cout<<"varaglist\n";}
#line 1801 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 104 "parse.y" /* yacc.c:1646  */
    {std::cout<<"EQUAL\n";}
#line 1807 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 108 "parse.y" /* yacc.c:1646  */
    {std::cout<<"star_fpdef\n";}
#line 1813 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 147 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"expr_stmt\n";
          }
#line 1821 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 157 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"star_EQ"<<std::endl;
          }
#line 1829 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 163 "parse.y" /* yacc.c:1646  */
    {std::cout<<"PLUSEQ\n";}
#line 1835 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 169 "parse.y" /* yacc.c:1646  */
    { std::cout<<"VBARE\n"; }
#line 1841 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 170 "parse.y" /* yacc.c:1646  */
    {std::cout<<"CIRCUM\n";}
#line 1847 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 171 "parse.y" /* yacc.c:1646  */
    {std::cout<<"LEFTS\n";}
#line 1853 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 172 "parse.y" /* yacc.c:1646  */
    {std::cout<<"RIGHTS\n";}
#line 1859 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 178 "parse.y" /* yacc.c:1646  */
    {
            std::cout << eval((yyvsp[0].ast)) <<std::endl;
            treeFree((yyvsp[0].ast));
          }
#line 1868 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 186 "parse.y" /* yacc.c:1646  */
    { 
            //std::cout<<"opt_test"; 
            //std::cout << "= "<<eval($1) <<std::endl;
            //treeFree($1);
          }
#line 1878 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 284 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"exec_stmt\n";
          }
#line 1886 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 288 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"exec_stmt\n";
          }
#line 1894 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 346 "parse.y" /* yacc.c:1646  */
    {std::cout<<"Test as expr\n";}
#line 1900 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 375 "parse.y" /* yacc.c:1646  */
    { 
            //std::cout<<"old_test\n";
          }
#line 1908 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 391 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"test"<<$1<<std::endl;
          }
#line 1916 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 402 "parse.y" /* yacc.c:1646  */
    { //std::cout<<"or test\n";
          }
#line 1923 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 408 "parse.y" /* yacc.c:1646  */
    { //std::cout<<"and_test\n";
          }
#line 1930 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 415 "parse.y" /* yacc.c:1646  */
    { //std::cout<<"not_test\n";
          }
#line 1937 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 420 "parse.y" /* yacc.c:1646  */
    { //std::cout<<"Comparison\n"; 
          }
#line 1944 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 440 "parse.y" /* yacc.c:1646  */
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
#line 1964 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 455 "parse.y" /* yacc.c:1646  */
    {
          }
#line 1971 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 460 "parse.y" /* yacc.c:1646  */
    { 
          }
#line 1978 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 466 "parse.y" /* yacc.c:1646  */
    { 
          }
#line 1985 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 472 "parse.y" /* yacc.c:1646  */
    { 
          }
#line 1992 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 475 "parse.y" /* yacc.c:1646  */
    {
          }
#line 1999 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 485 "parse.y" /* yacc.c:1646  */
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
#line 2020 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 503 "parse.y" /* yacc.c:1646  */
    {add = true;}
#line 2026 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 504 "parse.y" /* yacc.c:1646  */
    {subtract = true;}
#line 2032 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 509 "parse.y" /* yacc.c:1646  */
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
          }
#line 2069 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 543 "parse.y" /* yacc.c:1646  */
    { mult = true;}
#line 2075 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 544 "parse.y" /* yacc.c:1646  */
    { 
                  division = true;
                }
#line 2083 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 547 "parse.y" /* yacc.c:1646  */
    { 
                    modulus = true;
                  }
#line 2091 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 551 "parse.y" /* yacc.c:1646  */
    { 
                    dSlash = true;
                  }
#line 2099 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 557 "parse.y" /* yacc.c:1646  */
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
#line 2127 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 583 "parse.y" /* yacc.c:1646  */
    { uPlus = true; uPlusCount++; }
#line 2133 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 584 "parse.y" /* yacc.c:1646  */
    { 
                  uNeg = true;
                  uNegCount++;
                  //std::cout<<"MINUS"<<std::endl;
                }
#line 2143 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 593 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = pow($1, $4);
            (yyval.ast) = new AstNode('E', count, (yyvsp[-3].ast), (yyvsp[0].ast)); count++;
          }
#line 2152 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 598 "parse.y" /* yacc.c:1646  */
    {
            //$$ = new AstNode('Z', count, $1, NULL); count++;
            //std::cout<<"in power"<<$$<<std::endl;
          }
#line 2161 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 609 "parse.y" /* yacc.c:1646  */
    { 
            //std::cout<<"In atom\n";
            (yyval.ast) = (yyvsp[-1].ast); 
            //$$ = new AstNode('R', count, $2, NULL); count++;
            //$$ = new AstNumber('K', count, $2); count++;
            //$$ = new AstNode('Z', count, $2, NULL); count++; 
            //std::cout<<"In atom"<<$$<<std::endl; 
            comingFromPar = true;
          }
#line 2175 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 622 "parse.y" /* yacc.c:1646  */
    { 
            std::cout<<(yyvsp[0].s)<<std::endl;
          }
#line 2183 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 626 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"Reached atom"<<std::endl; 
            (yyval.ast) = new AstNumber('K',count, (yyvsp[0].d)); count++; 
          }
#line 2192 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 630 "parse.y" /* yacc.c:1646  */
    {std::cout<<"PLUS IN ATOM\n";}
#line 2198 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 634 "parse.y" /* yacc.c:1646  */
    {
            //$$ = new AstNode('Z', count, $1, NULL); count++; 
            //std::cout<<"In yield expr"<<$$<<std::endl; 
          }
#line 2207 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 642 "parse.y" /* yacc.c:1646  */
    {
            //$$ = new AstNode('Z', count, $1, NULL); count++;  
            //std::cout<<"In pick_yield"<<$$<<std::endl; 
          }
#line 2216 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 657 "parse.y" /* yacc.c:1646  */
    { std::cout <<"STRINGPLUS\n";}
#line 2222 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 658 "parse.y" /* yacc.c:1646  */
    {std::cout<<"STRING\n";}
#line 2228 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 703 "parse.y" /* yacc.c:1646  */
    {
            //std::cout<<"testlist"<<$1<<std::endl;
          }
#line 2236 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 717 "parse.y" /* yacc.c:1646  */
    {std::cout<<"star_COMMA\n";}
#line 2242 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 737 "parse.y" /* yacc.c:1646  */
    {std::cout<<"argument\n";}
#line 2248 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 778 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = new AstNode('Z', count, NULL, $2); count++; 
          }
#line 2256 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 782 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = new AstNode('Z', count, NULL, NULL); count++; 
          }
#line 2264 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 797 "parse.y" /* yacc.c:1646  */
    {std::cout<<"star_comma\n";}
#line 2270 "parse.tab.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 802 "parse.y" /* yacc.c:1646  */
    {std::cout<<"Star_COMMA\n";}
#line 2276 "parse.tab.cpp" /* yacc.c:1646  */
    break;


#line 2280 "parse.tab.cpp" /* yacc.c:1646  */
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
#line 849 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}

