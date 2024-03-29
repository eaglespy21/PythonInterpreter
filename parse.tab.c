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
	int yylex (void);
	extern int yylineno;
	extern char *yytext;
        extern int count;
        bool add=false,subtract=false, mult=false, division=false, powe=false, modulus=false;
        bool dSlash = false, uPlus = false, uNeg = false, comingFromPar = false;
        int uNegCount = 0, uPlusCount = 0;
	void yyerror (char const *);

#line 81 "parse.tab.c" /* yacc.c:339  */

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
   by #include "parse.tab.h".  */
#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
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
    AMPEREQUAL = 259,
    AMPERSAND = 260,
    AND = 261,
    AS = 262,
    ASSERT = 263,
    AT = 264,
    BACKQUOTE = 265,
    BAR = 266,
    BREAK = 267,
    CIRCUMFLEX = 268,
    CIRCUMFLEXEQUAL = 269,
    CLASS = 270,
    COLON = 271,
    COMMA = 272,
    CONTINUE = 273,
    DEDENT = 274,
    DEF = 275,
    DEL = 276,
    DOT = 277,
    DOUBLESLASH = 278,
    DOUBLESLASHEQUAL = 279,
    DOUBLESTAR = 280,
    DOUBLESTAREQUAL = 281,
    ELIF = 282,
    ELSE = 283,
    ENDMARKER = 284,
    EQEQUAL = 285,
    EQUAL = 286,
    EXCEPT = 287,
    EXEC = 288,
    FINALLY = 289,
    FOR = 290,
    FROM = 291,
    GLOBAL = 292,
    GREATER = 293,
    GREATEREQUAL = 294,
    GRLT = 295,
    IF = 296,
    IMPORT = 297,
    IN = 298,
    INDENT = 299,
    IS = 300,
    LAMBDA = 301,
    LBRACE = 302,
    LEFTSHIFT = 303,
    LEFTSHIFTEQUAL = 304,
    LESS = 305,
    LESSEQUAL = 306,
    LPAR = 307,
    LSQB = 308,
    MINEQUAL = 309,
    MINUS = 310,
    NAME = 311,
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
#line 17 "parse.y" /* yacc.c:355  */

  Ast* ast;
  double d;

#line 212 "parse.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 227 "parse.tab.c" /* yacc.c:358  */

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
#define YYLAST   906

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
       0,    44,    44,    45,    46,    55,    56,    59,    62,    63,
      66,    67,    70,    71,    74,    75,    78,    79,    82,    83,
      86,    89,    90,    93,    94,    97,    98,   101,   102,   105,
     106,   109,   110,   113,   114,   117,   120,   121,   124,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   138,   139,
     142,   143,   146,   147,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   164,   165,   168,   169,
     172,   173,   176,   179,   182,   183,   184,   185,   186,   189,
     192,   195,   196,   199,   202,   203,   206,   207,   210,   211,
     214,   215,   218,   221,   222,   225,   226,   229,   230,   233,
     234,   235,   238,   239,   242,   243,   246,   249,   250,   253,
     254,   257,   258,   261,   262,   265,   266,   269,   270,   271,
     272,   273,   274,   275,   276,   279,   280,   283,   284,   287,
     288,   291,   292,   295,   296,   299,   300,   303,   304,   307,
     308,   311,   314,   315,   318,   319,   322,   323,   326,   327,
     330,   331,   335,   336,   339,   340,   343,   344,   347,   348,
     351,   352,   361,   362,   365,   366,   369,   370,   373,   374,
     377,   378,   381,   382,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   399,   418,   421,   425,   428,
     432,   435,   441,   446,   447,   450,   451,   470,   471,   474,
     475,   522,   523,   526,   529,   535,   559,   562,   563,   568,
     571,   576,   579,   580,   583,   589,   590,   591,   592,   593,
     598,   601,   605,   608,   609,   612,   613,   616,   617,   620,
     621,   624,   625,   628,   629,   632,   633,   636,   637,   638,
     641,   644,   645,   646,   649,   650,   653,   654,   657,   658,
     661,   665,   668,   669,   672,   673,   676,   677,   680,   681,
     684,   685,   688,   689,   690,   691,   692,   693,   696,   697,
     700,   701,   704,   705,   708,   709,   712,   713,   716,   717,
     721,   722,   725,   726,   729,   730,   733,   737,   741,   747,
     748,   749,   752,   753,   754,   757,   758,   759,   762,   763,
     764,   767,   768,   769,   772,   773,   774,   778,   779,   780,
     783,   784,   785,   788,   789,   790,   793,   796,   799,   800,
     801,   804,   805,   806
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "AMPEREQUAL", "AMPERSAND",
  "AND", "AS", "ASSERT", "AT", "BACKQUOTE", "BAR", "BREAK", "CIRCUMFLEX",
  "CIRCUMFLEXEQUAL", "CLASS", "COLON", "COMMA", "CONTINUE", "DEDENT",
  "DEF", "DEL", "DOT", "DOUBLESLASH", "DOUBLESLASHEQUAL", "DOUBLESTAR",
  "DOUBLESTAREQUAL", "ELIF", "ELSE", "ENDMARKER", "EQEQUAL", "EQUAL",
  "EXCEPT", "EXEC", "FINALLY", "FOR", "FROM", "GLOBAL", "GREATER",
  "GREATEREQUAL", "GRLT", "IF", "IMPORT", "IN", "INDENT", "IS", "LAMBDA",
  "LBRACE", "LEFTSHIFT", "LEFTSHIFTEQUAL", "LESS", "LESSEQUAL", "LPAR",
  "LSQB", "MINEQUAL", "MINUS", "NAME", "NEWLINE", "NOT", "NOTEQUAL", "OR",
  "PASS", "PERCENT", "PERCENTEQUAL", "PLUS", "PLUSEQUAL", "PRINT", "RAISE",
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

