
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.y"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "y.tab.h"
struct tokenList
{
	char *token,type[20],line[100];
	struct tokenList *next;
};
typedef struct tokenList tokenList;

extern FILE *yyin;
extern int lineCount;
extern char *tablePtr;
extern int nestedCommentCount;
extern int commentFlag;

char typeBuffer=' ';

tokenList *symbolPtr = NULL;
tokenList *constantPtr = NULL;
tokenList *parsedPtr=NULL;

char *sourceCode=NULL;
int errorFlag=0;
void makeList(char *,char,int);


/* Line 189 of yacc.c  */
#line 103 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     AUTO = 258,
     BREAK = 259,
     CASE = 260,
     CHAR = 261,
     CONST = 262,
     CONTINUE = 263,
     DEFAULT = 264,
     DO = 265,
     DOUBLE = 266,
     ELSE = 267,
     ENUM = 268,
     EXTERN = 269,
     FLOAT = 270,
     FOR = 271,
     GOTO = 272,
     IF = 273,
     INT = 274,
     LONG = 275,
     REGISTER = 276,
     RETURN = 277,
     SHORT = 278,
     SIGNED = 279,
     SIZEOF = 280,
     STATIC = 281,
     STRUCT = 282,
     SWITCH = 283,
     TYPEDEF = 284,
     UNION = 285,
     UNSIGNED = 286,
     VOID = 287,
     VOLATILE = 288,
     WHILE = 289,
     IDENTIFIER = 290,
     CONSTANT = 291,
     STRING_LITERAL = 292,
     ELLIPSIS = 293,
     PTR_OP = 294,
     INC_OP = 295,
     DEC_OP = 296,
     LEFT_OP = 297,
     RIGHT_OP = 298,
     LE_OP = 299,
     GE_OP = 300,
     EQ_OP = 301,
     NE_OP = 302,
     AND_OP = 303,
     OR_OP = 304,
     MUL_ASSIGN = 305,
     DIV_ASSIGN = 306,
     MOD_ASSIGN = 307,
     ADD_ASSIGN = 308,
     SUB_ASSIGN = 309,
     LEFT_ASSIGN = 310,
     RIGHT_ASSIGN = 311,
     AND_ASSIGN = 312,
     XOR_ASSIGN = 313,
     OR_ASSIGN = 314,
     TYPE_NAME = 315,
     LOWER_THAN_ELSE = 316
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 206 "parser.tab.c"

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
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1585

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  213
/* YYNRULES -- Number of states.  */
#define YYNSTATES  351

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   316

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,     2,     2,     2,    75,    68,     2,
      62,    63,    69,    70,    67,    71,    66,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    81,    83,
      76,    82,    77,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    64,     2,    65,    78,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    79,    85,    72,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    24,
      29,    33,    37,    40,    43,    45,    49,    51,    54,    57,
      60,    63,    64,    70,    72,    74,    76,    78,    80,    82,
      84,    89,    91,    95,    99,   103,   105,   109,   113,   115,
     119,   123,   125,   129,   133,   137,   141,   143,   147,   151,
     153,   157,   159,   163,   165,   169,   171,   175,   177,   181,
     183,   189,   191,   195,   197,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   219,   223,   225,   228,   232,
     234,   237,   239,   242,   244,   247,   249,   253,   255,   259,
     261,   263,   265,   267,   269,   271,   273,   275,   277,   279,
     281,   283,   285,   287,   289,   291,   293,   299,   304,   307,
     309,   311,   313,   316,   320,   323,   325,   328,   330,   332,
     336,   338,   341,   345,   350,   356,   359,   361,   365,   367,
     371,   373,   375,   378,   380,   382,   386,   391,   395,   400,
     405,   409,   411,   414,   417,   421,   423,   426,   428,   432,
     434,   438,   441,   444,   446,   448,   452,   454,   457,   459,
     461,   464,   468,   471,   475,   479,   484,   487,   491,   495,
     500,   502,   506,   511,   513,   517,   519,   521,   523,   525,
     527,   529,   533,   538,   542,   545,   549,   553,   558,   560,
     563,   565,   568,   570,   573,   579,   587,   593,   599,   607,
     614,   622,   626,   629,   632,   635,   639,   641,   644,   646,
     648,   653,   657,   661
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     148,     0,    -1,    35,    -1,    36,    -1,    37,    -1,    62,
     107,    63,    -1,    87,    -1,    88,    64,   107,    65,    -1,
      88,    62,    63,    -1,    88,    62,    89,    63,    -1,    88,
      66,    35,    -1,    88,    39,    35,    -1,    88,    40,    -1,
      88,    41,    -1,   105,    -1,    89,    67,   105,    -1,    88,
      -1,    40,    90,    -1,    41,    90,    -1,    92,    93,    -1,
      25,    90,    -1,    -1,    25,    62,   134,    63,    91,    -1,
      68,    -1,    69,    -1,    70,    -1,    71,    -1,    72,    -1,
      73,    -1,    90,    -1,    62,   134,    63,    93,    -1,    93,
      -1,    94,    69,    93,    -1,    94,    74,    93,    -1,    94,
      75,    93,    -1,    94,    -1,    95,    70,    94,    -1,    95,
      71,    94,    -1,    95,    -1,    96,    42,    95,    -1,    96,
      43,    95,    -1,    96,    -1,    97,    76,    96,    -1,    97,
      77,    96,    -1,    97,    44,    96,    -1,    97,    45,    96,
      -1,    97,    -1,    98,    46,    97,    -1,    98,    47,    97,
      -1,    98,    -1,    99,    68,    98,    -1,    99,    -1,   100,
      78,    99,    -1,   100,    -1,   101,    79,   100,    -1,   101,
      -1,   102,    48,   101,    -1,   102,    -1,   103,    49,   102,
      -1,   103,    -1,   103,    80,   107,    81,   104,    -1,   104,
      -1,    90,   106,   105,    -1,    82,    -1,    50,    -1,    51,
      -1,    52,    -1,    53,    -1,    54,    -1,    55,    -1,    56,
      -1,    57,    -1,    58,    -1,    59,    -1,   105,    -1,   107,
      67,   105,    -1,   104,    -1,   110,    83,    -1,   110,   111,
      83,    -1,   113,    -1,   113,   110,    -1,   114,    -1,   114,
     110,    -1,   125,    -1,   125,   110,    -1,   112,    -1,   111,
      67,   112,    -1,   126,    -1,   126,    82,   137,    -1,    29,
      -1,    14,    -1,    26,    -1,     3,    -1,    21,    -1,    32,
      -1,     6,    -1,    23,    -1,    19,    -1,    20,    -1,    15,
      -1,    11,    -1,    24,    -1,    31,    -1,   115,    -1,   122,
      -1,    60,    -1,   116,    35,    84,   117,    85,    -1,   116,
      84,   117,    85,    -1,   116,    35,    -1,    27,    -1,    30,
      -1,   118,    -1,   117,   118,    -1,   119,   120,    83,    -1,
     114,   119,    -1,   114,    -1,   125,   119,    -1,   125,    -1,
     121,    -1,   120,    67,   121,    -1,   126,    -1,    81,   108,
      -1,   126,    81,   108,    -1,    13,    84,   123,    85,    -1,
      13,    35,    84,   123,    85,    -1,    13,    35,    -1,   124,
      -1,   123,    67,   124,    -1,    35,    -1,    35,    82,   108,
      -1,     7,    -1,    33,    -1,   128,   127,    -1,   127,    -1,
      35,    -1,    62,   126,    63,    -1,   127,    64,   108,    65,
      -1,   127,    64,    65,    -1,   127,    62,   130,    63,    -1,
     127,    62,   133,    63,    -1,   127,    62,    63,    -1,    69,
      -1,    69,   129,    -1,    69,   128,    -1,    69,   129,   128,
      -1,   125,    -1,   129,   125,    -1,   131,    -1,   131,    67,
      38,    -1,   132,    -1,   131,    67,   132,    -1,   110,   126,
      -1,   110,   135,    -1,   110,    -1,    35,    -1,   133,    67,
      35,    -1,   119,    -1,   119,   135,    -1,   128,    -1,   136,
      -1,   128,   136,    -1,    62,   135,    63,    -1,    64,    65,
      -1,    64,   108,    65,    -1,   136,    64,    65,    -1,   136,
      64,   108,    65,    -1,    62,    63,    -1,    62,   130,    63,
      -1,   136,    62,    63,    -1,   136,    62,   130,    63,    -1,
     105,    -1,    84,   138,    85,    -1,    84,   138,    67,    85,
      -1,   137,    -1,   138,    67,   137,    -1,   140,    -1,   141,
      -1,   144,    -1,   145,    -1,   146,    -1,   147,    -1,    35,
      81,   139,    -1,     5,   108,    81,   139,    -1,     9,    81,
     139,    -1,    84,    85,    -1,    84,   143,    85,    -1,    84,
     142,    85,    -1,    84,   142,   143,    85,    -1,   109,    -1,
     142,   109,    -1,   139,    -1,   143,   139,    -1,    83,    -1,
     107,    83,    -1,    18,    62,   107,    63,   139,    -1,    18,
      62,   107,    63,   139,    12,   139,    -1,    28,    62,   107,
      63,   139,    -1,    34,    62,   107,    63,   139,    -1,    10,
     139,    34,    62,   107,    63,    83,    -1,    16,    62,   144,
     144,    63,   139,    -1,    16,    62,   144,   144,   107,    63,
     139,    -1,    17,    35,    83,    -1,     8,    83,    -1,     4,
      83,    -1,    22,    83,    -1,    22,   107,    83,    -1,   149,
      -1,   148,   149,    -1,   150,    -1,   109,    -1,   110,   126,
     142,   141,    -1,   110,   126,   141,    -1,   126,   142,   141,
      -1,   126,   141,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    56,    56,    57,    58,    59,    63,    64,    65,    66,
      67,    68,    69,    70,    74,    75,    79,    80,    81,    82,
      83,    84,    84,    89,    90,    91,    92,    93,    94,    98,
      99,   103,   104,   105,   106,   110,   111,   112,   116,   117,
     118,   122,   123,   124,   125,   126,   130,   131,   132,   136,
     137,   141,   142,   146,   147,   151,   152,   156,   157,   161,
     162,   166,   167,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   185,   186,   190,   194,   195,   199,
     200,   201,   202,   203,   204,   208,   209,   213,   214,   218,
     219,   220,   221,   222,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   241,   242,   243,   247,
     248,   252,   253,   257,   261,   262,   263,   264,   268,   269,
     273,   274,   275,   279,   280,   281,   285,   286,   290,   291,
     295,   296,   300,   301,   305,   306,   307,   308,   309,   310,
     311,   315,   316,   317,   318,   322,   323,   328,   329,   333,
     334,   338,   339,   340,   344,   345,   349,   350,   354,   355,
     356,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     372,   373,   374,   378,   379,   383,   384,   385,   386,   387,
     388,   392,   393,   394,   398,   399,   400,   401,   405,   406,
     410,   411,   415,   416,   420,   422,   425,   430,   432,   435,
     437,   442,   443,   444,   445,   446,   450,   451,   455,   456,
     460,   461,   462,   463
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO", "BREAK", "CASE", "CHAR", "CONST",
  "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "ENUM", "EXTERN", "FLOAT",
  "FOR", "GOTO", "IF", "INT", "LONG", "REGISTER", "RETURN", "SHORT",
  "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION",
  "UNSIGNED", "VOID", "VOLATILE", "WHILE", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "ELLIPSIS", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "LOWER_THAN_ELSE", "'('", "')'", "'['", "']'", "'.'", "','",
  "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'", "'<'", "'>'",
  "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "$@1", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,    40,    41,    91,    93,    46,    44,    38,    42,
      43,    45,   126,    33,    47,    37,    60,    62,    94,   124,
      63,    58,    61,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    86,    87,    87,    87,    87,    88,    88,    88,    88,
      88,    88,    88,    88,    89,    89,    90,    90,    90,    90,
      90,    91,    90,    92,    92,    92,    92,    92,    92,    93,
      93,    94,    94,    94,    94,    95,    95,    95,    96,    96,
      96,    97,    97,    97,    97,    97,    98,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   107,   107,   108,   109,   109,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   113,   113,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   115,   115,   115,   116,
     116,   117,   117,   118,   119,   119,   119,   119,   120,   120,
     121,   121,   121,   122,   122,   122,   123,   123,   124,   124,
     125,   125,   126,   126,   127,   127,   127,   127,   127,   127,
     127,   128,   128,   128,   128,   129,   129,   130,   130,   131,
     131,   132,   132,   132,   133,   133,   134,   134,   135,   135,
     135,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     137,   137,   137,   138,   138,   139,   139,   139,   139,   139,
     139,   140,   140,   140,   141,   141,   141,   141,   142,   142,
     143,   143,   144,   144,   145,   145,   145,   146,   146,   146,
     146,   147,   147,   147,   147,   147,   148,   148,   149,   149,
     150,   150,   150,   150
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     0,     5,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     2,     3,     1,
       2,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     2,     3,     4,     5,     2,     1,     3,     1,     3,
       1,     1,     2,     1,     1,     3,     4,     3,     4,     4,
       3,     1,     2,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     3,     4,     1,     2,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     3,     2,     2,     2,     3,     1,     2,     1,     1,
       4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    92,    95,   130,   100,     0,    90,    99,    97,    98,
      93,    96,   101,    91,   109,    89,   110,   102,    94,   131,
     134,   105,     0,   141,   209,     0,    79,    81,   103,     0,
     104,    83,     0,   133,     0,     0,   206,   208,   125,     0,
       0,   145,   143,   142,    77,     0,    85,    87,    80,    82,
     108,     0,    84,     0,   188,     0,   213,     0,     0,     0,
     132,     1,   207,     0,   128,     0,   126,   135,   146,   144,
       0,    78,     0,   211,     0,     0,   115,     0,   111,     0,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     4,     0,     0,     0,    23,
      24,    25,    26,    27,    28,   192,   184,     6,    16,    29,
       0,    31,    35,    38,    41,    46,    49,    51,    53,    55,
      57,    59,    61,    74,     0,   190,   175,   176,     0,     0,
     177,   178,   179,   180,    87,   189,   212,   154,   140,   153,
       0,   147,   149,     0,     2,   137,    29,    76,     0,     0,
       0,     0,   123,    86,     0,   170,    88,   210,     0,   114,
     107,   112,     0,     0,   118,   120,   116,   203,     0,   202,
       0,     0,     0,     0,     0,   204,     0,     0,    20,     0,
       0,     0,     0,    17,    18,     0,   156,     0,     0,    12,
      13,     0,     0,     0,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    63,     0,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   193,   186,     0,
     185,   191,     0,     0,   151,   158,   152,   159,   138,     0,
     139,     0,   136,   124,   129,   127,   173,     0,   106,   121,
       0,   113,     0,     0,   183,     0,     0,   201,     0,   205,
       0,     0,     0,   181,     5,     0,   158,   157,     0,    11,
       8,     0,    14,     0,    10,    62,    32,    33,    34,    36,
      37,    39,    40,    44,    45,    42,    43,    47,    48,    50,
      52,    54,    56,    58,     0,    75,   187,   166,     0,     0,
     162,     0,   160,     0,     0,   148,   150,   155,     0,   171,
     119,   122,   182,     0,     0,     0,    21,     0,     0,    30,
       9,     0,     7,     0,   167,   161,   163,   168,     0,   164,
       0,   172,   174,     0,     0,     0,   194,    22,   196,   197,
      15,    60,   169,   165,     0,   199,     0,     0,   198,   200,
     195
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   107,   108,   271,   109,   337,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     205,   124,   148,    54,    55,    45,    46,    26,    27,    28,
      29,    77,    78,    79,   163,   164,    30,    65,    66,    31,
      32,    33,    34,    43,   298,   141,   142,   143,   187,   299,
     237,   156,   247,   125,   126,   127,    57,   129,   130,   131,
     132,   133,    35,    36,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -165
