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
     END = 277,
     GE = 278,
     LE = 279
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
#line 165 "cparser.tab.c"

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
#define YYLAST   414

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  47
/* YYNRULES -- Number of states.  */
#define YYNSTATES  279

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   279

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,    37,
      36,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    38,     2,     2,     2,     2,     2,     2,     2,
      32,    33,    30,    28,     2,    29,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,    39,
      26,    23,    24,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,    35,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    25,    27
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    20,    22,    24,    26,    28,    32,    33,
      41,    47,    53,    59,    65,    71,    77,    82,    90,    96,
     102,   108,   114,   120,   126,   130,   138,   146,   154,   162,
     178,   192,   196,   204,   208,   218,   228,   230,   246,   266,
     290,   306,   318,   320,   326,   334,   336,   340
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      42,     0,    -1,    43,    10,    43,     5,    43,    32,    43,
      33,    43,    34,    43,    44,    43,    35,    43,    22,    -1,
      36,    -1,    37,    -1,    38,    -1,    45,    -1,    43,    49,
      43,    -1,    -1,    43,    23,    43,    61,    43,    39,    43,
      -1,    43,    10,    43,     3,    43,    -1,    43,    11,    43,
       3,    43,    -1,    43,    15,    43,     3,    43,    -1,    43,
      13,    43,     3,    43,    -1,    43,    14,    43,     3,    43,
      -1,    43,    12,    43,     3,    43,    -1,    47,    43,    46,
      43,    -1,    43,    47,    43,    39,    43,    49,    43,    -1,
      43,    48,    43,    49,    43,    -1,    43,    51,    43,    49,
      43,    -1,    43,    56,    43,    49,    43,    -1,    43,    57,
      43,    49,    43,    -1,    43,    58,    43,    49,    43,    -1,
      43,    59,    43,    49,    43,    -1,    43,    45,    43,    -1,
      43,    50,    43,    39,    43,    49,    43,    -1,    43,    61,
      43,    39,    43,    49,    43,    -1,    43,     3,    43,    23,
      43,    61,    43,    -1,    43,    52,    43,    54,    43,    53,
      43,    -1,    43,     4,    43,    32,    43,    61,    43,    33,
      43,    34,    43,    44,    43,    35,    43,    -1,    43,     6,
      43,    32,    43,    33,    43,    34,    43,    44,    43,    35,
      43,    -1,    43,    45,    43,    -1,    43,     6,    43,    52,
      43,    54,    43,    -1,    43,    45,    43,    -1,    43,    55,
      43,    18,    43,    39,    43,    55,    43,    -1,    43,    55,
      43,    19,    43,    39,    43,    55,    43,    -1,    44,    -1,
      43,     7,    43,    32,    43,    61,    43,    33,    43,    34,
      43,    55,    43,    35,    43,    -1,    43,    17,    43,    34,
      43,    55,    43,    35,    43,     7,    43,    32,    43,    61,
      43,    33,    43,    39,    43,    -1,    43,    16,    43,    32,
      43,    50,    43,    39,    43,    61,    43,    39,    43,    50,
      43,    33,    43,    34,    43,    55,    43,    35,    43,    -1,
      43,     8,    43,    32,    43,    61,    43,    33,    43,    34,
      43,    60,    43,    35,    43,    -1,    43,     9,    43,    61,
      43,    40,    43,    44,    43,    60,    43,    -1,    45,    -1,
      43,    63,    43,    62,    43,    -1,    43,    29,    43,    63,
      43,    62,    43,    -1,    45,    -1,    43,    21,    43,    -1,
      43,    32,    43,    61,    43,    33,    43,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    36,    36,    38,    39,    40,    41,    43,    45,    47,
      51,    52,    53,    54,    55,    56,    58,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    71,    73,    75,
      77,    78,    80,    81,    83,    84,    85,    87,    89,    91,
      93,    95,    96,    99,   101,   102,   104,   105
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "IF", "TMAIN", "ELSE", "WHILE",
  "SWITCH", "CASE", "INT", "FLOAT", "DOUBLE", "LONG", "SHORT", "CHAR",
  "FOR", "DO", "BREAK", "CONTINUE", "EQUALSCHECK", "NUMBER", "END", "'='",
  "'>'", "GE", "'<'", "LE", "'+'", "'-'", "'*'", "'/'", "'('", "')'",
  "'{'", "'}'", "'\\n'", "'\\t'", "' '", "';'", "':'", "$accept",
  "mainstmt", "ws", "code", "epsilon", "estmt", "declaration",
  "initialisation", "stmts", "assignment", "ifelsestmt", "ifstmt",
  "elsestmt", "elseifstmt", "loopcode", "whilestmt", "dowhilestmt",
  "forstmt", "switchstmt", "casestmt", "expr", "exp2", "sum1", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,    61,    62,   278,    60,   279,    43,    45,
      42,    47,    40,    41,   123,   125,    10,     9,    32,    59,
      58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    43,    43,    43,    43,    44,    45,    46,
      47,    47,    47,    47,    47,    47,    48,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    49,    50,    51,    52,
      53,    53,    54,    54,    55,    55,    55,    56,    57,    58,
      59,    60,    60,    61,    62,    62,    63,    63
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,    16,     1,     1,     1,     1,     3,     0,     7,
       5,     5,     5,     5,     5,     5,     4,     7,     5,     5,
       5,     5,     5,     5,     3,     7,     7,     7,     7,    15,
      13,     3,     7,     3,     9,     9,     1,    15,    19,    23,
      15,    11,     1,     5,     7,     1,     3,     7
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     3,     4,     5,     0,     0,     6,     1,     8,     0,
       8,     0,     8,     0,     8,     0,     8,     8,     8,     8,
       8,     8,     0,     8,     6,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     7,     8,     8,     8,     8,     8,
       8,     8,     8,     8,     8,     8,     8,     0,     8,     8,
      24,     8,     8,     0,     8,     8,     8,     8,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     8,     8,     8,     8,     8,     0,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     2,     8,
       8,     8,     8,     8,     8,     8,     8,     8,     8,     8,
       0,    46,     8,     8,     8,     0,    45,     8,     8,     8,
      16,    18,     8,    19,    20,    21,    22,    23,     8,     8,
       8,     8,    10,    11,    15,    13,    14,    12,     8,     8,
       8,     8,     8,     8,     8,     8,     8,    43,     8,     8,
       8,     8,     8,     8,     8,     0,     8,     8,    36,     8,
       8,     0,     0,     8,    33,     8,     8,     8,    17,     8,
      25,    26,    27,     0,     0,     0,     8,     8,     0,     8,
       8,     0,     8,     8,     8,    28,     8,     0,     8,     8,
       8,     8,     0,     8,     0,    47,     8,     0,    31,     8,
       8,     0,     0,     8,     8,     8,     8,     0,     8,     8,
       8,     8,     9,     8,     8,     8,     0,     0,     8,     0,
      32,     0,    44,     8,     8,     0,     8,     8,     0,     8,
       8,     8,     0,    42,     8,     8,     8,     8,     8,     8,
       0,     0,     8,     0,     8,     8,     8,     8,     8,     8,
       8,     8,     8,     8,    34,    35,     8,     0,     8,    37,
       8,    40,     0,     0,     8,     8,     0,     8,     8,    29,
       0,     8,     0,     0,     8,     8,     8,     8,    30,     8,
       8,    38,     8,     8,     8,     0,    41,     8,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,    20,   148,     6,    79,    25,    26,    21,    27,
      28,    48,   156,   104,   167,    29,    30,    31,    32,   224,
      33,   107,    49
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -127
static const yytype_int16 yypact[] =
{
      22,  -127,  -127,  -127,     9,     3,  -127,  -127,    22,    10,
      22,   -14,    22,     1,    22,    31,    22,    22,    22,    22,
      22,    22,    15,   362,    79,    22,    22,    22,    22,    22,
      22,    22,    22,    22,  -127,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    22,   150,    22,    22,
    -127,    16,    22,    17,    22,    22,    22,    22,    22,    25,
      46,    43,    37,    38,    68,    75,    97,    98,   100,   102,
      74,    76,    22,    22,    22,    22,    22,    22,    88,    22,
      22,    22,    22,    22,    22,    22,    22,    22,  -127,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      80,  -127,    22,   107,    22,    89,    93,    22,    22,    22,
    -127,  -127,    22,  -127,  -127,  -127,  -127,  -127,    22,    22,
      22,    22,  -127,  -127,  -127,  -127,  -127,  -127,    22,    22,
      22,    22,    22,    22,    22,    22,    22,  -127,    22,    22,
      22,    22,    22,    22,    22,   120,    22,    22,  -127,    22,
      22,   -10,    91,    22,  -127,   119,    22,    22,  -127,    22,
    -127,  -127,  -127,    94,   104,    87,    22,    22,   110,    22,
      22,   144,    22,    22,    22,  -127,    22,   112,    22,    22,
      22,   362,    44,    22,   122,  -127,    22,   126,  -127,    22,
      22,   118,   127,    22,   330,    22,    22,   153,    22,    22,
      22,    22,  -127,    22,    22,    22,   124,   125,    22,   134,
    -127,   151,  -127,    22,    22,   136,    22,    22,   145,    22,
      22,    22,   176,   178,    22,    22,    22,    22,    22,    22,
     154,   156,    22,   157,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,  -127,  -127,    22,   162,    22,  -127,
      22,  -127,   169,   173,    22,    22,   167,    22,    22,  -127,
     174,    22,   177,   171,    22,    22,    22,    22,  -127,    22,
      22,  -127,    22,    22,    22,   180,  -127,    22,  -127
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,     0,    30,   142,  -127,  -127,  -127,   -51,  -126,
    -127,    59,  -127,    45,    36,  -127,  -127,  -127,  -127,   -50,
     166,    34,    73
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -9
static const yytype_int16 yytable[] =
{
       5,    80,   146,    82,    83,    84,    85,    86,     9,     7,
      11,    73,    13,     8,    15,    10,    17,    18,    12,    22,
      23,    34,    74,    47,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    14,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    19,    75,    76,
      35,    78,     1,     2,     3,    77,    81,   138,     1,     2,
       3,   140,   195,   196,    87,    16,    89,   141,    88,    90,
      91,    92,   100,   101,   102,   103,   105,   108,    93,   110,
     111,   112,   113,   114,   115,   116,   117,   118,    -8,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
      94,    95,   131,    96,   135,    97,    98,   137,   243,   139,
      99,   109,   130,   133,    -8,     1,     2,     3,   136,   131,
     131,   131,    -6,    36,   170,   173,   180,   178,   145,   147,
     150,   151,   152,   153,   154,   155,   157,   179,   158,   131,
     160,   161,   162,   163,   164,   183,   165,   166,    72,   168,
     131,   190,   203,   171,    72,   198,   175,   151,   200,   177,
     208,   204,    24,   216,   217,   149,   181,   182,   219,   184,
     185,    73,   186,   187,   188,   225,   189,   228,   191,   192,
     193,   194,    74,   197,   220,   232,   103,    -6,   239,   105,
     202,   240,   242,   131,   194,   206,   207,   254,   209,   210,
     211,   212,   257,   213,   214,   215,   258,   261,   218,   264,
     267,   266,   172,   147,   222,   277,   226,   227,   106,   229,
     230,   231,   274,   201,   233,   234,   147,   147,   237,    18,
     176,   199,   241,     0,   145,   244,   245,   131,   247,   248,
     249,   131,   251,   252,     0,   134,   253,     0,    18,   221,
     256,     0,     0,     0,   259,   260,     0,   262,   263,   238,
       0,   265,   235,   236,   268,    18,   270,   271,   132,   272,
     147,     0,   222,   275,   276,     0,     0,   278,   255,     0,
       0,     0,     0,     0,     0,   142,   143,   144,     0,     0,
       0,     0,     0,     0,     0,   269,     0,   174,     0,     0,
       0,     0,     0,     0,     0,   159,   273,     0,    24,     0,
       0,     0,     0,     0,     0,     0,   169,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,   106,     0,    36,    72,     0,    24,    37,    38,     0,
      39,    40,    41,    42,    43,    44,    45,    46,     0,     0,
       0,    73,     0,     0,     0,     0,   223,     0,     0,   205,
       0,     0,    74,     0,     0,    36,     1,     2,     3,    37,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     0,     0,   246,     0,     0,     0,   250,     0,     0,
       0,     0,     0,     0,   223
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-127)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    52,   128,    54,    55,    56,    57,    58,     8,     0,
      10,    21,    12,    10,    14,     5,    16,    17,    32,    19,
      20,    21,    32,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    33,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    17,    48,    49,
      35,    51,    36,    37,    38,    39,    39,   108,    36,    37,
      38,   112,    18,    19,    39,    34,    23,   118,    22,    32,
      32,     3,    72,    73,    74,    75,    76,    77,     3,    79,
      80,    81,    82,    83,    84,    85,    86,    87,     9,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
       3,     3,   102,     3,   104,     3,    32,   107,   234,   109,
      34,    23,    32,     6,    35,    36,    37,    38,    29,   119,
     120,   121,    29,     3,    33,     6,    39,    33,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    33,   138,   139,
     140,   141,   142,   143,   144,    35,   146,   147,     4,   149,
     150,    39,    34,   153,     4,    33,   156,   157,    32,   159,
       7,    34,    20,    39,    39,   129,   166,   167,    34,   169,
     170,    21,   172,   173,   174,    39,   176,    32,   178,   179,
     180,   181,    32,   183,    33,     9,   186,     9,    34,   189,
     190,    35,    35,   193,   194,   195,   196,    35,   198,   199,
     200,   201,    33,   203,   204,   205,    33,    40,   208,    35,
      39,    34,   153,   213,   214,    35,   216,   217,    76,   219,
     220,   221,   272,   189,   224,   225,   226,   227,   228,   229,
     157,   186,   232,    -1,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,    -1,   103,   246,    -1,   248,   213,
     250,    -1,    -1,    -1,   254,   255,    -1,   257,   258,   229,
      -1,   261,   226,   227,   264,   265,   266,   267,   102,   269,
     270,    -1,   272,   273,   274,    -1,    -1,   277,   248,    -1,
      -1,    -1,    -1,    -1,    -1,   119,   120,   121,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   265,    -1,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   139,   270,    -1,   166,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,
      -1,    -1,    -1,   181,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   189,    -1,     3,     4,    -1,   194,     7,     8,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,   214,    -1,    -1,   193,
      -1,    -1,    32,    -1,    -1,     3,    36,    37,    38,     7,
       8,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    -1,    -1,   237,    -1,    -1,    -1,   241,    -1,    -1,
      -1,    -1,    -1,    -1,   272
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,    37,    38,    42,    43,    45,     0,    10,    43,
       5,    43,    32,    43,    33,    43,    34,    43,    43,    44,
      43,    49,    43,    43,    45,    47,    48,    50,    51,    56,
      57,    58,    59,    61,    43,    35,     3,     7,     8,    10,
      11,    12,    13,    14,    15,    16,    17,    43,    52,    63,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,     4,    21,    32,    43,    43,    39,    43,    46,
      49,    39,    49,    49,    49,    49,    49,    39,    22,    23,
      32,    32,     3,     3,     3,     3,     3,     3,    32,    34,
      43,    43,    43,    43,    54,    43,    45,    62,    43,    23,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    43,    43,    43,    43,
      32,    43,    61,     6,    45,    43,    29,    43,    49,    43,
      49,    49,    61,    61,    61,    43,    50,    43,    44,    55,
      43,    43,    43,    43,    43,    43,    53,    43,    43,    61,
      43,    43,    43,    43,    43,    43,    43,    55,    43,    61,
      33,    43,    52,     6,    45,    43,    63,    43,    33,    33,
      39,    43,    43,    35,    43,    43,    43,    43,    43,    43,
      39,    43,    43,    43,    43,    18,    19,    43,    33,    54,
      32,    62,    43,    34,    34,    61,    43,    43,     7,    43,
      43,    43,    43,    43,    43,    43,    39,    39,    43,    34,
      33,    55,    43,    45,    60,    39,    43,    43,    32,    43,
      43,    43,     9,    43,    43,    55,    55,    43,    44,    34,
      35,    43,    35,    50,    43,    43,    61,    43,    43,    43,
      61,    43,    43,    43,    35,    44,    43,    33,    33,    43,
      43,    40,    43,    43,    35,    43,    34,    39,    43,    44,
      43,    43,    43,    55,    60,    43,    43,    35,    43
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
#line 36 "cparser.y"
    {printf("1\n");exit(0);}
    break;

  case 3:
/* Line 1792 of yacc.c  */
#line 38 "cparser.y"
    {printf("2\n");}
    break;

  case 4:
/* Line 1792 of yacc.c  */
#line 39 "cparser.y"
    {printf("3\n");}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 40 "cparser.y"
    {printf("4\n");}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 41 "cparser.y"
    {printf("5\n");}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 43 "cparser.y"
    {printf("6\n");}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 45 "cparser.y"
    {printf("7\n");}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 47 "cparser.y"
    {printf("10\n");}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 51 "cparser.y"
    {printf("29\n"); }
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 52 "cparser.y"
    {printf("30\n");}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 53 "cparser.y"
    {printf("31\n");}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 54 "cparser.y"
    {printf("32\n");}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 55 "cparser.y"
    {printf("33\n");}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 56 "cparser.y"
    {printf("34\n");}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 58 "cparser.y"
    {printf("35\n");}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 60 "cparser.y"
    {printf("37\n");}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 61 "cparser.y"
    {printf("38\n");}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 62 "cparser.y"
    {printf("39\n");}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 63 "cparser.y"
    {printf("40\n");}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 64 "cparser.y"
    {printf("41\n");}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 65 "cparser.y"
    {printf("42\n");}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 66 "cparser.y"
    {printf("43\n");}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 67 "cparser.y"
    {printf("44\n");}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 68 "cparser.y"
    {printf("72\n");}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 69 "cparser.y"
    {printf("76\n");}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 71 "cparser.y"
    {printf("73\n");}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 73 "cparser.y"
    {printf("45\n");}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 75 "cparser.y"
    {printf("46\n");}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 77 "cparser.y"
    {printf("47\n");}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 78 "cparser.y"
    {printf("48\n");}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 80 "cparser.y"
    {printf("49\n");}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 81 "cparser.y"
    {printf("50\n");}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 83 "cparser.y"
    {printf("51\n");}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 84 "cparser.y"
    {printf("52\n");}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 87 "cparser.y"
    {printf("53\n");}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 89 "cparser.y"
    {printf("54\n");}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 91 "cparser.y"
    {printf("55\n");}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 93 "cparser.y"
    {printf("56\n");}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 95 "cparser.y"
    {printf("57\n");}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 96 "cparser.y"
    {printf("58\n");}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 99 "cparser.y"
    {printf("85\n");}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 101 "cparser.y"
    {printf("86\n");}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 102 "cparser.y"
    {printf("87\n");}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 104 "cparser.y"
    {printf("85\n");}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 105 "cparser.y"
    {printf("89\n");}
    break;


/* Line 1792 of yacc.c  */
#line 1840 "cparser.tab.c"
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
#line 130 "cparser.y"

main( int argc, char *argv[] )
{
	extern FILE *yyin;
	yyin = fopen (argv[1],"r");
	//int yydebug = 1 ;
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