#define YYPACT_NINF -365

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-365)))

#define YYTABLE_NINF -306

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     347,  -365,   787,    61,   787,  -365,    75,  -365,   101,   826,
     826,   826,    35,   103,   787,    61,    10,   787,    26,   787,
    -365,    59,   172,   797,  -365,  -365,   676,   787,   787,    97,
    -365,   163,   787,   787,   787,   180,  -365,  -365,   432,   154,
     175,    40,  -365,  -365,   185,  -365,   112,  -365,  -365,  -365,
    -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
     171,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,   173,
      55,   186,  -365,   236,   182,   184,   193,    -1,   -11,    25,
    -365,   826,  -365,    46,  -365,  -365,   228,  -365,  -365,  -365,
    -365,   187,  -365,    99,  -365,    41,    24,   151,   144,  -365,
      31,   156,    19,    61,   165,  -365,   194,  -365,   197,   147,
     787,     0,  -365,   195,     3,   188,   107,   149,  -365,   110,
    -365,   148,  -365,  -365,   111,   150,  -365,  -365,   787,  -365,
     173,   204,  -365,  -365,   590,   206,   208,   219,  -365,  -365,
    -365,  -365,  -365,  -365,  -365,  -365,  -365,    83,   170,   183,
     787,  -365,   797,   797,  -365,   797,  -365,  -365,  -365,  -365,
    -365,   189,  -365,  -365,   198,  -365,   826,   826,   826,   826,
    -365,  -365,   826,  -365,  -365,   826,  -365,  -365,  -365,  -365,
     826,  -365,   190,   625,   723,   213,    46,  -365,  -365,  -365,
    -365,    26,  -365,  -365,  -365,  -365,  -365,  -365,  -365,  -365,
    -365,    26,   787,   192,   625,  -365,  -365,   787,   590,   787,
      62,   215,   826,  -365,   787,   787,  -365,  -365,    43,    -6,
     590,    61,   199,  -365,   226,   181,   787,   201,   202,  -365,
     787,   227,   787,   826,  -365,  -365,  -365,  -365,  -365,  -365,
    -365,   826,  -365,  -365,  -365,   243,  -365,   787,  -365,   217,
    -365,   141,   590,   787,   246,   826,   112,  -365,  -365,   173,
      17,   186,  -365,  -365,  -365,   182,   184,   193,    -1,   -11,
      25,  -365,  -365,   787,   787,   191,   139,  -365,   248,  -365,
     250,   247,   254,   207,   266,   268,   826,  -365,   257,  -365,
    -365,  -365,  -365,  -365,   218,  -365,  -365,  -365,   220,  -365,
     224,   590,   144,   272,   269,    -6,   241,   291,  -365,  -365,
     283,  -365,   274,  -365,  -365,     0,  -365,  -365,  -365,  -365,
     285,  -365,    11,  -365,   136,   262,   265,   787,  -365,  -365,
     272,   511,   787,   295,   284,   298,   287,   208,   590,   182,
    -365,  -365,   787,  -365,  -365,  -365,   787,  -365,  -365,   625,
     758,   294,  -365,   663,  -365,   787,  -365,  -365,   260,   302,
    -365,  -365,  -365,   787,  -365,   590,  -365,   249,   263,   241,
    -365,   787,   292,   226,   297,  -365,  -365,   188,   787,  -365,
    -365,  -365,   797,   816,   306,  -365,   511,   305,   115,   590,
     310,   293,   590,   313,  -365,  -365,  -365,  -365,  -365,   314,
    -365,  -365,  -365,   266,  -365,   317,  -365,   590,  -365,   307,
    -365,  -365,   283,   318,   320,  -365,   281,   227,   323,    29,
      81,   123,   324,  -365,   282,   787,  -365,  -365,  -365,  -365,
    -365,   787,  -365,  -365,   590,   327,  -365,   322,   590,   758,
    -365,   787,  -365,  -365,  -365,   329,  -365,   590,   590,  -365,
    -365,   787,   816,  -365,  -365,  -365,   816,   330,   816,  -365,
    -365,  -365,   816,  -365,  -365,  -365,   590,  -365,  -365,  -365,
    -365,   590,   274,  -365,   332,   125,  -365,   816,   123,   335,
    -365,  -365,  -365,  -365,  -365,  -365,  -365,   816,  -365
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
      11,   219,     0,     0,     0,    79,     0,    80,     0,     0,
       0,     0,    96,     0,     0,     0,    28,   228,   224,   226,
     208,   218,     8,     0,    73,   207,    69,    85,    82,   230,
     209,     0,     0,     0,   288,     0,     4,     2,    11,     0,
      17,     0,   124,   122,     9,    36,   323,    39,    40,    41,
      42,    43,    74,    75,    76,    78,    77,    44,    90,    91,
      45,    46,    47,    37,   117,   118,   119,   120,   121,   300,
     165,   166,   168,   171,   172,   185,   187,   189,   191,   195,
     199,     0,   206,   213,   220,   163,    53,   123,     3,    83,
     218,   116,   109,     0,   284,     0,     0,     0,   294,    72,
     114,     0,    96,     0,     0,   112,     0,   107,    92,   105,
       0,     0,    33,     0,     0,    26,   300,     0,   227,   300,
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
       0,     0,   294,    87,     0,     0,     0,   103,    99,    94,
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
     100,   102,   309,     0,     0,   289,     0,   297,     0,   281,
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
    -365,  -365,  -365,  -365,  -365,   325,  -365,   160,   326,  -365,
     319,  -365,  -204,   -19,    48,  -365,  -365,  -107,  -365,    37,
       1,   225,  -365,   174,    85,  -365,  -365,  -365,  -365,  -365,
    -365,  -365,  -365,  -365,  -365,  -365,  -365,    44,  -365,  -365,
    -365,  -365,   275,   276,    66,    12,   158,    79,  -365,     6,
    -365,  -365,  -365,  -365,  -365,   -86,  -365,  -365,  -365,   -47,
    -365,  -365,  -365,    54,   142,  -365,  -365,  -365,  -198,    15,
    -365,  -364,  -365,    -2,  -365,  -149,   239,   -12,  -365,  -365,
      23,   229,   230,   237,  -365,   235,  -365,   222,  -365,   -68,
    -365,  -365,   223,  -365,  -365,  -365,  -365,  -365,   381,  -365,
    -365,  -365,  -365,  -365,    64,    57,  -365,  -365,    -4,   -14,
    -365,  -365,  -365,   374,  -365,    69,  -332,  -365,   -59,   296,
    -365,   -54,  -111,  -365,  -365,  -365,     5,    49,   122,     8,
     -81,   -41,    33,    22,    67,   -36,  -329,  -365,     7,   200
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
      91,    45,    94,   260,   224,   235,   300,   101,   238,    93,
     296,   127,   106,   181,   132,   116,   119,   124,   399,   422,
     138,   400,   312,   123,   130,   131,   110,  -296,   227,     1,
     135,   137,    98,   100,    98,   236,     4,    44,   239,    45,
     208,   102,   167,   243,   173,   342,   306,   170,   176,   246,
     307,   206,   111,   174,   336,     6,   112,   102,   207,  -286,
       8,   -98,   111,   111,   233,   203,   112,   112,   182,   171,
     452,   308,    16,    17,   214,   142,   209,   153,    18,    19,
     228,    20,    90,  -296,    23,   305,     1,   177,   475,   153,
      25,     2,   476,     4,   478,     5,   152,   456,   183,   184,
     178,     7,   179,   361,     9,    29,    30,   399,   223,   218,
     400,    34,   271,   485,   111,   153,    10,    92,   112,    12,
      13,   203,   429,   232,   150,    15,   245,   150,   150,    16,
      17,    96,   430,   111,   299,    18,    19,   112,    20,    90,
     395,    23,   233,   262,    24,   233,   241,    25,   259,    26,
      27,   204,    28,   378,   222,   167,   205,    97,   241,   105,
     233,   212,    29,    30,   458,   348,   452,   409,    34,   203,
     346,   233,    -5,   332,   233,   333,    29,   289,   341,   134,
     139,   276,   282,   143,     3,    -6,   147,   289,   149,   265,
     150,   433,   155,   167,   437,   297,   290,   168,   169,   215,
     292,   304,   276,   210,   202,   295,   290,   219,   373,   444,
     220,   226,   303,   380,   221,   377,   457,   237,   356,   230,
     240,   247,   252,   244,   318,   253,   255,   257,   321,   325,
     324,   301,   187,   419,   424,   302,   465,   326,   286,   258,
     468,   264,   188,   315,   322,   330,   272,   263,   293,   472,
     473,   137,   189,   317,   190,   314,    98,   319,   320,   191,
     327,   331,   338,   345,    98,   349,   156,   350,   480,   351,
    -244,   343,   344,   481,   157,   158,   159,   192,   339,   160,
     352,   161,   193,   353,   355,   365,   162,   163,   191,   363,
     358,   194,   359,   195,   164,   165,   360,   307,   368,   196,
     369,   371,   374,   424,   197,   382,   198,   424,   383,   424,
     199,   389,   390,   424,   392,   393,   402,   406,   407,   411,
     414,   410,   416,   425,   428,   384,   434,   435,   424,   438,
     388,   439,    45,   441,   447,   445,   448,   449,   424,   451,
     396,   462,   153,   466,   397,   471,   477,   276,   276,   378,
       1,   282,   487,   404,   332,     2,     3,     4,   417,     5,
     145,   408,     6,   141,   294,     7,   144,     8,     9,   413,
     376,   366,   256,   357,   385,   291,   418,   216,   217,   313,
      10,   412,    11,    12,    13,   367,   482,    45,    14,    15,
     467,   394,   261,    16,    17,   337,   266,   270,   267,    18,
      19,   427,    20,    21,    22,    23,   268,   269,    24,   287,
     133,    25,   405,    26,    27,   146,    28,   403,   398,   486,
     242,   484,   415,   384,   362,   450,    29,    30,    31,   464,
      32,    33,    34,   483,   446,     1,   440,   276,     0,   470,
       2,     3,     4,   488,     5,     0,   469,     6,     0,   474,
       7,   426,     8,     9,     0,     0,   340,     0,     0,     0,
       0,     0,     0,     0,     0,    10,     0,    11,    12,    13,
       0,     0,     0,    14,    15,     0,     0,     0,    16,    17,
       0,     0,     0,     0,    18,    19,     0,    20,    90,   140,
      23,     0,     0,    24,     0,     0,    25,     0,    26,    27,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,    30,    31,     1,    32,    33,    34,     0,     2,
       3,     4,     0,     5,     0,     0,     6,     0,     0,     7,
       0,     8,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,     0,    11,    12,    13,     0,
       0,     0,    14,    15,     0,     0,     0,    16,    17,     0,
       0,     0,     0,    18,    19,     0,    20,    90,     0,    23,
       0,     0,    24,     0,     0,    25,     0,    26,    27,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,    30,    31,     1,    32,    33,    34,     0,     2,     0,
       4,     0,     5,     0,     0,     0,     0,     0,     7,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,    12,    13,     1,     0,
       0,     0,    15,     0,     0,     4,    16,    17,     0,     0,
       0,     0,    18,    19,     0,    20,    90,   249,    23,     0,
     273,    24,     0,     0,    25,     0,    26,    27,     0,    28,
       0,     0,     0,     0,     0,     0,     1,     0,     0,    29,
      30,    16,    17,     4,     0,    34,     0,    18,    19,     1,
      20,    90,     0,    23,     0,   281,     4,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   274,     0,    29,    30,     0,     0,     0,    16,
      17,     0,     0,     0,     0,    18,    19,     0,    20,    90,
       0,    23,    16,    17,     0,     0,     1,    25,    18,    19,
       0,    20,    90,     4,    23,     0,  -305,     0,     0,     0,
      25,     0,    29,    30,     0,   281,   128,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30,     0,     0,     0,
       0,     1,     0,     0,     0,     0,     0,     0,     4,    16,
      17,     0,     0,     0,     0,    18,    19,     0,    20,    90,
       0,    23,     0,   273,     0,     0,     0,    25,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       1,     0,    29,    30,    16,    17,     0,     4,     0,     0,
      18,    19,     0,    20,    90,     0,    23,     0,     0,     1,
       0,     0,    25,     0,     0,     0,     4,     0,     0,     1,
       0,     0,     0,    16,    17,     0,     4,    29,    30,    18,
      19,     0,    20,    90,    17,    23,     0,     0,     0,    18,
      19,    25,    20,    90,     0,    23,     0,     0,     0,     0,
       0,    25,   420,    17,     0,     0,    29,    30,    18,    19,
       0,    20,    90,    17,    23,     0,    29,    30,    18,    19,
      25,    20,    90,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     0,     0,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,    29,    30
};

