/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "cparser.y"

	#include <stdio.h>
	#include <stdlib.h>
	int yylex(void);


/* Line 371 of yacc.c  */
#line 75 "cparser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "cparser.tab.h".  */
#ifndef YY_YY_CPARSER_TAB_H_INCLUDED
# define YY_YY_CPARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENT = 258,
     IF = 259,
     TMAIN = 260,
     ELSE = 261,
     WHILE = 262,
     SWITCH = 263,
     CASE = 264,
     INT = 265,
     FLOAT = 266,
     DOUBLE = 267,
     LONG = 268,
     SHORT = 269,
     CHAR = 270,
     FOR = 271,
     DO = 272,
     BREAK = 273,
     CONTINUE = 274,
     EQUALSCHECK = 275,
     NUMBER = 276,
     END = 277
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_CPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 163 "cparser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   612

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNRULES -- Number of states.  */
#define YYNSTATES  382

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   277

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,    32,
      31,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    33,     2,     2,     2,     2,     2,     2,     2,
      27,    28,    25,    24,     2,    23,     2,    26,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    38,    34,
      36,    35,    37,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    29,     2,    30,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    20,    22,    24,    26,    28,    32,    33,
      39,    47,    55,    63,    71,    75,    83,    87,    95,    99,
     107,   111,   119,   123,   131,   135,   143,   147,   151,   159,
     163,   169,   175,   181,   187,   193,   199,   204,   206,   214,
     220,   226,   232,   238,   244,   250,   254,   260,   268,   276,
     292,   306,   310,   318,   322,   332,   342,   344,   360,   380,
     408,   424,   436,   438,   440,   442
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      40,     0,    -1,    41,    10,    41,     5,    41,    27,    41,
      28,    41,    29,    41,    42,    41,    30,    41,    22,    -1,
      31,    -1,    32,    -1,    33,    -1,    43,    -1,    41,    56,
      41,    -1,    -1,    41,    46,    41,    34,    41,    -1,    41,
      46,    41,    34,    41,    44,    41,    -1,    41,    35,    41,
      46,    41,    34,    41,    -1,    41,    46,    41,    34,    41,
      44,    41,    -1,    41,    46,    41,    23,    41,    47,    41,
      -1,    41,    47,    41,    -1,    41,    47,    41,    24,    41,
      48,    41,    -1,    41,    48,    41,    -1,    41,    48,    41,
      25,    41,    49,    41,    -1,    41,    49,    41,    -1,    41,
      49,    41,    26,    41,    50,    41,    -1,    41,    50,    41,
      -1,    41,    50,    41,    36,    41,    51,    41,    -1,    41,
      51,    41,    -1,    41,    51,    41,    20,    41,    52,    41,
      -1,    41,    52,    41,    -1,    41,    52,    41,    37,    41,
      53,    41,    -1,    41,    53,    41,    -1,    41,    21,    41,
      -1,    41,    27,    41,    46,    41,    28,    41,    -1,    41,
       3,    41,    -1,    41,    10,    41,     3,    41,    -1,    41,
      11,    41,     3,    41,    -1,    41,    15,    41,     3,    41,
      -1,    41,    13,    41,     3,    41,    -1,    41,    14,    41,
       3,    41,    -1,    41,    12,    41,     3,    41,    -1,    54,
      41,    45,    41,    -1,    43,    -1,    41,    54,    41,    34,
      41,    56,    41,    -1,    41,    55,    41,    56,    41,    -1,
      41,    58,    41,    56,    41,    -1,    41,    63,    41,    56,
      41,    -1,    41,    64,    41,    56,    41,    -1,    41,    65,
      41,    56,    41,    -1,    41,    66,    41,    56,    41,    -1,
      41,    43,    41,    -1,    41,    57,    41,    34,    41,    -1,
      41,     3,    41,    35,    41,    46,    41,    -1,    41,    59,
      41,    61,    41,    60,    41,    -1,    41,     4,    41,    27,
      41,    46,    41,    28,    41,    29,    41,    42,    41,    30,
      41,    -1,    41,     6,    41,    27,    41,    28,    41,    29,
      41,    42,    41,    30,    41,    -1,    41,    43,    41,    -1,
      41,     6,    41,    59,    41,    61,    41,    -1,    41,    43,
      41,    -1,    41,    62,    41,    18,    41,    34,    41,    62,
      41,    -1,    41,    62,    41,    19,    41,    34,    41,    62,
      41,    -1,    42,    -1,    41,     7,    41,    27,    41,    46,
      41,    28,    41,    29,    41,    62,    41,    30,    41,    -1,
      41,    17,    41,    29,    41,    62,    41,    30,    41,     7,
      41,    27,    41,    46,    41,    28,    41,    34,    41,    -1,
      41,    16,    41,    27,    41,    57,    41,    34,    41,     3,
      41,    68,    41,    46,    41,    34,    41,    57,    41,    28,
      41,    29,    41,    62,    41,    30,    41,    -1,    41,     8,
      41,    27,    41,    46,    41,    28,    41,    29,    41,    67,
      41,    30,    41,    -1,    41,     9,    41,    46,    41,    38,
      41,    42,    41,    67,    41,    -1,    43,    -1,    36,    -1,
      37,    -1,    20,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    35,    36,    37,    38,    40,    42,    44,
      45,    47,    48,    50,    51,    53,    54,    56,    57,    59,
      60,    62,    63,    65,    66,    68,    69,    71,    72,    73,
      75,    76,    77,    78,    79,    80,    82,    83,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    95,    97,    99,
     101,   102,   104,   105,   107,   108,   109,   111,   113,   115,
     117,   119,   120,   122,   123,   124
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "IF", "TMAIN", "ELSE", "WHILE",
  "SWITCH", "CASE", "INT", "FLOAT", "DOUBLE", "LONG", "SHORT", "CHAR",
  "FOR", "DO", "BREAK", "CONTINUE", "EQUALSCHECK", "NUMBER", "END", "'-'",
  "'+'", "'*'", "'/'", "'('", "')'", "'{'", "'}'", "'\\n'", "'\\t'", "' '",
  "';'", "'='", "'<'", "'>'", "':'", "$accept", "mainstmt", "ws", "code",
  "epsilon", "stmt", "estmt", "expr", "sum", "product", "fraction",
  "lessthan", "equals", "greaterthan", "factor", "declaration",
  "initialisation", "stmts", "assignment", "ifelsestmt", "ifstmt",
  "elsestmt", "elseifstmt", "loopcode", "whilestmt", "dowhilestmt",
  "forstmt", "switchstmt", "casestmt", "condition", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    45,    43,    42,    47,    40,    41,   123,
     125,    10,     9,    32,    59,    61,    60,    62,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    40,    41,    41,    41,    41,    42,    43,    44,
      44,    45,    45,    46,    46,    47,    47,    48,    48,    49,
      49,    50,    50,    51,    51,    52,    52,    53,    53,    53,
      54,    54,    54,    54,    54,    54,    55,    55,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    57,    58,    59,
      60,    60,    61,    61,    62,    62,    62,    63,    64,    65,
      66,    67,    67,    68,    68,    68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    16,     1,     1,     1,     1,     3,     0,     5,
       7,     7,     7,     7,     3,     7,     3,     7,     3,     7,
       3,     7,     3,     7,     3,     7,     3,     3,     7,     3,
       5,     5,     5,     5,     5,     5,     4,     1,     7,     5,
       5,     5,     5,     5,     5,     3,     5,     7,     7,    15,
      13,     3,     7,     3,     9,     9,     1,    15,    19,    27,
      15,    11,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     3,     4,     5,     0,     0,     6,     1,     8,     0,
       8,     0,     8,     0,     8,     0,     8,     8,     8,     8,
       8,     8,     0,     8,     6,     8,     8,     8,     8,     8,
       8,     8,     8,     7,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     0,     8,    45,     8,
       8,     0,     8,     8,     8,     8,     8,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     2,     8,     8,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     0,     8,     8,     8,     8,     8,     8,
      36,    39,    46,    40,    41,    42,    43,    44,     8,     8,
       8,    30,    31,    35,    33,    34,    32,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     0,     8,
       8,     8,     0,     8,     8,    56,     8,     8,     8,    53,
       8,     8,    38,     8,     8,     8,     8,     0,    14,     8,
      47,     0,     0,     0,     8,     8,     0,     8,     8,     8,
       8,    48,     0,     8,     8,     8,    14,    16,     8,     8,
       8,     8,     8,     8,     0,     8,     0,     8,     0,    51,
       8,     8,     8,     8,    16,    18,     8,     8,     8,     8,
       0,     0,     0,     8,     8,     8,     0,     8,     8,     8,
      11,     8,     8,     8,    18,    20,     8,     8,     8,     8,
       8,    12,     8,     8,     8,     0,     0,     8,     0,    52,
       0,     8,     8,     8,    20,    22,     8,     8,     8,     8,
       8,     8,    13,     0,     8,     8,     0,     8,     8,     0,
       8,     8,     0,     8,     8,    22,    24,     8,     8,     8,
       8,     8,     8,    15,     8,     0,     8,     8,     0,    62,
       8,    65,    63,    64,     8,     8,     8,     8,     8,     0,
       8,     8,     8,    24,    26,     8,     8,     8,     8,     8,
       8,    17,     8,     0,     8,     9,     0,     8,     0,     8,
       8,     8,     8,     8,     8,    29,    27,     8,     8,     8,
       8,     8,     8,     8,    19,     8,     0,     8,     8,     8,
       8,     8,     8,     8,    54,    55,     8,     0,     8,     8,
       8,     8,     8,     8,     8,    21,     8,     0,     8,     8,
       8,    10,    57,     8,    60,     0,     0,     8,     8,     0,
       0,     8,     0,     8,    23,     0,     0,     0,     0,     0,
       0,     0,     8,     8,    49,     0,     8,    25,     0,     8,
       8,     0,     8,    28,     8,     8,     8,    50,     8,     0,
      58,     8,     8,     8,     0,    61,     8,     8,     8,     0,
       8,    59
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    98,   135,     6,   189,    73,   126,   145,   164,
     182,   202,   222,   243,   244,    25,    26,    21,    27,    28,
      47,   141,    95,   155,    29,    30,    31,    32,   260,   264
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -116
static const yytype_int16 yypact[] =
{
      75,  -116,  -116,  -116,     1,    -4,  -116,  -116,    75,     4,
      75,   -16,    75,   -15,    75,   -14,    75,    75,    75,    75,
      75,    75,    -8,   567,   360,    75,    75,    75,    75,    75,
      75,    75,    75,  -116,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    42,    75,  -116,    69,
      75,    14,    75,    75,    75,    75,    75,    36,    37,    54,
      67,   101,   108,   109,   110,   111,   112,    89,    95,    75,
      75,    75,   -28,    75,    75,    75,    75,    75,    75,    75,
      75,  -116,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,   105,   122,    75,    75,    75,    75,    75,
    -116,  -116,  -116,  -116,  -116,  -116,  -116,  -116,    75,    75,
      75,  -116,  -116,  -116,  -116,  -116,  -116,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,   103,    75,
      75,    75,   132,    75,    75,  -116,    75,    75,    75,  -116,
     133,    75,  -116,    75,    75,    75,    75,   117,  -116,    75,
    -116,   114,   119,   116,    75,    75,   118,    75,    75,    75,
      75,  -116,   127,    75,    75,    75,   128,  -116,    75,    75,
      75,    75,    75,   567,    48,    75,   123,    75,   126,  -116,
      75,    75,    75,    75,   131,  -116,    75,    75,    75,    75,
     137,   138,   173,   536,    75,    75,   155,    75,    75,    75,
    -116,    75,    75,    75,   148,  -116,    75,    75,    75,    75,
      75,  -116,    75,    75,    75,   144,   145,    75,   156,  -116,
     160,    75,    75,    75,   154,  -116,    75,    75,    75,    75,
      75,    75,  -116,   157,    75,    75,    73,    75,    75,   165,
      75,    75,   418,    75,    75,   176,  -116,    75,    75,    75,
      75,    75,    75,  -116,    75,   128,    75,    75,   191,   195,
      75,  -116,  -116,  -116,    75,    75,    75,    75,    75,   182,
      75,    75,    75,   168,  -116,    75,    75,    75,    75,    75,
      75,  -116,    75,   131,    75,   482,   189,    75,   190,    75,
      75,    75,    75,    75,    75,  -116,  -116,    75,    75,    75,
      75,    75,    75,    75,  -116,    75,   148,    75,    75,    75,
      75,    75,    75,    75,  -116,  -116,    75,   194,    75,    75,
      75,    75,    75,    75,    75,  -116,    75,   154,    75,    75,
      75,  -116,  -116,    75,  -116,   184,   197,    75,    75,   204,
      30,    75,   418,    75,  -116,   418,   176,   418,   418,   418,
     418,   198,    75,    75,  -116,   203,    75,  -116,   168,    75,
      75,   205,    75,  -116,    75,    75,    75,  -116,    75,   218,
    -116,    75,    75,    75,   224,  -116,    75,    75,    75,   225,
      75,  -116
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -116,  -116,     0,    43,   241,   -27,  -116,   274,   171,   181,
     188,   151,   159,   166,   -61,  -116,  -116,     9,  -115,  -116,
     124,  -116,    86,   -50,  -116,  -116,  -116,  -116,   -98,  -116
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -9
static const yytype_int16 yytable[] =
{
       5,     7,   133,     1,     2,     3,     8,    97,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    20,    22,
      23,    33,    34,    46,    48,    49,    50,    51,    52,    53,
      54,    55,    56,   270,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    75,    72,
      20,   271,    20,    20,    20,    20,    20,   272,    81,    74,
      19,    76,    77,    78,    79,    80,   194,   195,   136,    93,
      94,    96,    82,   100,   101,   102,   103,   104,   105,   106,
     107,    83,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   261,    84,   122,    20,   124,   125,   128,
       1,     2,     3,    71,    85,   123,     1,     2,     3,   262,
     263,    86,    87,    88,    89,    90,    91,   132,   134,   137,
     138,   139,   140,   142,    92,   144,   147,   148,   120,   150,
     151,   152,   119,   153,   154,    35,   156,   149,    46,   159,
     168,   161,   170,   162,   163,   166,   167,   171,   175,   169,
     172,   197,   186,   199,   173,   174,   206,   176,   177,   178,
     179,   180,   217,   181,   184,   185,   212,   213,   187,   188,
     190,   191,   192,   193,   226,   196,   214,    94,   237,   238,
     200,   201,   204,   205,   257,   240,   207,   208,   241,   211,
     247,   256,   267,   193,   215,   216,   275,   218,   219,   220,
     287,   221,   224,   225,    -6,   298,   227,   228,   230,   232,
     233,   294,   234,   235,   236,   290,   291,   239,   352,   310,
     312,   242,   245,   246,   337,   353,   248,   249,   251,   253,
     254,   255,   356,   362,   134,   258,   359,   265,   266,   366,
     268,   269,   242,   273,   274,   365,   372,   276,   277,   279,
     281,   282,   283,   376,   284,   380,   285,   286,   309,   341,
     288,    24,   158,   198,   289,   134,   134,   292,    18,   127,
     295,   296,   297,   373,     0,   299,   300,   302,   304,   305,
     306,     0,   307,     0,   308,   188,     0,   311,     0,     0,
     314,   315,     0,   317,   318,     0,     0,     0,   320,   321,
     323,   325,   326,   327,     0,   328,   146,   329,   330,   331,
     332,   293,   334,   335,   183,     0,   336,     0,    18,   339,
     340,   342,   344,   345,   346,     0,   347,   378,   348,   349,
     350,     0,   165,   351,     0,   121,     0,   354,   355,     0,
     203,   357,   342,   358,     0,   345,    99,   347,   348,   349,
     350,     0,   360,   361,     0,     0,   363,     0,   209,   364,
     132,   338,   367,     0,    18,   369,   370,   223,   371,    -8,
       0,   258,   374,   375,     0,     0,   377,   134,   379,   231,
     381,   160,   129,   130,   131,     0,     0,     0,   229,   146,
      -8,     1,     2,     3,     0,    24,     0,     0,   143,   278,
     183,   231,   183,     0,     0,   183,     0,   368,     0,   252,
       0,   157,     0,     0,    24,   250,   165,     0,   165,     0,
       0,   270,     0,     0,     0,   231,     0,     0,   303,     0,
       0,     0,   252,     0,    24,   301,   203,   280,   203,   271,
       0,   203,     0,   203,     0,   272,     0,     0,     0,     1,
       2,     3,     0,   303,     0,   231,     0,     0,     0,   324,
       0,     0,   210,   252,     0,   322,   223,   280,   223,     0,
       0,   223,     0,   223,   223,     0,   259,   303,     0,   231,
       0,     0,   324,     0,     0,    -8,     0,   343,   252,     0,
       0,     0,     0,   280,     0,     0,     0,     0,   303,     0,
       0,   231,     0,    -8,   324,     0,     0,     0,   343,    -8,
     252,     0,     0,     1,     2,     3,   280,     0,     0,     0,
       0,   231,     0,     0,     0,     0,     0,     0,     0,     0,
     252,     0,     0,     0,     0,     0,   280,     0,     0,    35,
      69,     0,     0,    36,    37,     0,    38,    39,    40,    41,
      42,    43,    44,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   313,     0,     0,   316,     1,     2,     3,
      35,   319,     0,     0,    36,    37,     0,    38,    39,    40,
      41,    42,    43,    44,    45,   333,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   259
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-116)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,     0,   117,    31,    32,    33,    10,    35,     8,     5,
      10,    27,    12,    28,    14,    29,    16,    17,    18,    19,
      20,    21,    30,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     3,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,     4,    47,    34,    49,
      50,    21,    52,    53,    54,    55,    56,    27,    22,    50,
      17,    52,    53,    54,    55,    56,    18,    19,   118,    69,
      70,    71,    35,    73,    74,    75,    76,    77,    78,    79,
      80,    27,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    20,    27,    95,    96,    97,    98,    99,
      31,    32,    33,    34,     3,    96,    31,    32,    33,    36,
      37,     3,     3,     3,     3,     3,    27,   117,   118,   119,
     120,   121,   122,   123,    29,   125,   126,   127,     6,   129,
     130,   131,    27,   133,   134,     3,   136,    34,   138,     6,
      23,   141,    28,   143,   144,   145,   146,    28,    30,   149,
      34,    28,    24,    27,   154,   155,    25,   157,   158,   159,
     160,    34,     7,   163,   164,   165,    29,    29,   168,   169,
     170,   171,   172,   173,    26,   175,     3,   177,    34,    34,
     180,   181,   182,   183,   234,    29,   186,   187,    28,   189,
      36,    34,    27,   193,   194,   195,    20,   197,   198,   199,
       9,   201,   202,   203,     9,    37,   206,   207,   208,   209,
     210,    29,   212,   213,   214,   265,   266,   217,    34,    30,
      30,   221,   222,   223,    30,    28,   226,   227,   228,   229,
     230,   231,    28,    30,   234,   235,    38,   237,   238,    34,
     240,   241,   242,   243,   244,   360,    28,   247,   248,   249,
     250,   251,   252,    29,   254,    30,   256,   257,   285,   320,
     260,    20,   138,   177,   264,   265,   266,   267,   268,    98,
     270,   271,   272,   371,    -1,   275,   276,   277,   278,   279,
     280,    -1,   282,    -1,   284,   285,    -1,   287,    -1,    -1,
     290,   291,    -1,   293,   294,    -1,    -1,    -1,   298,   299,
     300,   301,   302,   303,    -1,   305,   125,   307,   308,   309,
     310,   268,   312,   313,   163,    -1,   316,    -1,   318,   319,
     320,   321,   322,   323,   324,    -1,   326,   377,   328,   329,
     330,    -1,   144,   333,    -1,    94,    -1,   337,   338,    -1,
     181,   341,   342,   343,    -1,   345,    72,   347,   348,   349,
     350,    -1,   352,   353,    -1,    -1,   356,    -1,   187,   359,
     360,   318,   362,    -1,   364,   365,   366,   201,   368,     9,
      -1,   371,   372,   373,    -1,    -1,   376,   377,   378,   208,
     380,   140,   108,   109,   110,    -1,    -1,    -1,   207,   208,
      30,    31,    32,    33,    -1,   154,    -1,    -1,   124,   248,
     249,   230,   251,    -1,    -1,   254,    -1,   364,    -1,   228,
      -1,   137,    -1,    -1,   173,   227,   228,    -1,   230,    -1,
      -1,     3,    -1,    -1,    -1,   254,    -1,    -1,   277,    -1,
      -1,    -1,   251,    -1,   193,   276,   277,   249,   279,    21,
      -1,   282,    -1,   284,    -1,    27,    -1,    -1,    -1,    31,
      32,    33,    -1,   302,    -1,   284,    -1,    -1,    -1,   300,
      -1,    -1,   188,   282,    -1,   299,   300,   279,   302,    -1,
      -1,   305,    -1,   307,   308,    -1,   235,   326,    -1,   308,
      -1,    -1,   323,    -1,    -1,     3,    -1,   321,   307,    -1,
      -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,   347,    -1,
      -1,   330,    -1,    21,   345,    -1,    -1,    -1,   342,    27,
     329,    -1,    -1,    31,    32,    33,   328,    -1,    -1,    -1,
      -1,   350,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     349,    -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,     3,
       4,    -1,    -1,     7,     8,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   289,    -1,    -1,   292,    31,    32,    33,
       3,   297,    -1,    -1,     7,     8,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,   311,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   371
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    32,    33,    40,    41,    43,     0,    10,    41,
       5,    41,    27,    41,    28,    41,    29,    41,    41,    42,
      41,    56,    41,    41,    43,    54,    55,    57,    58,    63,
      64,    65,    66,    41,    30,     3,     7,     8,    10,    11,
      12,    13,    14,    15,    16,    17,    41,    59,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,     4,
      41,    34,    41,    45,    56,    34,    56,    56,    56,    56,
      56,    22,    35,    27,    27,     3,     3,     3,     3,     3,
       3,    27,    29,    41,    41,    61,    41,    35,    41,    46,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,    41,    41,    41,    27,
       6,    43,    41,    56,    41,    41,    46,    47,    41,    46,
      46,    46,    41,    57,    41,    42,    62,    41,    41,    41,
      41,    60,    41,    46,    41,    47,    48,    41,    41,    34,
      41,    41,    41,    41,    41,    62,    41,    46,    59,     6,
      43,    41,    41,    41,    48,    49,    41,    41,    23,    41,
      28,    28,    34,    41,    41,    30,    41,    41,    41,    41,
      34,    41,    49,    50,    41,    41,    24,    41,    41,    44,
      41,    41,    41,    41,    18,    19,    41,    28,    61,    27,
      41,    41,    50,    51,    41,    41,    25,    41,    41,    47,
      46,    41,    29,    29,     3,    41,    41,     7,    41,    41,
      41,    41,    51,    52,    41,    41,    26,    41,    41,    48,
      41,    47,    41,    41,    41,    41,    41,    34,    34,    41,
      29,    28,    41,    52,    53,    41,    41,    36,    41,    41,
      49,    41,    48,    41,    41,    41,    34,    62,    41,    43,
      67,    20,    36,    37,    68,    41,    41,    27,    41,    41,
       3,    21,    27,    41,    41,    20,    41,    41,    50,    41,
      49,    41,    41,    41,    41,    41,    41,     9,    41,    41,
      62,    62,    41,    42,    29,    41,    41,    41,    37,    41,
      41,    51,    41,    50,    41,    41,    41,    41,    41,    44,
      30,    41,    30,    46,    41,    41,    46,    41,    41,    46,
      41,    41,    52,    41,    51,    41,    41,    41,    41,    41,
      41,    41,    41,    46,    41,    41,    41,    30,    42,    41,
      41,    53,    41,    52,    41,    41,    41,    41,    41,    41,
      41,    41,    34,    28,    41,    41,    28,    41,    41,    38,
      41,    41,    30,    41,    41,    57,    34,    41,    42,    41,
      41,    41,    28,    67,    41,    41,    29,    41,    62,    41,
      30,    41
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
/* Line 1792 of yacc.c  */
#line 33 "cparser.y"
    {printf("1\n");exit(0);}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 35 "cparser.y"
    {printf("2\n");}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 36 "cparser.y"
    {printf("3\n");}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 37 "cparser.y"
    {printf("4\n");}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 38 "cparser.y"
    {printf("5\n");}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 40 "cparser.y"
    {printf("6\n");}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 42 "cparser.y"
    {printf("7\n");}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 44 "cparser.y"
    {printf("8\n");}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 45 "cparser.y"
    {printf("9\n");}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 47 "cparser.y"
    {printf("10\n");}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 48 "cparser.y"
    {printf("11\n");}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 50 "cparser.y"
    {printf("12\n");}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 51 "cparser.y"
    {printf("13\n");}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 53 "cparser.y"
    {printf("14\n");}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 54 "cparser.y"
    {printf("15\n");}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 56 "cparser.y"
    {printf("16\n");}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 57 "cparser.y"
    {printf("17\n");}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 59 "cparser.y"
    {printf("18\n");}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 60 "cparser.y"
    {printf("19\n");}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 62 "cparser.y"
    {printf("20\n");}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 63 "cparser.y"
    {printf("21\n");}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 65 "cparser.y"
    {printf("22\n");}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 66 "cparser.y"
    {printf("23\n");}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 68 "cparser.y"
    {printf("24\n");}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 69 "cparser.y"
    {printf("25\n");}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 71 "cparser.y"
    {printf("26\n");}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 72 "cparser.y"
    {printf("27\n");}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 73 "cparser.y"
    {printf("28\n");}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 75 "cparser.y"
    {printf("29\n"); }
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 76 "cparser.y"
    {printf("30\n");}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 77 "cparser.y"
    {printf("31\n");}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 78 "cparser.y"
    {printf("32\n");}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 79 "cparser.y"
    {printf("33\n");}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 80 "cparser.y"
    {printf("34\n");}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 82 "cparser.y"
    {printf("35\n");}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 83 "cparser.y"
    {printf("36\n");}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 85 "cparser.y"
    {printf("37\n");}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 86 "cparser.y"
    {printf("38\n");}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 87 "cparser.y"
    {printf("39\n");}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 88 "cparser.y"
    {printf("40\n");}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 89 "cparser.y"
    {printf("41\n");}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 90 "cparser.y"
    {printf("42\n");}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 91 "cparser.y"
    {printf("43\n");}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 92 "cparser.y"
    {printf("44\n");}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 93 "cparser.y"
    {printf("69\n");}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 95 "cparser.y"
    {printf("70");}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 97 "cparser.y"
    {printf("45\n");}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 99 "cparser.y"
    {printf("46\n");}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 101 "cparser.y"
    {printf("47\n");}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 102 "cparser.y"
    {printf("48\n");}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 104 "cparser.y"
    {printf("49\n");}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 105 "cparser.y"
    {printf("50\n");}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 107 "cparser.y"
    {printf("51\n");}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 108 "cparser.y"
    {printf("52\n");}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 111 "cparser.y"
    {printf("53\n");}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 113 "cparser.y"
    {printf("54\n");}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 115 "cparser.y"
    {printf("55\n");}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 117 "cparser.y"
    {printf("56\n");}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 119 "cparser.y"
    {printf("57\n");}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 120 "cparser.y"
    {printf("58\n");}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 122 "cparser.y"
    {printf("59\n");}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 123 "cparser.y"
    {printf("60\n");}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 124 "cparser.y"
    {printf("61\n");}
    break;


/* Line 1792 of yacc.c  */
#line 2037 "cparser.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 126 "cparser.y"

main( int argc, char *argv[] )
{
	extern FILE *yyin;
	yyin = fopen (argv[1],"r");
	int yydebug = 1 ;
	int errors = 0;
	yyparse();
}

yyerror (char *s)
{
	printf("Error: %s\n", s);
}

int yywrap(void)
{
    return 0;
}