static const yytype_int16 yypact[] =
{
    1052,  -165,  -165,  -165,  -165,   -27,  -165,  -165,  -165,  -165,
    -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,
    -165,  -165,    13,    10,  -165,   -13,  1311,  1311,  -165,   -22,
    -165,  1311,   631,    55,    15,   805,  -165,  -165,   -66,     6,
     -19,  -165,  -165,    10,  -165,    20,  -165,   599,  -165,  -165,
      -4,  1342,  -165,   301,  -165,   -13,  -165,   631,  1096,  1343,
      55,  -165,  -165,     6,    -9,   -30,  -165,  -165,  -165,  -165,
      13,  -165,  1160,  -165,   631,  1342,  1342,   736,  -165,    -3,
    1342,    47,  1460,    58,    18,   662,   107,   140,   118,  1179,
    1499,   121,   129,   113,  -165,  -165,  1512,  1512,   853,  -165,
    -165,  -165,  -165,  -165,  -165,  -165,  -165,  -165,   146,   293,
    1460,  -165,    74,    75,   178,    62,   187,   120,   131,   152,
     193,   -26,  -165,  -165,    44,  -165,  -165,  -165,   384,   454,
    -165,  -165,  -165,  -165,   161,  -165,  -165,  -165,  -165,     3,
     186,   188,  -165,    69,  -165,  -165,  -165,  -165,   194,    16,
    1460,     6,  -165,  -165,  1160,  -165,  -165,  -165,   767,  -165,
    -165,  -165,  1460,    45,  -165,   172,  -165,  -165,   177,  -165,
     662,   226,  1202,   179,  1460,  -165,    51,   853,  -165,  1460,
    1460,   662,  1460,  -165,  -165,   114,    78,   198,   228,  -165,
    -165,  1356,  1460,   229,  -165,  -165,  -165,  -165,  -165,  -165,
    -165,  -165,  -165,  -165,  -165,  1460,  -165,  1460,  1460,  1460,
    1460,  1460,  1460,  1460,  1460,  1460,  1460,  1460,  1460,  1460,
    1460,  1460,  1460,  1460,  1460,  1460,  1460,  -165,  -165,   524,
    -165,  -165,   924,  1395,  -165,    12,  -165,   155,  -165,  1273,
    -165,   232,  -165,  -165,  -165,  -165,  -165,    31,  -165,  -165,
      -3,  -165,  1460,   662,  -165,   206,  1202,  -165,   115,  -165,
     207,   126,   133,  -165,  -165,   988,   165,  -165,  1460,  -165,
    -165,   134,  -165,   163,  -165,  -165,  -165,  -165,  -165,    74,
      74,    75,    75,   178,   178,   178,   178,    62,    62,   187,
     120,   131,   152,   193,    43,  -165,  -165,  -165,   208,   209,
    -165,   210,   155,  1131,  1408,  -165,  -165,  -165,  1140,  -165,
    -165,  -165,  -165,  1460,  1447,   662,  -165,   662,   662,  -165,
    -165,  1460,  -165,  1460,  -165,  -165,  -165,  -165,   211,  -165,
     214,  -165,  -165,   136,   662,   139,   268,  -165,  -165,  -165,
    -165,  -165,  -165,  -165,   199,  -165,   662,   662,  -165,  -165,
    -165
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,  -165,  -165,   -57,  -165,  -165,   -94,    25,    33,
      -1,    19,    63,    67,    68,    61,    65,  -165,   -54,   -21,
    -165,   -88,   -62,     7,     0,  -165,   221,  -165,    46,  -165,
    -165,   217,   -73,   -46,  -165,    48,  -165,   230,   143,   201,
     -10,   -28,   -14,  -165,   -55,  -165,    56,  -165,   119,  -125,
    -164,  -135,  -165,   -61,  -165,   -11,    37,   169,  -161,  -165,
    -165,  -165,  -165,   266,  -165
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      25,   176,   146,   140,   161,   147,    60,    24,    38,    42,
     185,   256,    40,    50,   236,    47,   206,     3,    63,   246,
     168,    56,    20,   224,   171,   146,    48,    49,   147,    69,
     159,    52,    20,   178,   166,    25,    73,   151,    20,   183,
     184,    64,    24,    19,    67,   134,   136,    20,    20,    22,
      20,   155,   186,   146,   225,   152,    23,    39,   139,    22,
     134,   267,    51,   157,   135,   232,    23,   233,   231,   165,
      44,   302,    23,   150,   232,    22,   233,    22,   162,    23,
      75,   135,    23,   151,    74,   161,   258,    70,   244,   185,
     128,   261,   262,   146,   185,   314,   147,    76,   308,   170,
     249,   243,   302,    71,   273,   146,   214,   215,   147,   254,
     226,   226,   250,   276,   277,   278,   309,    58,   226,    59,
     263,    76,    76,    76,   323,   235,    76,   227,   251,   234,
     167,   186,   240,   155,   259,   135,   241,   294,   216,   217,
     265,   169,   233,   207,    76,   210,   211,    23,   208,   209,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   231,   172,
     272,   301,   266,   332,   319,   173,   146,   264,   315,   147,
     174,   226,   226,   179,   275,   188,   189,   190,   220,   317,
     311,   180,   312,   226,   181,   146,   318,   320,   147,   344,
     226,   321,   346,   226,    76,   295,   226,    60,   191,   221,
     192,   146,   193,   283,   284,   285,   286,   303,   235,   304,
     212,   213,    40,    76,    41,   333,   335,   265,   322,   233,
     226,   222,   139,   218,   219,   279,   280,   287,   288,   139,
     165,   223,   330,    72,    68,   281,   282,   146,   328,   238,
     147,   266,    80,   252,   336,   239,   338,   339,   253,   242,
     255,   268,   257,   269,   274,   139,   146,   307,   313,   341,
     316,   324,   325,   345,   342,   326,    80,    80,    80,   343,
     347,    80,   348,   289,   292,   349,   350,   155,   290,   293,
     291,   153,   158,   149,   245,   306,   260,   229,   310,    80,
     340,    62,     0,   139,     1,    81,    82,     2,     3,    83,
      84,    85,     4,     0,     5,     6,     7,    86,    87,    88,
       8,     9,    10,    89,    11,    12,    90,    13,    14,    91,
      15,    16,    17,    18,    19,    92,    93,    94,    95,     0,
       0,    96,    97,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,     0,     0,     0,     0,     0,     0,    80,
       0,    21,     0,    98,     0,     0,     0,     0,     0,    99,
     100,   101,   102,   103,   104,   204,     0,     0,    80,     0,
       0,     0,     0,     0,   105,    53,   106,     1,    81,    82,
       2,     3,    83,    84,    85,     4,     0,     5,     6,     7,
      86,    87,    88,     8,     9,    10,    89,    11,    12,    90,
      13,    14,    91,    15,    16,    17,    18,    19,    92,    93,
      94,    95,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,    98,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,    81,    82,
       0,     0,    83,    84,    85,     0,     0,   105,    53,   228,
      86,    87,    88,     0,     0,     0,    89,     0,     0,    90,
       0,     0,    91,     0,     0,     0,     0,     0,    92,    93,
      94,    95,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,    81,    82,
       0,     0,    83,    84,    85,     0,     0,   105,    53,   230,
      86,    87,    88,     0,     0,     0,    89,     0,     0,    90,
       0,     0,    91,     0,     0,     0,     0,     0,    92,    93,
      94,    95,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    98,     0,     0,     0,
       0,     0,    99,   100,   101,   102,   103,   104,     0,     0,
       0,     0,     1,     0,     0,     2,     3,   105,    53,   296,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,     0,    11,    12,     0,    13,    14,     0,    15,    16,
      17,    18,    19,     0,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,     0,    11,    12,     0,    13,    14,    21,
      15,    16,    17,    18,    19,     0,    81,    82,     0,     0,
      83,    84,    85,     0,     0,     0,     0,     0,    86,    87,
      88,    72,     0,    53,    89,     0,     0,    90,     0,     0,
      91,    21,     0,     0,     0,     0,    92,    93,    94,    95,
       0,     0,    96,    97,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
      99,   100,   101,   102,   103,   104,     0,     0,     0,     0,
       0,     0,     2,     3,     0,   105,    53,     4,     0,     5,
       0,     7,     0,     0,     0,     8,     9,     0,     0,    11,
      12,     0,     0,    14,     0,     0,    16,    17,    18,    19,
       0,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     0,     7,     0,     0,     0,     8,     9,     0,     0,
      11,    12,     0,     0,    14,     0,    21,    16,    17,    18,
      19,     0,     0,     0,     0,    61,     0,     0,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,   160,     0,     0,     8,     9,    10,    21,    11,    12,
       0,    13,    14,     0,    15,    16,    17,    18,    19,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   248,     0,     0,     0,     0,     0,     0,     2,
       3,     0,     0,     0,     4,    21,     5,    22,     7,     0,
       0,     0,     8,     9,    23,     0,    11,    12,    90,     0,
      14,     0,     0,    16,    17,    18,    19,     0,   144,    94,
      95,     0,     0,    96,    97,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,    98,     0,     0,     0,     0,
       0,    99,   100,   101,   102,   103,   104,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,     0,    11,    12,     0,
      13,    14,     0,    15,    16,    17,    18,    19,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,   232,   297,   233,     0,
       0,     1,     0,    23,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
     265,   297,   233,     0,     0,     1,     0,    23,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,     0,    11,    12,     0,    13,    14,
       0,    15,    16,    17,    18,    19,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,    21,     0,    22,     8,     9,    10,     0,    11,
      12,    23,    13,    14,     0,    15,    16,    17,    18,    19,
       0,   137,     0,     0,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,     0,    11,    12,    21,    13,    14,   138,
      15,    16,    17,    18,    19,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   144,    94,    95,     0,     0,
      96,    97,     0,     0,     0,    90,     0,     0,     0,     0,
       0,    21,     0,     0,   327,   144,    94,    95,     0,     0,
      96,    97,    98,     0,    90,     0,     0,     0,    99,   100,
     101,   102,   103,   104,   144,    94,    95,     0,     0,    96,
      97,     0,    98,     0,   154,   331,     0,    90,    99,   100,
     101,   102,   103,   104,     0,     0,     0,   144,    94,    95,
       0,    98,    96,    97,   154,     0,     0,    99,   100,   101,
     102,   103,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   175,     0,    98,     0,     0,     0,     0,     0,
      99,   100,   101,   102,   103,   104,     1,     0,     0,     2,
       3,     0,     0,     0,     4,   105,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,     0,     0,
       0,   305,     0,     0,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    21,    11,    12,     0,    13,    14,     0,
      15,    16,    17,    18,    19,     0,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     0,     7,     0,     0,
       0,     8,     9,     0,     0,    11,    12,     0,    90,    14,
       0,    21,    16,    17,    18,    19,     0,     0,   144,    94,
      95,    90,     0,    96,    97,     0,     0,     0,     0,     0,
       0,   144,    94,    95,     0,     0,    96,    97,     0,     0,
       0,     0,    21,     0,     0,    98,     0,     0,   145,     0,
       0,    99,   100,   101,   102,   103,   104,     0,    98,   270,
      90,     0,     0,     0,    99,   100,   101,   102,   103,   104,
     144,    94,    95,    90,     0,    96,    97,     0,     0,     0,
       0,     0,     0,   144,    94,    95,     0,     0,    96,    97,
       0,     0,     0,     0,     0,     0,     0,    98,     0,     0,
     300,     0,     0,    99,   100,   101,   102,   103,   104,     0,
      98,     0,    90,   329,     0,     0,    99,   100,   101,   102,
     103,   104,   144,    94,    95,    90,     0,    96,    97,     0,
       0,     0,     0,     0,     0,   144,    94,    95,     0,     0,
      96,    97,     0,     0,     0,     0,     0,     0,     0,    98,
     334,     0,     0,     0,     0,    99,   100,   101,   102,   103,
     104,     0,    98,     0,    90,     0,     0,     0,    99,   100,
     101,   102,   103,   104,   144,    94,    95,    90,     0,    96,
      97,     0,     0,     0,     0,     0,     0,   144,    94,    95,
       0,     0,    96,    97,     0,     0,     0,     0,     0,     0,
       0,   177,     0,     0,     0,     0,     0,    99,   100,   101,
     102,   103,   104,     0,   182,     0,     0,     0,     0,     0,
      99,   100,   101,   102,   103,   104
};

