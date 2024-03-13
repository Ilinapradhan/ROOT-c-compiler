
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
#include "semantic.h"



extern FILE *yyin;
extern int lineCount;
extern char *tablePtr;
extern char *tablePtr;
extern int nestedCommentCount;
extern int commentFlag;
extern int arrayIndexErr;




char *sourceCode=NULL;
int errorFlag=0;
void makeList(char *,char,int);


/* Line 189 of yacc.c  */
#line 99 "parser.tab.c"

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
     FLCONSTANT = 292,
     STRING_LITERAL = 293,
     ELLIPSIS = 294,
     PTR_OP = 295,
     INC_OP = 296,
     DEC_OP = 297,
     LEFT_OP = 298,
     RIGHT_OP = 299,
     LE_OP = 300,
     GE_OP = 301,
     EQ_OP = 302,
     NE_OP = 303,
     AND_OP = 304,
     OR_OP = 305,
     MUL_ASSIGN = 306,
     DIV_ASSIGN = 307,
     MOD_ASSIGN = 308,
     ADD_ASSIGN = 309,
     SUB_ASSIGN = 310,
     LEFT_ASSIGN = 311,
     RIGHT_ASSIGN = 312,
     AND_ASSIGN = 313,
     XOR_ASSIGN = 314,
     OR_ASSIGN = 315,
     TYPE_NAME = 316,
     LOWER_THAN_ELSE = 317
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
#line 203 "parser.tab.c"

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
#define YYLAST   1578

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  87
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  214
/* YYNRULES -- Number of states.  */
#define YYNSTATES  352

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,     2,     2,    76,    69,     2,
      63,    64,    70,    71,    68,    72,    67,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    84,
      77,    83,    78,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    65,     2,    66,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,    80,    86,    73,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    15,    17,    22,
      26,    31,    35,    39,    42,    45,    47,    51,    53,    56,
      59,    62,    65,    66,    72,    74,    76,    78,    80,    82,
      84,    86,    91,    93,    97,   101,   105,   107,   111,   115,
     117,   121,   125,   127,   131,   135,   139,   143,   145,   149,
     153,   155,   159,   161,   165,   167,   171,   173,   177,   179,
     183,   185,   191,   193,   197,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   219,   221,   225,   227,   230,
     234,   236,   239,   241,   244,   246,   249,   251,   255,   257,
     261,   263,   265,   267,   269,   271,   273,   275,   277,   279,
     281,   283,   285,   287,   289,   291,   293,   295,   301,   306,
     309,   311,   313,   315,   318,   322,   325,   327,   330,   332,
     334,   338,   340,   343,   347,   352,   358,   361,   363,   367,
     369,   373,   375,   377,   380,   382,   384,   388,   393,   397,
     402,   407,   411,   413,   416,   419,   423,   425,   428,   430,
     434,   436,   440,   443,   446,   448,   450,   454,   456,   459,
     461,   463,   466,   470,   473,   477,   481,   486,   489,   493,
     497,   502,   504,   508,   513,   515,   519,   521,   523,   525,
     527,   529,   531,   535,   540,   544,   547,   551,   555,   560,
     562,   565,   567,   570,   572,   575,   581,   589,   595,   601,
     609,   616,   624,   628,   631,   634,   637,   641,   643,   646,
     648,   650,   655,   659,   663
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     149,     0,    -1,    35,    -1,    37,    -1,    36,    -1,    38,
      -1,    63,   108,    64,    -1,    88,    -1,    89,    65,   108,
      66,    -1,    89,    63,    64,    -1,    89,    63,    90,    64,
      -1,    89,    67,    35,    -1,    89,    40,    35,    -1,    89,
      41,    -1,    89,    42,    -1,   106,    -1,    90,    68,   106,
      -1,    89,    -1,    41,    91,    -1,    42,    91,    -1,    93,
      94,    -1,    25,    91,    -1,    -1,    25,    63,   135,    64,
      92,    -1,    69,    -1,    70,    -1,    71,    -1,    72,    -1,
      73,    -1,    74,    -1,    91,    -1,    63,   135,    64,    94,
      -1,    94,    -1,    95,    70,    94,    -1,    95,    75,    94,
      -1,    95,    76,    94,    -1,    95,    -1,    96,    71,    95,
      -1,    96,    72,    95,    -1,    96,    -1,    97,    43,    96,
      -1,    97,    44,    96,    -1,    97,    -1,    98,    77,    97,
      -1,    98,    78,    97,    -1,    98,    45,    97,    -1,    98,
      46,    97,    -1,    98,    -1,    99,    47,    98,    -1,    99,
      48,    98,    -1,    99,    -1,   100,    69,    99,    -1,   100,
      -1,   101,    79,   100,    -1,   101,    -1,   102,    80,   101,
      -1,   102,    -1,   103,    49,   102,    -1,   103,    -1,   104,
      50,   103,    -1,   104,    -1,   104,    81,   108,    82,   105,
      -1,   105,    -1,    91,   107,   106,    -1,    83,    -1,    51,
      -1,    52,    -1,    53,    -1,    54,    -1,    55,    -1,    56,
      -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,   106,
      -1,   108,    68,   106,    -1,   105,    -1,   111,    84,    -1,
     111,   112,    84,    -1,   114,    -1,   114,   111,    -1,   115,
      -1,   115,   111,    -1,   126,    -1,   126,   111,    -1,   113,
      -1,   112,    68,   113,    -1,   127,    -1,   127,    83,   138,
      -1,    29,    -1,    14,    -1,    26,    -1,     3,    -1,    21,
      -1,    32,    -1,     6,    -1,    23,    -1,    19,    -1,    20,
      -1,    15,    -1,    11,    -1,    24,    -1,    31,    -1,   116,
      -1,   123,    -1,    61,    -1,   117,    35,    85,   118,    86,
      -1,   117,    85,   118,    86,    -1,   117,    35,    -1,    27,
      -1,    30,    -1,   119,    -1,   118,   119,    -1,   120,   121,
      84,    -1,   115,   120,    -1,   115,    -1,   126,   120,    -1,
     126,    -1,   122,    -1,   121,    68,   122,    -1,   127,    -1,
      82,   109,    -1,   127,    82,   109,    -1,    13,    85,   124,
      86,    -1,    13,    35,    85,   124,    86,    -1,    13,    35,
      -1,   125,    -1,   124,    68,   125,    -1,    35,    -1,    35,
      83,   109,    -1,     7,    -1,    33,    -1,   129,   128,    -1,
     128,    -1,    35,    -1,    63,   127,    64,    -1,   128,    65,
     109,    66,    -1,   128,    65,    66,    -1,   128,    63,   131,
      64,    -1,   128,    63,   134,    64,    -1,   128,    63,    64,
      -1,    70,    -1,    70,   130,    -1,    70,   129,    -1,    70,
     130,   129,    -1,   126,    -1,   130,   126,    -1,   132,    -1,
     132,    68,    39,    -1,   133,    -1,   132,    68,   133,    -1,
     111,   127,    -1,   111,   136,    -1,   111,    -1,    35,    -1,
     134,    68,    35,    -1,   120,    -1,   120,   136,    -1,   129,
      -1,   137,    -1,   129,   137,    -1,    63,   136,    64,    -1,
      65,    66,    -1,    65,   109,    66,    -1,   137,    65,    66,
      -1,   137,    65,   109,    66,    -1,    63,    64,    -1,    63,
     131,    64,    -1,   137,    63,    64,    -1,   137,    63,   131,
      64,    -1,   106,    -1,    85,   139,    86,    -1,    85,   139,
      68,    86,    -1,   138,    -1,   139,    68,   138,    -1,   141,
      -1,   142,    -1,   145,    -1,   146,    -1,   147,    -1,   148,
      -1,    35,    82,   140,    -1,     5,   109,    82,   140,    -1,
       9,    82,   140,    -1,    85,    86,    -1,    85,   144,    86,
      -1,    85,   143,    86,    -1,    85,   143,   144,    86,    -1,
     110,    -1,   143,   110,    -1,   140,    -1,   144,   140,    -1,
      84,    -1,   108,    84,    -1,    18,    63,   108,    64,   140,
      -1,    18,    63,   108,    64,   140,    12,   140,    -1,    28,
      63,   108,    64,   140,    -1,    34,    63,   108,    64,   140,
      -1,    10,   140,    34,    63,   108,    64,    84,    -1,    16,
      63,   145,   145,    64,   140,    -1,    16,    63,   145,   145,
     108,    64,   140,    -1,    17,    35,    84,    -1,     8,    84,
      -1,     4,    84,    -1,    22,    84,    -1,    22,   108,    84,
      -1,   150,    -1,   149,   150,    -1,   151,    -1,   110,    -1,
     111,   127,   143,   142,    -1,   111,   127,   142,    -1,   127,
     143,   142,    -1,   127,   142,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    52,    52,    53,    54,    55,    56,    60,    61,    62,
      63,    64,    65,    66,    67,    71,    72,    76,    77,    78,
      79,    80,    81,    81,    86,    87,    88,    89,    90,    91,
      95,    96,   100,   101,   102,   103,   107,   108,   109,   113,
     114,   115,   119,   120,   121,   122,   123,   127,   128,   129,
     133,   134,   138,   139,   143,   144,   148,   149,   153,   154,
     158,   159,   163,   164,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   182,   183,   187,   191,   192,
     196,   197,   198,   199,   200,   201,   205,   206,   210,   211,
     215,   216,   217,   218,   219,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   238,   239,   240,
     244,   245,   249,   250,   254,   258,   259,   260,   261,   265,
     266,   270,   271,   272,   276,   277,   278,   282,   283,   287,
     288,   292,   293,   297,   298,   302,   303,   304,   305,   306,
     307,   308,   312,   313,   314,   315,   319,   320,   325,   326,
     330,   331,   335,   336,   337,   341,   342,   346,   347,   351,
     352,   353,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   369,   370,   371,   375,   376,   380,   381,   382,   383,
     384,   385,   389,   390,   391,   395,   396,   397,   398,   402,
     403,   407,   408,   412,   413,   417,   419,   422,   427,   429,
     432,   434,   439,   440,   441,   442,   443,   447,   448,   452,
     453,   457,   458,   459,   460
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
  "FLCONSTANT", "STRING_LITERAL", "ELLIPSIS", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP",
  "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN",
  "OR_ASSIGN", "TYPE_NAME", "LOWER_THAN_ELSE", "'('", "')'", "'['", "']'",
  "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'", "'%'",
  "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'",
  "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "$@1", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
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
     315,   316,   317,    40,    41,    91,    93,    46,    44,    38,
      42,    43,    45,   126,    33,    47,    37,    60,    62,    94,
     124,    63,    58,    61,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    87,    88,    88,    88,    88,    88,    89,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    91,    91,    91,
      91,    91,    92,    91,    93,    93,    93,    93,    93,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    96,    97,
      97,    97,    98,    98,    98,    98,    98,    99,    99,    99,
     100,   100,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   108,   108,   109,   110,   110,
     111,   111,   111,   111,   111,   111,   112,   112,   113,   113,
     114,   114,   114,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   116,
     117,   117,   118,   118,   119,   120,   120,   120,   120,   121,
     121,   122,   122,   122,   123,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   128,   128,   128,   128,   128,
     128,   128,   129,   129,   129,   129,   130,   130,   131,   131,
     132,   132,   133,   133,   133,   134,   134,   135,   135,   136,
     136,   136,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   138,   138,   138,   139,   139,   140,   140,   140,   140,
     140,   140,   141,   141,   141,   142,   142,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   146,   147,   147,
     147,   147,   148,   148,   148,   148,   148,   149,   149,   150,
     150,   151,   151,   151,   151
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     3,     1,     4,     3,
       4,     3,     3,     2,     2,     1,     3,     1,     2,     2,
       2,     2,     0,     5,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     5,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     4,     2,
       1,     1,     1,     2,     3,     2,     1,     2,     1,     1,
       3,     1,     2,     3,     4,     5,     2,     1,     3,     1,
       3,     1,     1,     2,     1,     1,     3,     4,     3,     4,
       4,     3,     1,     2,     2,     3,     1,     2,     1,     3,
       1,     3,     2,     2,     1,     1,     3,     1,     2,     1,
       1,     2,     3,     2,     3,     3,     4,     2,     3,     3,
       4,     1,     3,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     3,     3,     4,     1,
       2,     1,     2,     1,     2,     5,     7,     5,     5,     7,
       6,     7,     3,     2,     2,     2,     3,     1,     2,     1,
       1,     4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    93,    96,   131,   101,     0,    91,   100,    98,    99,
      94,    97,   102,    92,   110,    90,   111,   103,    95,   132,
     135,   106,     0,   142,   210,     0,    80,    82,   104,     0,
     105,    84,     0,   134,     0,     0,   207,   209,   126,     0,
       0,   146,   144,   143,    78,     0,    86,    88,    81,    83,
     109,     0,    85,     0,   189,     0,   214,     0,     0,     0,
     133,     1,   208,     0,   129,     0,   127,   136,   147,   145,
       0,    79,     0,   212,     0,     0,   116,     0,   112,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     4,     3,     5,     0,     0,     0,
      24,    25,    26,    27,    28,    29,   193,   185,     7,    17,
      30,     0,    32,    36,    39,    42,    47,    50,    52,    54,
      56,    58,    60,    62,    75,     0,   191,   176,   177,     0,
       0,   178,   179,   180,   181,    88,   190,   213,   155,   141,
     154,     0,   148,   150,     0,     2,   138,    30,    77,     0,
       0,     0,     0,   124,    87,     0,   171,    89,   211,     0,
     115,   108,   113,     0,     0,   119,   121,   117,   204,     0,
     203,     0,     0,     0,     0,     0,   205,     0,     0,    21,
       0,     0,     0,     0,    18,    19,     0,   157,     0,     0,
      13,    14,     0,     0,     0,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    64,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   194,   187,
       0,   186,   192,     0,     0,   152,   159,   153,   160,   139,
       0,   140,     0,   137,   125,   130,   128,   174,     0,   107,
     122,     0,   114,     0,     0,   184,     0,     0,   202,     0,
     206,     0,     0,     0,   182,     6,     0,   159,   158,     0,
      12,     9,     0,    15,     0,    11,    63,    33,    34,    35,
      37,    38,    40,    41,    45,    46,    43,    44,    48,    49,
      51,    53,    55,    57,    59,     0,    76,   188,   167,     0,
       0,   163,     0,   161,     0,     0,   149,   151,   156,     0,
     172,   120,   123,   183,     0,     0,     0,    22,     0,     0,
      31,    10,     0,     8,     0,   168,   162,   164,   169,     0,
     165,     0,   173,   175,     0,     0,     0,   195,    23,   197,
     198,    16,    61,   170,   166,     0,   200,     0,     0,   199,
     201,   196
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   108,   109,   272,   110,   338,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     206,   125,   149,    54,    55,    45,    46,    26,    27,    28,
      29,    77,    78,    79,   164,   165,    30,    65,    66,    31,
      32,    33,    34,    43,   299,   142,   143,   144,   188,   300,
     238,   157,   248,   126,   127,   128,    57,   130,   131,   132,
     133,   134,    35,    36,    37
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -205
static const yytype_int16 yypact[] =
{
    1043,  -205,  -205,  -205,  -205,   -23,  -205,  -205,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,
    -205,  -205,    77,     3,  -205,    14,  1309,  1309,  -205,   -20,
    -205,  1309,   650,    -6,    36,   792,  -205,  -205,   -67,     2,
     -17,  -205,  -205,     3,  -205,   -45,  -205,   617,  -205,  -205,
       6,  1341,  -205,   315,  -205,    14,  -205,   650,  1088,   240,
      -6,  -205,  -205,     2,    -7,   -30,  -205,  -205,  -205,  -205,
      77,  -205,  1157,  -205,   650,  1341,  1341,   198,  -205,    37,
    1341,    -5,  1450,    19,    97,   681,    67,   160,   147,  1175,
    1464,   153,   157,   141,  -205,  -205,  -205,  1504,  1504,   841,
    -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,  -205,   197,
     307,  1450,  -205,   108,    73,   171,   104,   187,   163,   177,
     156,   201,   -29,  -205,  -205,    -2,  -205,  -205,  -205,   399,
     470,  -205,  -205,  -205,  -205,   180,  -205,  -205,  -205,  -205,
      48,   204,   205,  -205,    61,  -205,  -205,  -205,  -205,   213,
      18,  1450,     2,  -205,  -205,  1157,  -205,  -205,  -205,   756,
    -205,  -205,  -205,  1450,    40,  -205,   203,  -205,  -205,   209,
    -205,   681,   246,  1198,   199,  1450,  -205,    55,   841,  -205,
    1450,  1450,   681,  1450,  -205,  -205,    69,    78,   228,   261,
    -205,  -205,  1342,  1450,   262,  -205,  -205,  -205,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,  -205,  1450,  -205,  1450,  1450,
    1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,
    1450,  1450,  1450,  1450,  1450,  1450,  1450,  1450,  -205,  -205,
     541,  -205,  -205,   913,  1356,  -205,    15,  -205,    57,  -205,
    1270,  -205,   264,  -205,  -205,  -205,  -205,  -205,    49,  -205,
    -205,    37,  -205,  1450,   681,  -205,   237,  1198,  -205,   106,
    -205,   238,   122,   124,  -205,  -205,   978,   137,  -205,  1450,
    -205,  -205,   130,  -205,   121,  -205,  -205,  -205,  -205,  -205,
     108,   108,    73,    73,   171,   171,   171,   171,   104,   104,
     187,   163,   177,   156,   201,    60,  -205,  -205,  -205,   241,
     243,  -205,   242,    57,  1124,  1396,  -205,  -205,  -205,  1133,
    -205,  -205,  -205,  -205,  1450,  1410,   681,  -205,   681,   681,
    -205,  -205,  1450,  -205,  1450,  -205,  -205,  -205,  -205,   251,
    -205,   250,  -205,  -205,   133,   681,   139,   342,  -205,  -205,
    -205,  -205,  -205,  -205,  -205,   271,  -205,   681,   681,  -205,
    -205,  -205
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -205,  -205,  -205,  -205,   -57,  -205,  -205,   -94,    42,    58,
      29,    70,   148,   105,   145,   146,   149,  -205,   -54,   -21,
    -205,   -88,   -62,     7,     0,  -205,   301,  -205,   -32,  -205,
    -205,   297,   -63,   -46,  -205,   128,  -205,   310,   223,   218,
      -9,   -28,   -14,  -205,   -55,  -205,   140,  -205,   214,  -132,
    -204,  -133,  -205,   -61,  -205,    28,    21,   252,  -169,  -205,
    -205,  -205,  -205,   347,  -205
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      25,   177,   147,   141,   257,   148,    60,    24,   237,    42,
       3,   186,    38,    40,   162,    50,    47,   207,    63,    76,
     169,   225,   247,    70,   172,   147,    48,    49,   148,    69,
     160,    52,   303,   179,   167,    25,    19,    64,   152,    71,
     184,   185,    24,    76,    76,    76,   135,    67,    76,    20,
      20,   156,   226,   187,   147,   268,   153,    58,   140,    59,
      56,   135,    39,   303,   136,    51,   227,    76,    74,   232,
     166,    20,    20,    23,   129,    73,   151,    22,   233,   168,
     234,   136,   228,    20,    23,   137,   152,   259,   315,   245,
     186,    75,   262,   263,   147,   186,   162,   148,    44,    22,
      22,   250,   158,   170,   244,   274,   147,    23,   251,   148,
     255,   233,    20,   234,   277,   278,   279,   309,    23,   163,
     304,   264,   305,   227,   252,   241,   236,    76,   227,   242,
     173,   235,   187,   265,   156,   310,   136,   227,   295,   260,
      22,   266,   324,   234,   211,   212,    76,    23,    23,   215,
     216,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   232,
     316,   273,   302,   267,   227,   320,   333,   147,   208,   171,
     148,   217,   218,   209,   210,   276,   318,   323,   319,   227,
     227,   312,   227,   313,   321,   174,   147,   345,   322,   148,
     266,   227,   234,   347,     2,     3,   296,   227,    60,     4,
     175,     5,   147,     7,   213,   214,   180,     8,     9,   236,
     181,    11,    12,   182,    40,    14,   334,   336,    16,    17,
      18,    19,   221,   140,   219,   220,   223,   189,   190,   191,
     140,    41,   166,   331,   284,   285,   286,   287,   147,   329,
     224,   148,   267,   280,   281,   337,   222,   339,   340,    21,
     192,    68,   193,    72,   194,    90,   140,   147,   239,    80,
     342,   282,   283,   240,   346,   145,    94,    95,    96,   243,
     256,    97,    98,   258,   161,   253,   350,   351,   156,   288,
     289,   254,   269,    80,    80,    80,   270,   275,    80,   308,
     314,   341,   317,    99,   140,   325,   146,   326,   327,   100,
     101,   102,   103,   104,   105,   343,   344,    80,     1,    81,
      82,     2,     3,    83,    84,    85,     4,   291,     5,     6,
       7,    86,    87,    88,     8,     9,    10,    89,    11,    12,
      90,    13,    14,    91,    15,    16,    17,    18,    19,    92,
      93,    94,    95,    96,   348,   349,    97,    98,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   292,   290,
     293,   154,   159,   150,   294,   246,    21,    80,    99,   311,
     307,   230,    62,     0,   100,   101,   102,   103,   104,   105,
     205,     0,   261,     0,     0,     0,    80,     0,     0,   106,
      53,   107,     1,    81,    82,     2,     3,    83,    84,    85,
       4,     0,     5,     6,     7,    86,    87,    88,     8,     9,
      10,    89,    11,    12,    90,    13,    14,    91,    15,    16,
      17,    18,    19,    92,    93,    94,    95,    96,     0,     0,
      97,    98,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,    99,     0,     0,     0,     0,     0,   100,   101,
     102,   103,   104,   105,    81,    82,     0,     0,    83,    84,
      85,     0,     0,   106,    53,   229,    86,    87,    88,     0,
       0,     0,    89,     0,     0,    90,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,    81,    82,     0,     0,    83,
      84,    85,     0,     0,   106,    53,   231,    86,    87,    88,
       0,     0,     0,    89,     0,     0,    90,     0,     0,    91,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,     0,     0,
       1,     0,     0,     2,     3,   106,    53,   297,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,     0,
      11,    12,     0,    13,    14,     0,    15,    16,    17,    18,
      19,     0,     0,     1,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     6,     7,     0,     0,     0,     8,
       9,    10,     0,    11,    12,     0,    13,    14,    21,    15,
      16,    17,    18,    19,     0,    81,    82,     0,     0,    83,
      84,    85,     0,     0,     0,     0,     0,    86,    87,    88,
      72,     0,    53,    89,     0,     0,    90,     0,     0,    91,
       0,    21,     0,     0,     0,    92,    93,    94,    95,    96,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    53,     0,     0,     0,     0,
       0,     0,     0,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     0,     0,     0,     0,
       0,     0,     2,     3,     0,   106,    53,     4,     0,     5,
       0,     7,     0,     0,     0,     8,     9,     0,     0,    11,
      12,     0,     0,    14,     0,     0,    16,    17,    18,    19,
       0,     0,    61,     0,     0,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     0,     0,
       0,     8,     9,    10,     0,    11,    12,    21,    13,    14,
       0,    15,    16,    17,    18,    19,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,     0,     0,     0,     0,     2,     3,     0,
       0,     0,     4,    21,     5,    22,     7,     0,     0,     0,
       8,     9,    23,     0,    11,    12,    90,     0,    14,     0,
       0,    16,    17,    18,    19,     0,   145,    94,    95,    96,
       0,     0,    97,    98,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,     0,    99,     0,     0,     0,     0,     0,
     100,   101,   102,   103,   104,   105,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,     0,   233,   298,   234,     0,
       0,     1,     0,    23,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
       0,    11,    12,     0,    13,    14,     0,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    21,
       0,   266,   298,   234,     0,     0,     1,     0,    23,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,     0,    11,    12,     0,    13,
      14,     0,    15,    16,    17,    18,    19,     0,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,    21,     0,    22,     8,     9,    10,
       0,    11,    12,    23,    13,    14,     0,    15,    16,    17,
      18,    19,     0,   138,     0,     0,     0,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       0,     0,     0,     8,     9,    10,     0,    11,    12,    21,
      13,    14,   139,    15,    16,    17,    18,    19,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,    94,
      95,    96,     0,     0,    97,    98,     0,     0,     0,     0,
       0,     0,    90,     0,     0,    21,     0,     0,   328,     0,
       0,     0,   145,    94,    95,    96,    99,     0,    97,    98,
      90,     0,   100,   101,   102,   103,   104,   105,     0,     0,
     145,    94,    95,    96,     0,     0,    97,    98,   155,   332,
      99,     0,     0,    90,     0,     0,   100,   101,   102,   103,
     104,   105,     0,   145,    94,    95,    96,     0,    99,    97,
      98,     0,   155,     0,   100,   101,   102,   103,   104,   105,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   176,
       0,    99,     0,     0,     0,     0,     0,   100,   101,   102,
     103,   104,   105,     1,     0,     0,     2,     3,     0,     0,
       0,     4,   106,     5,     6,     7,     0,     0,     0,     8,
       9,    10,     0,    11,    12,     0,    13,    14,     0,    15,
      16,    17,    18,    19,     0,     0,     0,     0,     0,   306,
       0,     0,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    21,    11,    12,     0,    13,    14,     0,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     0,     7,     0,     0,     0,
       8,     9,     0,     0,    11,    12,     0,    90,    14,     0,
      21,    16,    17,    18,    19,     0,     0,   145,    94,    95,
      96,    90,     0,    97,    98,     0,     0,     0,     0,     0,
       0,   145,    94,    95,    96,     0,     0,    97,    98,     0,
       0,     0,    21,     0,     0,    99,   271,     0,     0,     0,
       0,   100,   101,   102,   103,   104,   105,     0,     0,    99,
       0,    90,   301,     0,     0,   100,   101,   102,   103,   104,
     105,   145,    94,    95,    96,    90,     0,    97,    98,     0,
       0,     0,     0,     0,     0,   145,    94,    95,    96,     0,
       0,    97,    98,     0,     0,     0,     0,     0,     0,    99,
       0,     0,   330,     0,     0,   100,   101,   102,   103,   104,
     105,     0,     0,    99,   335,    90,     0,     0,     0,   100,
     101,   102,   103,   104,   105,   145,    94,    95,    96,    90,
       0,    97,    98,     0,     0,     0,     0,     0,     0,   145,
      94,    95,    96,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,    99,     0,     0,     0,     0,     0,   100,
     101,   102,   103,   104,   105,     0,     0,   178,     0,    90,
       0,     0,     0,   100,   101,   102,   103,   104,   105,   145,
      94,    95,    96,     0,     0,    97,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   183,     0,     0,
       0,     0,     0,   100,   101,   102,   103,   104,   105
};