static const yytype_int16 yycheck[] =
{
       2,     0,     4,   152,   111,   116,   210,    11,   119,     3,
     208,    23,    14,    81,    28,    17,    18,    19,   350,   383,
      34,   350,   220,    18,    26,    27,    16,    16,    25,     3,
      32,    33,     9,    10,    11,   116,    10,     0,   119,    38,
      16,    22,    11,   124,    55,    28,    52,    48,    23,   130,
      56,    10,    52,    64,   252,    15,    56,    22,    17,     0,
      20,    42,    52,    52,    35,    22,    56,    56,    22,    70,
      41,    77,    46,    47,    43,    38,    52,    60,    52,    53,
      77,    55,    56,    72,    58,    42,     3,    62,   452,    60,
      64,     8,   456,    10,   458,    12,    41,    16,    52,    53,
      75,    18,    77,   301,    21,    79,    80,   439,   110,   103,
     439,    85,   180,   477,    52,    60,    33,    56,    56,    36,
      37,    22,     7,    16,    17,    42,   128,    17,    17,    46,
      47,    56,    17,    52,    72,    52,    53,    56,    55,    56,
     338,    58,    35,   155,    61,    35,    35,    64,   150,    66,
      67,    52,    69,    17,     7,    11,    57,    56,    35,    56,
      35,    17,    79,    80,    41,   276,    41,   365,    85,    22,
      31,    35,     0,    32,    35,    34,    79,   191,   259,    16,
       0,   183,   184,    29,     9,     0,    74,   201,    17,   166,
      17,   389,     6,    11,   392,   209,   191,    13,     5,    43,
     202,   215,   204,    52,    17,   207,   201,    42,   315,   407,
      16,    16,   214,   324,    17,   322,   420,    68,   286,    31,
      72,    17,    16,    73,   226,    17,     7,    57,   230,   233,
     232,    16,     4,   382,   383,   212,   434,   241,    25,    56,
     438,    43,    14,    17,    17,   247,    56,    58,    56,   447,
     448,   253,    24,    72,    26,    56,   233,    56,    56,    31,
      17,    44,    16,    72,   241,    17,    30,    17,   466,    22,
      16,   273,   274,   471,    38,    39,    40,    49,   255,    43,
      73,    45,    54,    17,    16,    16,    50,    51,    31,    17,
      72,    63,    72,    65,    58,    59,    72,    56,     7,    71,
      17,    27,    17,   452,    76,    43,    78,   456,    43,   458,
      82,    16,    28,   462,    16,    28,    22,    57,    16,    56,
      28,    72,    25,    17,    19,   327,    16,    34,   477,    16,
     332,    17,   331,    16,    16,    28,    16,    56,   487,    16,
     342,    17,    60,    16,   346,    16,    16,   349,   350,    17,
       3,   353,    17,   355,    32,     8,     9,    10,   377,    12,
      41,   363,    15,    38,   204,    18,    40,    20,    21,   371,
     322,   305,   147,   288,   330,   201,   378,   102,   102,   221,
      33,   369,    35,    36,    37,   306,   472,   386,    41,    42,
     437,   337,   153,    46,    47,   253,   167,   175,   168,    52,
      53,   386,    55,    56,    57,    58,   169,   172,    61,   186,
      29,    64,   355,    66,    67,    41,    69,   353,   349,   478,
     124,   475,   373,   425,   302,   417,    79,    80,    81,   431,
      83,    84,    85,   474,   412,     3,   403,   439,    -1,   441,
       8,     9,    10,   479,    12,    -1,   439,    15,    -1,   451,
      18,   384,    20,    21,    -1,    -1,   256,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,
      -1,    -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    52,    53,    -1,    55,    56,    57,
      58,    -1,    -1,    61,    -1,    -1,    64,    -1,    66,    67,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,     3,    83,    84,    85,    -1,     8,
       9,    10,    -1,    12,    -1,    -1,    15,    -1,    -1,    18,
      -1,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    -1,    35,    36,    37,    -1,
      -1,    -1,    41,    42,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    52,    53,    -1,    55,    56,    -1,    58,
      -1,    -1,    61,    -1,    -1,    64,    -1,    66,    67,    -1,
      69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,     3,    83,    84,    85,    -1,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    36,    37,     3,    -1,
      -1,    -1,    42,    -1,    -1,    10,    46,    47,    -1,    -1,
      -1,    -1,    52,    53,    -1,    55,    56,    57,    58,    -1,
      25,    61,    -1,    -1,    64,    -1,    66,    67,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    79,
      80,    46,    47,    10,    -1,    85,    -1,    52,    53,     3,
      55,    56,    -1,    58,    -1,    22,    10,    -1,    -1,    64,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    80,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    52,    53,    -1,    55,    56,
      -1,    58,    46,    47,    -1,    -1,     3,    64,    52,    53,
      -1,    55,    56,    10,    58,    -1,    73,    -1,    -1,    -1,
      64,    -1,    79,    80,    -1,    22,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    46,
      47,    -1,    -1,    -1,    -1,    52,    53,    -1,    55,    56,
      -1,    58,    -1,    25,    -1,    -1,    -1,    64,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,
       3,    -1,    79,    80,    46,    47,    -1,    10,    -1,    -1,
      52,    53,    -1,    55,    56,    -1,    58,    -1,    -1,     3,
      -1,    -1,    64,    -1,    -1,    -1,    10,    -1,    -1,     3,
      -1,    -1,    -1,    46,    47,    -1,    10,    79,    80,    52,
      53,    -1,    55,    56,    47,    58,    -1,    -1,    -1,    52,
      53,    64,    55,    56,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    64,    46,    47,    -1,    -1,    79,    80,    52,    53,
      -1,    55,    56,    47,    58,    -1,    79,    80,    52,    53,
      64,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    79,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     8,     9,    10,    12,    15,    18,    20,    21,
      33,    35,    36,    37,    41,    42,    46,    47,    52,    53,
      55,    56,    57,    58,    61,    64,    66,    67,    69,    79,
      80,    81,    83,    84,    85,    87,    88,    89,    90,    91,
      92,    94,    95,    96,   105,   106,   107,   108,   112,   115,
     116,   117,   118,   119,   120,   121,   122,   125,   126,   127,
     136,   137,   138,   139,   140,   142,   143,   144,   148,   159,
     161,   162,   163,   164,   166,   167,   168,   169,   171,   173,
     175,   176,   177,   179,   184,   187,   195,   199,   211,   212,
      56,   159,    56,   135,   159,   210,    56,    56,   166,   194,
     166,   194,    22,   128,   129,    56,   159,   132,   134,   135,
      16,    52,    56,    98,   100,   103,   159,   183,   196,   159,
     180,   181,   186,   212,   159,   182,   185,   163,    70,   113,
     159,   159,   195,   184,    16,   159,   150,   159,   195,     0,
      57,    91,   105,    29,    94,    96,   199,    74,   225,    17,
      17,   216,    41,    60,   160,     6,    30,    38,    39,    40,
      43,    45,    50,    51,    58,    59,   165,    11,    13,     5,
      48,    70,   170,    55,    64,   172,    23,    62,    75,    77,
     174,   175,    22,    52,    53,   178,   188,     4,    14,    24,
      26,    31,    49,    54,    63,    65,    71,    76,    78,    82,
     110,   111,    17,    22,    52,    57,    10,    17,    16,    52,
      52,    97,    17,   214,    43,    43,   128,   129,   135,    42,
      16,    17,     7,   159,   103,   104,    16,    25,    77,   102,
      31,    99,    16,    35,   198,   208,   216,    68,   208,   216,
      72,    35,   205,   216,    73,   159,   216,    17,   124,    57,
     106,   154,    16,    17,   149,     7,   107,    57,    56,   159,
     161,   162,   163,    58,    43,   166,   167,   168,   169,   171,
     173,   175,    56,    25,    77,    93,   159,   201,   202,   222,
     223,    22,   159,   189,   190,   191,    25,   178,   109,   195,
     212,   109,   159,    56,    93,   159,   154,   195,   200,    72,
      98,    16,   166,   159,   195,    42,    52,    56,    77,   130,
     131,   133,   154,   132,    56,    17,   213,    72,   159,    56,
      56,   159,    17,   215,   159,   194,   194,    17,   114,   220,
     159,    44,    32,    34,   145,   151,   154,   150,    16,   166,
     225,   216,    28,   159,   159,    72,    31,   203,   208,    17,
      17,    22,    73,    17,   218,    16,   175,   110,    72,    72,
      72,   154,   214,    17,   123,    16,   130,   133,     7,    17,
     219,    27,   141,   103,    17,   101,   100,   103,    17,   197,
     208,   217,    43,    43,   159,   123,   105,   155,   159,    16,
      28,   146,    16,    28,   149,   154,   159,   159,   201,   202,
     222,   224,    22,   190,   159,   191,    57,    16,   159,   154,
      72,    56,   131,   159,    28,   213,    25,    99,   159,   161,
      46,   156,   157,   158,   161,    17,   220,   155,    19,     7,
      17,   152,   153,   154,    16,    34,   147,   154,    16,    17,
     218,    16,   192,   193,   154,    28,   219,    16,    16,    56,
     215,    16,    41,   207,   208,   209,    16,    98,    41,   204,
     205,   206,    17,   221,   159,   154,    16,   145,   154,   224,
     159,    16,   154,   154,   159,   157,   157,    16,   157,   157,
     154,   154,   141,   217,   207,   157,   204,    17,   221
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
        case 185:
#line 400 "parse.y" /* yacc.c:1646  */
    {
             if(comingFromPar){
               comingFromPar = false;
             }
             else{
               //std::cout<<$1<<std::endl;
               //std::fstream output;
               //output.open("graph.gv", std::ios::out);
               //output<< "digraph G {"<<std::endl;
               //output<< "node [shape=record];"<<std::endl;
               //makeGraph($1, output);
               //output << "}" <<std::endl;
               //output.close();
               //std::cout << "= "<<eval($1) <<std::endl;
               //treeFree($1);
               //std::cout<<"> ";
             }
          }
#line 1814 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 422 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = new AstNode('Z', count, $1, NULL); 
          }