static const yytype_int16 yycheck[] =
{
       0,    89,    59,    58,    77,    59,    34,     0,    35,    23,
      98,   172,    22,    35,   139,    25,   110,     7,    84,   154,
      82,    32,    35,    49,    85,    82,    26,    27,    82,    43,
      76,    31,    35,    90,    80,    35,    47,    67,    35,    96,
      97,    35,    35,    33,    63,    55,    57,    35,    35,    62,
      35,    72,    98,   110,    80,    85,    69,    84,    58,    62,
      70,   186,    84,    74,    57,    62,    69,    64,   129,    79,
      83,   235,    69,    82,    62,    62,    64,    62,    81,    69,
      84,    74,    69,    67,    47,   158,   174,    67,   150,   177,
      53,   179,   180,   150,   182,   256,   150,    51,    67,    81,
     162,    85,   266,    83,   192,   162,    44,    45,   162,   170,
      67,    67,    67,   207,   208,   209,    85,    62,    67,    64,
     181,    75,    76,    77,    81,   139,    80,    83,    83,   139,
      83,   177,    63,   154,    83,   128,    67,   225,    76,    77,
      62,    83,    64,    69,    98,    70,    71,    69,    74,    75,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   229,    62,
     191,   233,   186,   308,   268,    35,   233,    63,    63,   233,
      62,    67,    67,    62,   205,    39,    40,    41,    68,    63,
     252,    62,   253,    67,    81,   252,    63,    63,   252,    63,
      67,    67,    63,    67,   158,   226,    67,   235,    62,    78,
      64,   268,    66,   214,   215,   216,   217,    62,   232,    64,
      42,    43,   232,   177,    23,   313,   314,    62,    65,    64,
      67,    79,   232,    46,    47,   210,   211,   218,   219,   239,
     250,    48,   304,    82,    43,   212,   213,   304,   303,    63,
     304,   265,    51,    81,   315,    67,   317,   318,    81,    65,
      34,    63,    83,    35,    35,   265,   323,    35,    62,   323,
      63,    63,    63,   334,    63,    65,    75,    76,    77,    65,
      12,    80,    83,   220,   223,   346,   347,   308,   221,   224,
     222,    70,    75,    63,   151,   239,   177,   128,   250,    98,
     321,    35,    -1,   303,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    40,    41,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,   158,
      -1,    60,    -1,    62,    -1,    -1,    -1,    -1,    -1,    68,
      69,    70,    71,    72,    73,    82,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,     4,     5,
      -1,    -1,     8,     9,    10,    -1,    -1,    83,    84,    85,
      16,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,     4,     5,
      -1,    -1,     8,     9,    10,    -1,    -1,    83,    84,    85,
      16,    17,    18,    -1,    -1,    -1,    22,    -1,    -1,    25,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    34,    35,
      36,    37,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    68,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,     3,    -1,    -1,     6,     7,    83,    84,    85,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    -1,    23,    24,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,    -1,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    -1,    23,    24,    -1,    26,    27,    60,
      29,    30,    31,    32,    33,    -1,     4,     5,    -1,    -1,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    82,    -1,    84,    22,    -1,    -1,    25,    -1,    -1,
      28,    60,    -1,    -1,    -1,    -1,    34,    35,    36,    37,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,     6,     7,    -1,    83,    84,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    19,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    30,    31,    32,    33,
      -1,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,
      13,    -1,    15,    -1,    -1,    -1,    19,    20,    -1,    -1,
      23,    24,    -1,    -1,    27,    -1,    60,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,     0,    -1,    -1,     3,    -1,
      -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,
      15,    85,    -1,    -1,    19,    20,    21,    60,    23,    24,
      -1,    26,    27,    -1,    29,    30,    31,    32,    33,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    60,    13,    62,    15,    -1,
      -1,    -1,    19,    20,    69,    -1,    23,    24,    25,    -1,
      27,    -1,    -1,    30,    31,    32,    33,    -1,    35,    36,
      37,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    72,    73,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    -1,    29,    30,    31,    32,    33,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    62,    63,    64,    -1,
      -1,     3,    -1,    69,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      62,    63,    64,    -1,    -1,     3,    -1,    69,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    -1,    23,    24,    -1,    26,    27,
      -1,    29,    30,    31,    32,    33,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,     6,     7,    -1,    -1,    -1,    11,    -1,    13,
      14,    15,    60,    -1,    62,    19,    20,    21,    -1,    23,
      24,    69,    26,    27,    -1,    29,    30,    31,    32,    33,
      -1,    35,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    -1,    23,    24,    60,    26,    27,    63,
      29,    30,    31,    32,    33,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    -1,
      40,    41,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    63,    35,    36,    37,    -1,    -1,
      40,    41,    62,    -1,    25,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,    35,    36,    37,    -1,    -1,    40,
      41,    -1,    62,    -1,    84,    85,    -1,    25,    68,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    35,    36,    37,
      -1,    62,    40,    41,    84,    -1,    -1,    68,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    83,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,    38,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,
      19,    20,    21,    60,    23,    24,    -1,    26,    27,    -1,
      29,    30,    31,    32,    33,    -1,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,
      -1,    19,    20,    -1,    -1,    23,    24,    -1,    25,    27,
      -1,    60,    30,    31,    32,    33,    -1,    -1,    35,    36,
      37,    25,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    62,    -1,    -1,    65,    -1,
      -1,    68,    69,    70,    71,    72,    73,    -1,    62,    63,
      25,    -1,    -1,    -1,    68,    69,    70,    71,    72,    73,
      35,    36,    37,    25,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    -1,    -1,    68,    69,    70,    71,    72,    73,    -1,
      62,    -1,    25,    65,    -1,    -1,    68,    69,    70,    71,
      72,    73,    35,    36,    37,    25,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      63,    -1,    -1,    -1,    -1,    68,    69,    70,    71,    72,
      73,    -1,    62,    -1,    25,    -1,    -1,    -1,    68,    69,
      70,    71,    72,    73,    35,    36,    37,    25,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    69,    70,
      71,    72,    73,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      68,    69,    70,    71,    72,    73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    27,    29,    30,    31,    32,    33,
      35,    60,    62,    69,   109,   110,   113,   114,   115,   116,
     122,   125,   126,   127,   128,   148,   149,   150,    35,    84,
     126,   125,   128,   129,    83,   111,   112,   126,   110,   110,
      35,    84,   110,    84,   109,   110,   141,   142,    62,    64,
     127,     0,   149,    84,    35,   123,   124,    63,   125,   128,
      67,    83,    82,   141,   142,    84,   114,   117,   118,   119,
     125,     4,     5,     8,     9,    10,    16,    17,    18,    22,
      25,    28,    34,    35,    36,    37,    40,    41,    62,    68,
      69,    70,    71,    72,    73,    83,    85,    87,    88,    90,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   107,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   126,   109,   141,    35,    63,   110,
     130,   131,   132,   133,    35,    65,    90,   104,   108,   123,
      82,    67,    85,   112,    84,   105,   137,   141,   117,   119,
      85,   118,    81,   120,   121,   126,   119,    83,   108,    83,
      81,   139,    62,    35,    62,    83,   107,    62,    90,    62,
      62,    81,    62,    90,    90,   107,   119,   134,    39,    40,
      41,    62,    64,    66,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    82,   106,    93,    69,    74,    75,
      70,    71,    42,    43,    44,    45,    76,    77,    46,    47,
      68,    78,    79,    48,    49,    80,    67,    83,    85,   143,
      85,   139,    62,    64,   126,   128,   135,   136,    63,    67,
      63,    67,    65,    85,   108,   124,   137,   138,    85,   108,
      67,    83,    81,    81,   139,    34,   144,    83,   107,    83,
     134,   107,   107,   139,    63,    62,   128,   135,    63,    35,
      63,    89,   105,   107,    35,   105,    93,    93,    93,    94,
      94,    95,    95,    96,    96,    96,    96,    97,    97,    98,
      99,   100,   101,   102,   107,   105,    85,    63,   130,   135,
      65,   108,   136,    62,    64,    38,   132,    35,    67,    85,
     121,   108,   139,    62,   144,    63,    63,    63,    63,    93,
      63,    67,    65,    81,    63,    63,    65,    63,   130,    65,
     108,    85,   137,   107,    63,   107,   139,    91,   139,   139,
     105,   104,    63,    65,    63,   139,    63,    12,    83,   139,
     139
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
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

/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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

/* Line 1455 of yacc.c  */
#line 56 "parser.y"
    { makeList(tablePtr, 'v', lineCount); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 57 "parser.y"
    { makeList(tablePtr, 'c', lineCount);;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 58 "parser.y"
    { makeList(tablePtr, 's', lineCount);;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 59 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 64 "parser.y"
    { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 66 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 67 "parser.y"
    { makeList(tablePtr, 'v', lineCount);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 68 "parser.y"
    { makeList(tablePtr, 'v', lineCount);;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 69 "parser.y"
    { makeList(tablePtr, 'o', lineCount);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 70 "parser.y"
    { makeList(tablePtr, 'o', lineCount);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 75 "parser.y"
    { makeList(",",'p', lineCount); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 80 "parser.y"
    { makeList("++",'o', lineCount); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    { makeList("--",'o', lineCount); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 83 "parser.y"
    { makeList("sizeof",'o', lineCount); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 84 "parser.y"
    { makeList("sizeof",'o', lineCount); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    { makeList("&",'o', lineCount); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 90 "parser.y"
    { makeList("*",'o', lineCount); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    { makeList("+",'o', lineCount); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 92 "parser.y"
    { makeList("-",'o', lineCount); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    { makeList("~",'o', lineCount); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    { makeList("!",'o', lineCount); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    { makeList("*",'o', lineCount); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    { makeList("/",'o', lineCount); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    { makeList("%",'o', lineCount); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    { makeList("+",'o', lineCount); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    { makeList("-",'o', lineCount); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    { makeList("<<",'o', lineCount); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    { makeList(">>",'o', lineCount); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    { makeList("<=",'o', lineCount); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    { makeList(">=",'o', lineCount); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 131 "parser.y"
    { makeList("==",'o', lineCount); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    { makeList("!=",'o', lineCount); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 137 "parser.y"
    { makeList("&", 'o', lineCount);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 142 "parser.y"
    { makeList("^", 'o', lineCount); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 147 "parser.y"
    { makeList("|", 'o', lineCount); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 152 "parser.y"
    { makeList("&&", 'o', lineCount); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 157 "parser.y"
    { makeList("||", 'o', lineCount); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 162 "parser.y"
    { makeList("?:",'o', lineCount); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    { makeList("=",'o', lineCount); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    { makeList("*=",'o', lineCount); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 173 "parser.y"
    { makeList("/=",'o', lineCount); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 174 "parser.y"
    { makeList("%=",'o', lineCount); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    { makeList("+=",'o', lineCount); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    { makeList("-=",'o', lineCount); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 177 "parser.y"
    { makeList("<<=",'o', lineCount); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    { makeList(">==",'o', lineCount); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    { makeList("&=",'o', lineCount); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    { makeList("^=",'o', lineCount); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    { makeList("|=",'o', lineCount); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    { makeList(",", 'p', lineCount); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    { makeList(";", 'p', lineCount);typeBuffer=' '; ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    { makeList(";", 'p', lineCount); typeBuffer=' ';;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 209 "parser.y"
    { makeList(",", 'p', lineCount); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    { makeList("=", 'o', lineCount); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    { makeList("typedef", 'k', lineCount);;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    { makeList("extern", 'k', lineCount);;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    { makeList("static", 'k', lineCount);;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 221 "parser.y"
    { makeList("auto", 'k', lineCount);;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 222 "parser.y"
    { makeList("register", 'k', lineCount);;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 226 "parser.y"
    { makeList("void", 'k', lineCount);typeBuffer='v';;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    { makeList("char", 'k', lineCount); typeBuffer='c';;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    { makeList("short", 'k', lineCount);;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 229 "parser.y"
    { makeList("int", 'k', lineCount); typeBuffer='i';;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    { makeList("lon``g", 'k', lineCount);;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    { makeList("float", 'k', lineCount);	typeBuffer='f';;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    { makeList("double", 'k', lineCount);;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 233 "parser.y"
    { makeList("signed", 'k', lineCount);;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    { makeList("unsigned", 'k', lineCount);;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 247 "parser.y"
    { makeList("struct", 'k', lineCount);;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    { makeList("union", 'k', lineCount);;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    { makeList(";", 'p', lineCount); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    { makeList(",", 'p', lineCount); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    { makeList(":", 'p', lineCount); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 275 "parser.y"
    { makeList(":", 'p', lineCount); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 279 "parser.y"
    { makeList("enum", 'k', lineCount);;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    { makeList("enum", 'k', lineCount); makeList(tablePtr, 'v', lineCount); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 281 "parser.y"
    { makeList("enum", 'k', lineCount); makeList(tablePtr, 'v', lineCount); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 286 "parser.y"
    { makeList(",", 'p', lineCount); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 290 "parser.y"
    { makeList(tablePtr, 'v', lineCount); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 291 "parser.y"
    { makeList("=", 'o', lineCount); makeList("tablePtr", 'v', lineCount); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 295 "parser.y"
    { makeList("const", 'k', lineCount); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 296 "parser.y"
    { makeList("volatile", 'k', lineCount); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    { makeList(tablePtr, 'v', lineCount); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 306 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 307 "parser.y"
    { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 309 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 310 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 311 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    { makeList("*", 'o', lineCount); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 316 "parser.y"
    { makeList("*", 'o', lineCount); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 317 "parser.y"
    { makeList("*", 'o', lineCount); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 318 "parser.y"
    { makeList("*", 'o', lineCount); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 329 "parser.y"
    { makeList(",", 'p', lineCount); makeList("::", 'o', lineCount); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 334 "parser.y"
    { makeList(",", 'p', lineCount); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 344 "parser.y"
    {makeList(tablePtr, 'v', lineCount);;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 345 "parser.y"
    { makeList(tablePtr, 'v', lineCount); makeList(",", 'p', lineCount); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 361 "parser.y"
    { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 362 "parser.y"
    { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 363 "parser.y"
    { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 364 "parser.y"
    { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 366 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 367 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 368 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 379 "parser.y"
    { makeList(",", 'p', lineCount); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 392 "parser.y"
    { makeList(tablePtr, 'v', lineCount);  ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 393 "parser.y"
    { makeList(":", 'p', lineCount); makeList("case", 'k', lineCount);;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 394 "parser.y"
    { makeList(":", 'p', lineCount); makeList("default", 'k', lineCount); ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 415 "parser.y"
    { makeList(";", 'p', lineCount); ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 416 "parser.y"
    { makeList(";", 'p', lineCount); ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 421 "parser.y"
    { makeList("if", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount);;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 423 "parser.y"
    { makeList("if", 'k', lineCount);  makeList("else", 'k', lineCount); makeList("(", 'p', lineCount); 					  makeList(")", 'p', lineCount); 
  				;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 426 "parser.y"
    { makeList("switch", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 431 "parser.y"
    { makeList("while", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 433 "parser.y"
    { makeList("do", 'k', lineCount); makeList("while", 'k', lineCount); makeList("(", 'p', lineCount);         				  makeList(")", 'p', lineCount); makeList(";", 'p', lineCount); 
			;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 436 "parser.y"
    { makeList("for", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 438 "parser.y"
    { makeList("for", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 442 "parser.y"
    { makeList("goto", 'k', lineCount); makeList(";", 'p', lineCount); makeList(tablePtr, 'v', lineCount);;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 443 "parser.y"
    { makeList("continue", 'k', lineCount); makeList(";", 'p', lineCount); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 444 "parser.y"
    { makeList("break", 'k', lineCount); makeList(";", 'p', lineCount);;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 445 "parser.y"
    { makeList("return", 'k', lineCount); makeList(";", 'p', lineCount);;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 446 "parser.y"
    { makeList("return", 'k', lineCount); makeList(";", 'p', lineCount);;}
    break;



/* Line 1455 of yacc.c  */
#line 2903 "parser.tab.c"
      default: break;
    }
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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
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



/* Line 1675 of yacc.c  */
#line 466 "parser.y"

void yyerror()
{
	errorFlag=1;
	fflush(stdout);
	printf("\n%s : %d :Syntax error \n",sourceCode,lineCount);
}
void main(int argc,char **argv){
	if(argc<=1){
		
		printf("Invalid ,Expected Format : ./a.out <\"sourceCode\"> \n");
		return 0;
	}
	
	yyin=fopen(argv[1],"r");
	sourceCode=(char *)malloc(strlen(argv[1])*sizeof(char));
	sourceCode=argv[1];
	yyparse();
	
	if(nestedCommentCount!=0){
		errorFlag=1;
    		printf("%s : %d : Comment Does Not End\n",sourceCode,lineCount);
    		
	}
	if(commentFlag==1){
		errorFlag=1;
		printf("%s :					 %d : Nested Comment\n",sourceCode,lineCount);
    	}

	if(!errorFlag){
		
		printf("\n\n\t\t%s Parsing Completed\n\n",sourceCode);
		
		
		FILE *writeParsed=fopen("parsedTable.txt","w");
    		fprintf(writeParsed,"\n\t\t\t\tParsed	Table\n\n\t\tToken\t\t\tType\t\t\t\t\t\t\tLineNumber\n");
      		for(tokenList *ptr=parsedPtr;ptr!=NULL;ptr=ptr->next){
  			fprintf(writeParsed,"\n%20s%30.30s%60s",ptr->token,ptr->type,ptr->line);
		}
		
		
  		FILE *writeSymbol=fopen("symbolTable.txt","w");
    		fprintf(writeSymbol,"\n\t\t\t\tSymbolTable\n\n\t\tToken\t\t\t\t\t\tType\t\t\t\t\t\t\tLine Number\n");
      		for(tokenList *ptr=symbolPtr;ptr!=NULL;ptr=ptr->next){
  			fprintf(writeSymbol,"\n%20s%30.30s%60s",ptr->token,ptr->type,ptr->line);
		}
		
		FILE *writeConstant=fopen("constantTable.txt","w");
    		fprintf(writeConstant,"\n   \t\t\t\t\t\t\t\tConstant Table \n\n \t\t\t\t\t\tValue\t\t\t\t\t\t\tLine Number\n");
    		for(tokenList *ptr=constantPtr;ptr!=NULL;ptr=ptr->next)
  		fprintf(writeConstant,"\n%50s%60s",ptr->token,ptr->line);
  	
  	
  		fclose(writeSymbol);
		fclose(writeConstant);
	}
printf("\n\n");	
}

void makeList(char *tokenName,char tokenType, int tokenLine)
{
	char line[39],lineBuffer[19];
	
  	snprintf(lineBuffer, 19, "%d", tokenLine);
	strcpy(line," ");
	strcat(line,lineBuffer);
	char type[20];
	switch(tokenType)
	{
			case 'c':
					strcpy(type,"Constant");
					break;
			case 'v':
					strcpy(type,"Identifier");
					break;
			case 'p':
					strcpy(type,"Punctuator");
					break;
			case 'o':
					strcpy(type,"Operator");
					break;
			case 'k':
					strcpy(type,"Keyword");
					break;
			case 's':
					strcpy(type,"String Literal");
					break;
			case 'd':
					strcpy(type,"Preprocessor Statement");
					break;
	}
	for(tokenList *p=parsedPtr;p!=NULL;p=p->next)
  	 		if(strcmp(p->token,tokenName)==0){
       				strcat(p->line,line);
       				goto xx;
     			}
		tokenList *temp=(tokenList *)malloc(sizeof(tokenList));
		temp->token=(char *)malloc(strlen(tokenName)+1);
		strcpy(temp->token,tokenName);
		strcpy(temp->type,type);
    		strcpy(temp->line,line);
    		temp->next=NULL;
    		
    		tokenList *p=parsedPtr;
    		if(p==NULL){
    			
    			parsedPtr=temp;
    		}
    		else{
    			while(p->next!=NULL){
    				p=p->next;
    			}
    			p->next=temp;
    		}	
    		
	
	xx:
	if(tokenType == 'c')
	{
    		
    		for(tokenList *p=constantPtr;p!=NULL;p=p->next)
  	 		if(strcmp(p->token,tokenName)==0){
       				strcat(p->line,line);
       				return;
     			}
		tokenList *temp=(tokenList *)malloc(sizeof(tokenList));
		temp->token=(char *)malloc(strlen(tokenName)+1);
		strcpy(temp->token,tokenName);
		strcpy(temp->type,type);
    		strcpy(temp->line,line);
    		temp->next=NULL;
    		
    		tokenList *p=constantPtr;
    		if(p==NULL){
    			constantPtr=temp;
    		}
    		else{
    			while(p->next!=NULL){
    				p=p->next;
    			}
    			p->next=temp;
    		}	
    		

	}
	if(tokenType=='v')
	{
    		for(tokenList *p=symbolPtr;p!=NULL;p=p->next)
  	 		if(strcmp(p->token,tokenName)==0){
       				strcat(p->line,line);
       				return;
     			}
		tokenList *temp=(tokenList *)malloc(sizeof(tokenList));
		temp->token=(char *)malloc(strlen(tokenName)+1);
		strcpy(temp->token,tokenName);
		switch(typeBuffer){
		case 'i': strcpy(temp->type,"INT"); break;
		case 'f': strcpy(temp->type,"FLOAT");break;
		case 'v' :strcpy(temp->type,"VOID");break;
		case 'c': strcpy(temp->type,"CHAR");break;
		
		}
		
    		strcpy(temp->line,line);
    		temp->next=NULL;
    		tokenList *p=symbolPtr;
    		if(p==NULL){
    			
    			symbolPtr=temp;
    		}
    		else{
    			while(p->next!=NULL){
    				p=p->next;
    			}
    			p->next=temp;
    		}
	}
}