static const yytype_int16 yycheck[] =
{
       0,    89,    59,    58,   173,    59,    34,     0,   140,    23,
       7,    99,    35,    22,    77,    35,    25,   111,    85,    51,
      82,    50,   155,    68,    85,    82,    26,    27,    82,    43,
      76,    31,   236,    90,    80,    35,    33,    35,    68,    84,
      97,    98,    35,    75,    76,    77,    55,    64,    80,    35,
      35,    72,    81,    99,   111,   187,    86,    63,    58,    65,
      32,    70,    85,   267,    57,    85,    68,    99,    47,   130,
      79,    35,    35,    70,    53,    47,    83,    63,    63,    84,
      65,    74,    84,    35,    70,    57,    68,   175,   257,   151,
     178,    85,   180,   181,   151,   183,   159,   151,    84,    63,
      63,   163,    74,    84,    86,   193,   163,    70,    68,   163,
     171,    63,    35,    65,   208,   209,   210,    68,    70,    82,
      63,   182,    65,    68,    84,    64,   140,   159,    68,    68,
      63,   140,   178,    64,   155,    86,   129,    68,   226,    84,
      63,    63,    82,    65,    71,    72,   178,    70,    70,    45,
      46,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   230,
      64,   192,   234,   187,    68,   269,   309,   234,    70,    82,
     234,    77,    78,    75,    76,   206,    64,    66,    64,    68,
      68,   253,    68,   254,    64,    35,   253,    64,    68,   253,
      63,    68,    65,    64,     6,     7,   227,    68,   236,    11,
      63,    13,   269,    15,    43,    44,    63,    19,    20,   233,
      63,    23,    24,    82,   233,    27,   314,   315,    30,    31,
      32,    33,    69,   233,    47,    48,    80,    40,    41,    42,
     240,    23,   251,   305,   215,   216,   217,   218,   305,   304,
      49,   305,   266,   211,   212,   316,    79,   318,   319,    61,
      63,    43,    65,    83,    67,    25,   266,   324,    64,    51,
     324,   213,   214,    68,   335,    35,    36,    37,    38,    66,
      34,    41,    42,    84,    86,    82,   347,   348,   309,   219,
     220,    82,    64,    75,    76,    77,    35,    35,    80,    35,
      63,   322,    64,    63,   304,    64,    66,    64,    66,    69,
      70,    71,    72,    73,    74,    64,    66,    99,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   222,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    12,    84,    41,    42,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,   223,   221,
     224,    70,    75,    63,   225,   152,    61,   159,    63,   251,
     240,   129,    35,    -1,    69,    70,    71,    72,    73,    74,
      83,    -1,   178,    -1,    -1,    -1,   178,    -1,    -1,    84,
      85,    86,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,     4,     5,    -1,    -1,     8,     9,
      10,    -1,    -1,    84,    85,    86,    16,    17,    18,    -1,
      -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,     4,     5,    -1,    -1,     8,
       9,    10,    -1,    -1,    84,    85,    86,    16,    17,    18,
      -1,    -1,    -1,    22,    -1,    -1,    25,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
       3,    -1,    -1,     6,     7,    84,    85,    86,    11,    -1,
      13,    14,    15,    -1,    -1,    -1,    19,    20,    21,    -1,
      23,    24,    -1,    26,    27,    -1,    29,    30,    31,    32,
      33,    -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    -1,    23,    24,    -1,    26,    27,    61,    29,
      30,    31,    32,    33,    -1,     4,     5,    -1,    -1,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,
      83,    -1,    85,    22,    -1,    -1,    25,    -1,    -1,    28,
      -1,    61,    -1,    -1,    -1,    34,    35,    36,    37,    38,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,     6,     7,    -1,    84,    85,    11,    -1,    13,
      -1,    15,    -1,    -1,    -1,    19,    20,    -1,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    30,    31,    32,    33,
      -1,    -1,     0,    -1,    -1,     3,    -1,    -1,     6,     7,
      -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,    -1,
      -1,    19,    20,    21,    -1,    23,    24,    61,    26,    27,
      -1,    29,    30,    31,    32,    33,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    61,    13,    63,    15,    -1,    -1,    -1,
      19,    20,    70,    -1,    23,    24,    25,    -1,    27,    -1,
      -1,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      -1,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,     3,    -1,    -1,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    61,    -1,    63,    64,    65,    -1,
      -1,     3,    -1,    70,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,    21,
      -1,    23,    24,    -1,    26,    27,    -1,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    63,    64,    65,    -1,    -1,     3,    -1,    70,     6,
       7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,    -1,
      -1,    -1,    19,    20,    21,    -1,    23,    24,    -1,    26,
      27,    -1,    29,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,    11,
      -1,    13,    14,    15,    61,    -1,    63,    19,    20,    21,
      -1,    23,    24,    70,    26,    27,    -1,    29,    30,    31,
      32,    33,    -1,    35,    -1,    -1,    -1,     3,    -1,    -1,
       6,     7,    -1,    -1,    -1,    11,    -1,    13,    14,    15,
      -1,    -1,    -1,    19,    20,    21,    -1,    23,    24,    61,
      26,    27,    64,    29,    30,    31,    32,    33,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    38,    -1,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    61,    -1,    -1,    64,    -1,
      -1,    -1,    35,    36,    37,    38,    63,    -1,    41,    42,
      25,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      35,    36,    37,    38,    -1,    -1,    41,    42,    85,    86,
      63,    -1,    -1,    25,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    35,    36,    37,    38,    -1,    63,    41,
      42,    -1,    85,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,     3,    -1,    -1,     6,     7,    -1,    -1,
      -1,    11,    84,    13,    14,    15,    -1,    -1,    -1,    19,
      20,    21,    -1,    23,    24,    -1,    26,    27,    -1,    29,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      -1,    -1,     3,    -1,    -1,     6,     7,    -1,    -1,    -1,
      11,    -1,    13,    14,    15,    -1,    -1,    -1,    19,    20,
      21,    61,    23,    24,    -1,    26,    27,    -1,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    -1,     6,     7,    -1,
      -1,    -1,    11,    -1,    13,    -1,    15,    -1,    -1,    -1,
      19,    20,    -1,    -1,    23,    24,    -1,    25,    27,    -1,
      61,    30,    31,    32,    33,    -1,    -1,    35,    36,    37,
      38,    25,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    -1,    -1,    41,    42,    -1,
      -1,    -1,    61,    -1,    -1,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    63,
      -1,    25,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    35,    36,    37,    38,    25,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    -1,    63,    64,    25,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    35,    36,    37,    38,    25,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    63,    -1,    25,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    35,
      36,    37,    38,    -1,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     6,     7,    11,    13,    14,    15,    19,    20,
      21,    23,    24,    26,    27,    29,    30,    31,    32,    33,
      35,    61,    63,    70,   110,   111,   114,   115,   116,   117,
     123,   126,   127,   128,   129,   149,   150,   151,    35,    85,
     127,   126,   129,   130,    84,   112,   113,   127,   111,   111,
      35,    85,   111,    85,   110,   111,   142,   143,    63,    65,
     128,     0,   150,    85,    35,   124,   125,    64,   126,   129,
      68,    84,    83,   142,   143,    85,   115,   118,   119,   120,
     126,     4,     5,     8,     9,    10,    16,    17,    18,    22,
      25,    28,    34,    35,    36,    37,    38,    41,    42,    63,
      69,    70,    71,    72,    73,    74,    84,    86,    88,    89,
      91,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   108,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   127,   110,   142,    35,    64,
     111,   131,   132,   133,   134,    35,    66,    91,   105,   109,
     124,    83,    68,    86,   113,    85,   106,   138,   142,   118,
     120,    86,   119,    82,   121,   122,   127,   120,    84,   109,
      84,    82,   140,    63,    35,    63,    84,   108,    63,    91,
      63,    63,    82,    63,    91,    91,   108,   120,   135,    40,
      41,    42,    63,    65,    67,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    83,   107,    94,    70,    75,
      76,    71,    72,    43,    44,    45,    46,    77,    78,    47,
      48,    69,    79,    80,    49,    50,    81,    68,    84,    86,
     144,    86,   140,    63,    65,   127,   129,   136,   137,    64,
      68,    64,    68,    66,    86,   109,   125,   138,   139,    86,
     109,    68,    84,    82,    82,   140,    34,   145,    84,   108,
      84,   135,   108,   108,   140,    64,    63,   129,   136,    64,
      35,    64,    90,   106,   108,    35,   106,    94,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    97,    98,    98,
      99,   100,   101,   102,   103,   108,   106,    86,    64,   131,
     136,    66,   109,   137,    63,    65,    39,   133,    35,    68,
      86,   122,   109,   140,    63,   145,    64,    64,    64,    64,
      94,    64,    68,    66,    82,    64,    64,    66,    64,   131,
      66,   109,    86,   138,   108,    64,   108,   140,    92,   140,
     140,   106,   105,    64,    66,    64,   140,    64,    12,    84,
     140,   140
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
#line 52 "parser.y"
    { (yyval)=checkScope(tablePtr,lineCount); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 53 "parser.y"
    {tempCheckType=4;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 54 "parser.y"
    { addConstant(tablePtr, lineCount);;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 55 "parser.y"
    { makeList(tablePtr, 's', lineCount);;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 56 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); (yyval)=(yyvsp[(2) - (3)]); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 60 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 61 "parser.y"
    { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 62 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 63 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 64 "parser.y"
    { makeList(tablePtr, 'v', lineCount);;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 65 "parser.y"
    { makeList(tablePtr, 'v', lineCount);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 66 "parser.y"
    { makeList(tablePtr, 'o', lineCount);;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 67 "parser.y"
    { makeList(tablePtr, 'o', lineCount);;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 71 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 72 "parser.y"
    { makeList(",",'p', lineCount); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 76 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    { makeList("++",'o', lineCount); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 78 "parser.y"
    { makeList("--",'o', lineCount); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 80 "parser.y"
    { makeList("sizeof",'o', lineCount); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    { makeList("sizeof",'o', lineCount); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 82 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 86 "parser.y"
    { makeList("&",'o', lineCount); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    { makeList("*",'o', lineCount); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 88 "parser.y"
    { makeList("+",'o', lineCount); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    { makeList("-",'o', lineCount); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 90 "parser.y"
    { makeList("~",'o', lineCount); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    { makeList("!",'o', lineCount); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    { makeList("*",'o', lineCount); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    { makeList("/",'o', lineCount); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    { makeList("%",'o', lineCount); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    { makeList("+",'o', lineCount); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 109 "parser.y"
    { makeList("-",'o', lineCount); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    { makeList("<<",'o', lineCount); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    { makeList(">>",'o', lineCount); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    { makeList("<=",'o', lineCount); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    { makeList(">=",'o', lineCount); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 128 "parser.y"
    { makeList("==",'o', lineCount); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    { makeList("!=",'o', lineCount); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    { makeList("&", 'o', lineCount);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 138 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 139 "parser.y"
    { makeList("^", 'o', lineCount); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 143 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    { makeList("|", 'o', lineCount); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 148 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    { makeList("&&", 'o', lineCount); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 153 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 154 "parser.y"
    { makeList("||", 'o', lineCount); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 158 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    { makeList("?:",'o', lineCount); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {(yyval)=(yyvsp[(3) - (3)]); checkType((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]),lineCount);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 168 "parser.y"
    { makeList("=",'o', lineCount); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 169 "parser.y"
    { makeList("*=",'o', lineCount); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    { makeList("/=",'o', lineCount); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    { makeList("%=",'o', lineCount); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    { makeList("+=",'o', lineCount); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 173 "parser.y"
    { makeList("-=",'o', lineCount); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 174 "parser.y"
    { makeList("<<=",'o', lineCount); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 175 "parser.y"
    { makeList(">==",'o', lineCount); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    { makeList("&=",'o', lineCount); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 177 "parser.y"
    { makeList("^=",'o', lineCount); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    { makeList("|=",'o', lineCount); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    { makeList(",", 'p', lineCount); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    { makeList(";", 'p', lineCount);typeBuffer=' '; ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    { makeList(";", 'p', lineCount); typeBuffer=' ';;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    { makeList(",", 'p', lineCount); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 211 "parser.y"
    { makeList("=", 'o', lineCount); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 215 "parser.y"
    { makeList("typedef", 'k', lineCount);;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 216 "parser.y"
    { makeList("extern", 'k', lineCount);;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    { makeList("static", 'k', lineCount);;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    { makeList("auto", 'k', lineCount);;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    { makeList("register", 'k', lineCount);;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    { makeList("void", 'k', lineCount);typeBuffer='v';;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    { makeList("char", 'k', lineCount); typeBuffer='c';;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 225 "parser.y"
    { makeList("short", 'k', lineCount);;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 226 "parser.y"
    { makeList("int", 'k', lineCount); typeBuffer='i';;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    { makeList("long", 'k', lineCount);;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    { makeList("float", 'k', lineCount);	typeBuffer='f';;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 229 "parser.y"
    { makeList("double", 'k', lineCount);;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    { makeList("signed", 'k', lineCount);;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 231 "parser.y"
    { makeList("unsigned", 'k', lineCount);;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 244 "parser.y"
    { makeList("struct", 'k', lineCount);;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 245 "parser.y"
    { makeList("union", 'k', lineCount);;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    { makeList(";", 'p', lineCount); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 266 "parser.y"
    { makeList(",", 'p', lineCount); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 271 "parser.y"
    { makeList(":", 'p', lineCount); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    { makeList(":", 'p', lineCount); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
    { makeList("enum", 'k', lineCount);;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 277 "parser.y"
    { makeList("enum", 'k', lineCount); makeList(tablePtr, 'v', lineCount); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 278 "parser.y"
    { makeList("enum", 'k', lineCount); makeList(tablePtr, 'v', lineCount); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    { makeList(",", 'p', lineCount); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 287 "parser.y"
    { makeList(tablePtr, 'v', lineCount); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    { makeList("=", 'o', lineCount); makeList("tablePtr", 'v', lineCount); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 292 "parser.y"
    { makeList("const", 'k', lineCount); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 293 "parser.y"
    { makeList("volatile", 'k', lineCount); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    {  checkDeclaration(tablePtr,lineCount,scopeCount);;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    {  makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 306 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 307 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 312 "parser.y"
    { makeList("*", 'o', lineCount); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 313 "parser.y"
    { makeList("*", 'o', lineCount); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 314 "parser.y"
    { makeList("*", 'o', lineCount); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    { makeList("*", 'o', lineCount); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    { makeList(",", 'p', lineCount); makeList("::", 'o', lineCount); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 331 "parser.y"
    { makeList(",", 'p', lineCount); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 341 "parser.y"
    { checkDeclaration(tablePtr,lineCount,scopeCount);;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 342 "parser.y"
    { checkDeclaration(tablePtr,lineCount,scopeCount);makeList(",", 'p', lineCount); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 357 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 358 "parser.y"
    { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 359 "parser.y"
    { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 361 "parser.y"
    { makeList("[", 'p', lineCount); makeList("]", 'p', lineCount); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 362 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 363 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 364 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    { makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 369 "parser.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 376 "parser.y"
    { makeList(",", 'p', lineCount); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 389 "parser.y"
    { makeList(tablePtr, 'v', lineCount);  ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 390 "parser.y"
    { makeList(":", 'p', lineCount); makeList("case", 'k', lineCount);;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 391 "parser.y"
    { makeList(":", 'p', lineCount); makeList("default", 'k', lineCount); ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 412 "parser.y"
    { makeList(";", 'p', lineCount); ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 413 "parser.y"
    { makeList(";", 'p', lineCount); ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 418 "parser.y"
    { makeList("if", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount);;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 420 "parser.y"
    { makeList("if", 'k', lineCount);  makeList("else", 'k', lineCount); makeList("(", 'p', lineCount); 					  makeList(")", 'p', lineCount); 
  				;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 423 "parser.y"
    { makeList("switch", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 428 "parser.y"
    { makeList("while", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 430 "parser.y"
    { makeList("do", 'k', lineCount); makeList("while", 'k', lineCount); makeList("(", 'p', lineCount);         				  makeList(")", 'p', lineCount); makeList(";", 'p', lineCount); 
			;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 433 "parser.y"
    { makeList("for", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 435 "parser.y"
    { makeList("for", 'k', lineCount); makeList("(", 'p', lineCount); makeList(")", 'p', lineCount); ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 439 "parser.y"
    { makeList("goto", 'k', lineCount); makeList(";", 'p', lineCount); makeList(tablePtr, 'v', lineCount);;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 440 "parser.y"
    { makeList("continue", 'k', lineCount); makeList(";", 'p', lineCount); ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 441 "parser.y"
    { makeList("break", 'k', lineCount); makeList(";", 'p', lineCount);;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 442 "parser.y"
    { makeList("return", 'k', lineCount); makeList(";", 'p', lineCount);;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 443 "parser.y"
    { makeList("return", 'k', lineCount); makeList(";", 'p', lineCount);;}
    break;



/* Line 1455 of yacc.c  */
#line 3038 "parser.tab.c"
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
#line 463 "parser.y"

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
		printf("%s : %d : Nested Comment\n",sourceCode,lineCount);
    	}
	
		
	
	if(!errorFlag  && !semanticErr  && arrayIndexErr!=1){
		
		printf("\n\n\t\t%s Parsing Completed\n\n",sourceCode);
		
		
	
		FILE *writeParsed=fopen("parsedTable.txt","w");
    		fprintf(writeParsed,"\n\t\t\t\tParsed Table\n\n\t\tToken\t\t\t\t\t\tType\t\t\t\t\t\t\tLine Number\n");
      		for(tokenList *ptr=parsedPtr;ptr!=NULL;ptr=ptr->next){
  			fprintf(writeParsed,"\n%20s%30.30s%60s",ptr->token,ptr->type,ptr->line);
		}
  		FILE *writeSymbol=fopen("symbolTable.txt","w");
    		fprintf(writeSymbol,"\n\t\t\t\tSymbolTable\n\n\t\tToken\t\t\t\tType\t\tLine Number\t\t\t\tScope\t\tFunction Number\n");
      		for(tokenList *ptr=symbolPtr;ptr!=NULL;ptr=ptr->next){
  			fprintf(writeSymbol,"\n%20s%30.30s%30s%30s\t%d\t%d",ptr->token,ptr->type,ptr->line,ptr->scope,ptr->scopeValue,ptr->funcCount+1);
		}
		
		FILE *writeConstant=fopen("constantTable.txt","w");
    		fprintf(writeConstant,"\n   \t\t\t\t\t\t\t\tConstant Table \n\n \t\t\t\t\t\tValue\t\t\t\t\t\t\tLine Number\n");
    		for(tokenList *ptr=constantPtr;ptr!=NULL;ptr=ptr->next)
  		fprintf(writeConstant,"\n%50s%60s",ptr->token,ptr->line);
  	
  	
  		fclose(writeSymbol);
		fclose(writeConstant);
		fclose(writeParsed);
	}
printf("\n\n");	
}