#line 1822 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 429 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = new AstNode('Z', count, $1, NULL); 
          }
#line 1830 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 436 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = new AstNode('Z', count, $1, NULL);
            std::cout << "= "<<eval((yyvsp[0].ast)) <<std::endl;
            treeFree((yyvsp[0].ast)); 
          }
#line 1840 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 442 "parse.y" /* yacc.c:1646  */
    {
          }
#line 1847 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 452 "parse.y" /* yacc.c:1646  */
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
#line 1868 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 470 "parse.y" /* yacc.c:1646  */
    {add = true;}
#line 1874 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 471 "parse.y" /* yacc.c:1646  */
    {subtract = true;}
#line 1880 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 476 "parse.y" /* yacc.c:1646  */
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
              if((yyvsp[0].ast) != 0){
                //$$ = floor((float)$1 / (float)$3);
                (yyval.ast) = new AstNode('/', count, (yyvsp[-2].ast), (yyvsp[0].ast)); count++;
              } 
              else{
                //$$ = 0;
                std::cout<<"ZeroDivisionError: integer division or modulo by zero"<<std::endl;
              }
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
              if((yyvsp[0].ast) != 0){
                //$$ = floor((float)$1/(float)$3);
                (yyval.ast) = new AstNode('D', count, (yyvsp[-2].ast), (yyvsp[0].ast)); count++;
              }
              else{
                //$$ = 0;
              }
              //std::cout<<"EXECUTE DOUBLESLASH"<<$$<<std::endl;
              dSlash = false;
            }
          }
#line 1929 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 522 "parse.y" /* yacc.c:1646  */
    { mult = true;}
#line 1935 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 523 "parse.y" /* yacc.c:1646  */
    { 
                  division = true;
                }
#line 1943 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 526 "parse.y" /* yacc.c:1646  */
    { 
                    modulus = true;
                  }
#line 1951 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 530 "parse.y" /* yacc.c:1646  */
    { 
                    dSlash = true;
                  }
#line 1959 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 536 "parse.y" /* yacc.c:1646  */
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
#line 1987 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 562 "parse.y" /* yacc.c:1646  */
    { uPlus = true; uPlusCount++; }
#line 1993 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 563 "parse.y" /* yacc.c:1646  */
    { 
                  uNeg = true;
                  uNegCount++;
                  //std::cout<<"MINUS"<<std::endl;
                }
#line 2003 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 572 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = pow($1, $4);
            (yyval.ast) = new AstNode('E', count, (yyvsp[-3].ast), (yyvsp[0].ast)); count++;
          }
#line 2012 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 584 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = $2; 
            //$$ = new AstNode('R', count, $2, NULL); count++;
            comingFromPar = true;
          }
#line 2022 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 594 "parse.y" /* yacc.c:1646  */
    {
            std::cout<<"Reached atom"<<std::endl; 
            (yyval.ast) = new AstNumber('K',count, (yyvsp[0].d)); count++; 
          }
#line 2031 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 602 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = new AstNode('Z', count, $1, NULL); count++; 
          }
#line 2039 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 287:
#line 738 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = new AstNode('Z', count, NULL, $2); count++; 
          }
#line 2047 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 288:
#line 742 "parse.y" /* yacc.c:1646  */
    { 
            //$$ = new AstNode('Z', count, NULL, NULL); count++; 
          }
#line 2055 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 2059 "parse.tab.c" /* yacc.c:1646  */
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
#line 809 "parse.y" /* yacc.c:1906  */


#include <stdio.h>
void yyerror (char const *s) {
	fprintf (stderr, "%d: %s with [%s]\n", yylineno, s, yytext);
}

