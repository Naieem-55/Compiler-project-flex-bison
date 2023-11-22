
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
#line 1 "code.y"

	#include<stdio.h>
	#include <math.h>
	int cnt=1,cntt=0,val,track=0;
	typedef struct entry {
    	char *str;
    	int n;
		int isArray;
		int size;
		int arrayVal[1000];
	}vartable;
	vartable fntn[1000],f[1000],vptr[1000];
	
	int cnt2=1; 
	
		int total_Var=0;
		int is_var_exist(char *varName){
            for(int i = 0 ; i<total_Var; i++){
                if(strcmp(vptr[i].str,varName)==0){
                    return 1;
                }
            }
            return 0;
        }

        int get_Var_Id(char *varName){
            for(int i = 0 ; i<total_Var; i++){
                if(strcmp(vptr[i].str,varName)==0){
                    return i;
                }
            }
            return -1;
        }
		void showExistance(char *varName){
            
            printf("%s is already Declared.\n",varName);
            
        }

		void declare_Var_table(char *varName,int val)
		{
			vptr[total_Var].str = varName;
			vptr[total_Var].n = val;
			
		}

	


/* Line 189 of yacc.c  */
#line 123 "code.tab.c"

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
     FUNC_NUM = 258,
     NUM = 259,
     VAR = 260,
     FUNC_STR = 261,
     IF = 262,
     ELIF = 263,
     ELSE = 264,
     MAIN = 265,
     INT = 266,
     FLOAT = 267,
     DOUBLE = 268,
     CHAR = 269,
     LP = 270,
     RP = 271,
     LB = 272,
     RB = 273,
     CM = 274,
     SM = 275,
     PLUS = 276,
     MINUS = 277,
     MULT = 278,
     DIV = 279,
     POW = 280,
     ASSIGN = 281,
     FOR = 282,
     FOR_END = 283,
     COL = 284,
     WHILE = 285,
     WHILE_END = 286,
     BREAK = 287,
     DEFAULT = 288,
     CASE = 289,
     SWITCH = 290,
     SWITCH_END = 291,
     inc = 292,
     dec = 293,
     MOD = 294,
     LTE = 295,
     GTE = 296,
     EEQL = 297,
     NEQL = 298,
     AND = 299,
     OR = 300,
     NOT = 301,
     XOR = 302,
     SIN = 303,
     COS = 304,
     TAN = 305,
     SQRT = 306,
     LOG = 307,
     LOG2 = 308,
     LN = 309,
     FACTORIAL = 310,
     ARRAY = 311,
     size_of = 312,
     CALL = 313,
     GT = 314,
     LT = 315
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 50 "code.y"

        int number;
        char *string;



/* Line 214 of yacc.c  */
#line 226 "code.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 238 "code.tab.c"

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   896

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNRULES -- Number of states.  */
#define YYNSTATES  227

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      61,    62,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,    11,    14,    15,    19,    23,    27,
      28,    37,    44,    45,    49,    51,    54,    55,    59,    61,
      62,    67,    77,    79,    81,    83,    87,    89,    93,    95,
      97,   106,   109,   113,   118,   126,   134,   146,   157,   168,
     181,   183,   186,   187,   190,   196,   201,   203,   205,   210,
     214,   218,   222,   226,   230,   234,   238,   242,   245,   248,
     251,   254,   258,   262,   266,   270,   274,   278,   282,   286,
     289,   293,   298,   303,   308,   313,   318,   323,   328,   331,
     333,   337,   341,   345,   349
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    -1,    10,    15,    16,    17,    65,    18,
      -1,    66,    64,    -1,    -1,    65,    75,    65,    -1,    65,
      71,    65,    -1,    65,    67,    65,    -1,    -1,     3,     5,
      15,    68,    16,    17,    75,    18,    -1,    58,     5,    15,
      70,    16,    20,    -1,    -1,    68,    19,    69,    -1,    69,
      -1,    72,     5,    -1,    -1,    70,    19,     4,    -1,     4,
      -1,    -1,    71,    72,    73,    20,    -1,    56,    15,    72,
      16,    15,     4,    16,     5,    20,    -1,    11,    -1,    12,
      -1,    14,    -1,    73,    19,    74,    -1,    74,    -1,     5,
      26,    80,    -1,     5,    -1,    20,    -1,    35,    15,    81,
      16,    36,    17,    76,    18,    -1,    80,    20,    -1,    57,
       5,    20,    -1,     5,    26,    80,    20,    -1,     5,    15,
       4,    16,    26,    80,    20,    -1,     7,    15,    80,    16,
      17,    75,    18,    -1,     7,    15,    80,    16,    17,    75,
      18,     9,    17,    75,    18,    -1,    27,    15,     4,    29,
       4,    16,    28,    17,    80,    18,    -1,    30,    15,     4,
      60,     4,    16,    31,    17,    80,    18,    -1,    80,    42,
      30,    15,     4,    59,     4,    16,    31,    17,    80,    18,
      -1,    77,    -1,    77,    79,    -1,    -1,    77,    78,    -1,
      34,     4,    29,    80,    20,    -1,    33,    29,    80,    20,
      -1,     4,    -1,     5,    -1,     5,    15,     4,    16,    -1,
      80,    21,    80,    -1,    80,    22,    80,    -1,    80,    23,
      80,    -1,    80,    24,    80,    -1,    80,    25,    80,    -1,
      80,    60,    80,    -1,    80,    59,    80,    -1,    15,    80,
      16,    -1,    80,    37,    -1,    80,    38,    -1,    21,    80,
      -1,    22,    80,    -1,    80,    39,    80,    -1,    80,    40,
      80,    -1,    80,    41,    80,    -1,    80,    42,    80,    -1,
      80,    43,    80,    -1,    80,    44,    80,    -1,    80,    45,
      80,    -1,    80,    47,    80,    -1,    46,    80,    -1,    61,
      80,    62,    -1,    48,    61,    80,    62,    -1,    49,    61,
      80,    62,    -1,    50,    61,    80,    62,    -1,    52,    61,
      80,    62,    -1,    53,    61,    80,    62,    -1,    54,    61,
      80,    62,    -1,    51,    61,    80,    62,    -1,    80,    55,
      -1,     4,    -1,    81,    21,    81,    -1,    81,    22,    81,
      -1,    81,    23,    81,    -1,    81,    24,    81,    -1,    81,
      25,    81,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    79,    80,    83,    85,    87,    89,    91,
      95,   122,   128,   129,   130,   132,   135,   136,   137,   141,
     142,   143,   169,   171,   173,   177,   178,   180,   201,   225,
     226,   228,   232,   238,   259,   285,   296,   306,   315,   331,
     347,   348,   351,   352,   355,   364,   373,   374,   381,   389,
     393,   395,   397,   408,   411,   413,   415,   417,   418,   420,
     424,   429,   435,   439,   443,   447,   451,   456,   461,   466,
     470,   474,   480,   485,   490,   495,   500,   504,   509,   520,
     522,   524,   526,   528,   538
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNC_NUM", "NUM", "VAR", "FUNC_STR",
  "IF", "ELIF", "ELSE", "MAIN", "INT", "FLOAT", "DOUBLE", "CHAR", "LP",
  "RP", "LB", "RB", "CM", "SM", "PLUS", "MINUS", "MULT", "DIV", "POW",
  "ASSIGN", "FOR", "FOR_END", "COL", "WHILE", "WHILE_END", "BREAK",
  "DEFAULT", "CASE", "SWITCH", "SWITCH_END", "inc", "dec", "MOD", "LTE",
  "GTE", "EEQL", "NEQL", "AND", "OR", "NOT", "XOR", "SIN", "COS", "TAN",
  "SQRT", "LOG", "LOG2", "LN", "FACTORIAL", "ARRAY", "size_of", "CALL",
  "GT", "LT", "'('", "')'", "$accept", "program", "cstatement",
  "func_block", "func_call", "Parameter", "para", "pass_Parameter",
  "cdeclaration", "TYPE", "ID1", "ID", "statement", "BASE", "Bas", "Cs",
  "Dflt", "expression", "switch_expression", 0
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
     315,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    64,    64,    65,    65,    65,    65,    65,
      66,    67,    68,    68,    68,    69,    70,    70,    70,    71,
      71,    71,    72,    72,    72,    73,    73,    74,    74,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      76,    76,    77,    77,    78,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      81,    81,    81,    81,    81
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     6,     2,     0,     3,     3,     3,     0,
       8,     6,     0,     3,     1,     2,     0,     3,     1,     0,
       4,     9,     1,     1,     1,     3,     1,     3,     1,     1,
       8,     2,     3,     4,     7,     7,    11,    10,    10,    12,
       1,     2,     0,     2,     5,     4,     1,     1,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     4,     4,     4,     4,     4,     4,     4,     2,     1,
       3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     0,     0,     2,     0,     0,     1,     4,    12,
       0,    22,    23,    24,     0,    14,     0,     5,     0,     0,
      15,    19,     0,    13,    46,    47,     0,     0,     3,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     5,     5,
       0,     0,     0,     0,     0,    47,     0,    59,    60,     0,
       0,     0,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     7,     0,     6,    31,     0,
       0,     0,     0,     0,    57,    58,     0,     0,     0,     0,
       0,     0,     0,     0,    78,     0,     0,    10,     0,     0,
       0,     0,    56,     0,     0,     0,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    32,    16,    70,    28,
       0,    26,    49,    50,    51,    52,    53,    61,    62,    63,
       0,    64,    65,    66,    67,    68,    55,    54,    48,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    77,    74,    75,    76,     0,    18,     0,
       0,     0,    20,     0,     0,     0,    48,     0,     0,     0,
      80,    81,    82,    83,    84,     0,     0,     0,    27,    25,
       0,     0,     0,     0,     0,    42,     0,    11,    17,     0,
      34,    35,     0,     0,     0,    40,     0,     0,     0,     0,
       0,    30,     0,     0,    43,    41,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     0,    37,    38,     0,     0,
       0,    36,    45,     0,     0,    44,    39
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    21,     4,    47,    14,    15,   159,    48,    16,
     120,   121,    49,   194,   195,   204,   205,    50,   107
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -103
static const yytype_int16 yypact[] =
{
       2,     4,     8,    29,     2,    10,    35,  -103,  -103,    -1,
      50,  -103,  -103,  -103,     1,  -103,    26,  -103,    55,    -1,
    -103,    66,   203,  -103,  -103,    -8,    59,   268,  -103,  -103,
     268,   268,    60,    65,    67,   268,    22,    28,    33,    34,
      38,    41,    42,    70,    99,   100,   268,  -103,    -1,  -103,
     677,    88,   103,   268,   268,    94,   309,   841,   841,   106,
     107,   109,   816,   268,   268,   268,   268,   268,   268,   268,
      -1,   101,   110,   460,   148,   148,   121,   148,  -103,   268,
     268,   268,   268,   268,  -103,  -103,   268,   268,   268,   254,
     268,   268,   268,   268,  -103,   268,   268,  -103,   112,   705,
     349,   125,  -103,   268,   102,    72,  -103,   118,   487,   514,
     541,   568,   595,   622,   649,   114,  -103,   131,  -103,   119,
      15,  -103,   841,   841,   -23,   -23,    53,   816,   190,   190,
     123,   190,   190,   816,   816,   816,   190,   190,   120,  -103,
     130,   132,   145,   146,   115,   109,   109,   109,   109,   109,
    -103,  -103,  -103,  -103,  -103,  -103,  -103,   139,  -103,    14,
     268,   121,  -103,   152,   268,   203,  -103,   141,   142,   143,
      25,    25,   111,   111,  -103,   155,   144,   157,   816,  -103,
     108,   733,   147,   134,   135,  -103,   158,  -103,  -103,   167,
    -103,   168,   159,   162,   163,    24,   175,   166,   169,   268,
     268,  -103,   156,   184,  -103,  -103,   170,   160,   203,   377,
     405,   268,   174,  -103,   172,   177,  -103,  -103,   761,   268,
     268,  -103,  -103,   789,   433,  -103,  -103
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,   212,    30,  -103,  -103,  -103,   198,  -103,  -103,   -42,
    -103,    58,   -21,  -103,  -103,  -103,  -103,   -27,  -102
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      56,    51,    83,    57,    58,     1,    76,    52,    62,     5,
      11,    12,     2,    13,    84,    85,    86,    18,    53,    73,
      19,    91,    92,     6,    93,     9,    99,   100,   115,     7,
     176,    20,    94,   177,   161,   162,   108,   109,   110,   111,
     112,   113,   114,   170,   171,   172,   173,   174,   147,   148,
     149,    10,   122,   123,   124,   125,   126,   202,   203,   127,
     128,   129,   131,   132,   133,   134,   135,    17,   136,   137,
      24,    25,    22,    26,    54,    59,   131,    74,    75,    77,
      60,    27,    61,    63,    28,    70,    29,    30,    31,    64,
      84,    85,    86,    32,    65,    66,    33,    91,    92,    67,
      93,    34,    68,    69,    71,    72,    97,    98,    94,   101,
     104,   105,    35,   106,    36,    37,    38,    39,    40,    41,
      42,   116,    43,    44,    45,   117,   119,    46,   138,   141,
     157,   142,   143,   178,   144,   158,   149,   181,   163,   145,
     146,   147,   148,   149,   182,   160,   164,   165,   166,   167,
     168,   169,    24,    25,   175,    26,   180,   183,   184,   186,
     185,   188,   192,    27,   187,   191,   193,   189,    29,    30,
      31,   197,   209,   210,   196,    32,   199,   198,    33,   200,
     206,   201,   207,    34,   218,   211,   208,   215,   212,   220,
     213,   214,   223,   224,    35,   221,    36,    37,    38,    39,
      40,    41,    42,   219,    43,    44,    45,    24,    25,    46,
      26,    79,    80,    81,    82,    83,     8,    23,    27,   179,
       0,     0,     0,    29,    30,    31,     0,    84,    85,    86,
      32,     0,     0,    33,    91,    92,     0,    93,    34,     0,
       0,     0,     0,     0,     0,    94,     0,     0,     0,    35,
       0,    36,    37,    38,    39,    40,    41,    42,    24,    55,
      44,     0,     0,     0,    46,     0,     0,     0,     0,    27,
       0,     0,    24,    55,     0,    30,    31,     0,     0,     0,
       0,     0,     0,    27,   130,     0,     0,     0,     0,    30,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,     0,    36,    37,    38,    39,    40,    41,    42,     0,
       0,     0,     0,     0,    35,    46,    36,    37,    38,    39,
      40,    41,    42,     0,     0,   102,     0,     0,     0,    46,
      79,    80,    81,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,   103,    90,    91,    92,     0,    93,     0,     0,     0,
       0,     0,     0,     0,    94,   140,     0,     0,    95,    96,
      79,    80,    81,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,   103,    90,    91,    92,   216,    93,     0,    79,    80,
      81,    82,    83,     0,    94,     0,     0,     0,    95,    96,
       0,     0,     0,     0,    84,    85,    86,    87,    88,   103,
      90,    91,    92,   217,    93,     0,    79,    80,    81,    82,
      83,     0,    94,     0,     0,     0,    95,    96,     0,     0,
       0,     0,    84,    85,    86,    87,    88,   103,    90,    91,
      92,   226,    93,     0,    79,    80,    81,    82,    83,     0,
      94,     0,     0,     0,    95,    96,     0,     0,     0,     0,
      84,    85,    86,    87,    88,   103,    90,    91,    92,     0,
      93,    79,    80,    81,    82,    83,     0,     0,    94,     0,
       0,     0,    95,    96,     0,     0,     0,    84,    85,    86,
      87,    88,   103,    90,    91,    92,     0,    93,    79,    80,
      81,    82,    83,     0,     0,    94,     0,     0,     0,    95,
      96,     0,   118,     0,    84,    85,    86,    87,    88,   103,
      90,    91,    92,     0,    93,    79,    80,    81,    82,    83,
       0,     0,    94,     0,     0,     0,    95,    96,     0,   150,
       0,    84,    85,    86,    87,    88,   103,    90,    91,    92,
       0,    93,    79,    80,    81,    82,    83,     0,     0,    94,
       0,     0,     0,    95,    96,     0,   151,     0,    84,    85,
      86,    87,    88,   103,    90,    91,    92,     0,    93,    79,
      80,    81,    82,    83,     0,     0,    94,     0,     0,     0,
      95,    96,     0,   152,     0,    84,    85,    86,    87,    88,
     103,    90,    91,    92,     0,    93,    79,    80,    81,    82,
      83,     0,     0,    94,     0,     0,     0,    95,    96,     0,
     153,     0,    84,    85,    86,    87,    88,   103,    90,    91,
      92,     0,    93,    79,    80,    81,    82,    83,     0,     0,
      94,     0,     0,     0,    95,    96,     0,   154,     0,    84,
      85,    86,    87,    88,   103,    90,    91,    92,     0,    93,
      79,    80,    81,    82,    83,     0,     0,    94,     0,     0,
       0,    95,    96,     0,   155,     0,    84,    85,    86,    87,
      88,   103,    90,    91,    92,     0,    93,    78,    79,    80,
      81,    82,    83,     0,    94,     0,     0,     0,    95,    96,
       0,   156,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,    92,     0,    93,   139,    79,    80,    81,    82,
      83,     0,    94,     0,     0,     0,    95,    96,     0,     0,
       0,     0,    84,    85,    86,    87,    88,   103,    90,    91,
      92,     0,    93,   190,    79,    80,    81,    82,    83,     0,
      94,     0,     0,     0,    95,    96,     0,     0,     0,     0,
      84,    85,    86,    87,    88,   103,    90,    91,    92,     0,
      93,   222,    79,    80,    81,    82,    83,     0,    94,     0,
       0,     0,    95,    96,     0,     0,     0,     0,    84,    85,
      86,    87,    88,   103,    90,    91,    92,     0,    93,   225,
      79,    80,    81,    82,    83,     0,    94,     0,     0,     0,
      95,    96,     0,     0,     0,     0,    84,    85,    86,    87,
      88,   103,    90,    91,    92,     0,    93,    79,    80,    81,
      82,    83,     0,     0,    94,     0,     0,     0,    95,    96,
       0,     0,     0,    84,    85,    86,    87,    88,   103,    90,
      91,    92,     0,    93,    81,    82,    83,     0,     0,     0,
       0,    94,     0,     0,     0,    95,    96,     0,    84,    85,
      86,     0,     0,     0,     0,    91,    92,     0,    93,     0,
       0,     0,     0,     0,     0,     0,    94
};

static const yytype_int16 yycheck[] =
{
      27,    22,    25,    30,    31,     3,    48,    15,    35,     5,
      11,    12,    10,    14,    37,    38,    39,    16,    26,    46,
      19,    44,    45,    15,    47,    15,    53,    54,    70,     0,
      16,     5,    55,    19,    19,    20,    63,    64,    65,    66,
      67,    68,    69,   145,   146,   147,   148,   149,    23,    24,
      25,    16,    79,    80,    81,    82,    83,    33,    34,    86,
      87,    88,    89,    90,    91,    92,    93,    17,    95,    96,
       4,     5,    17,     7,    15,    15,   103,    47,    48,    49,
      15,    15,    15,    61,    18,    15,    20,    21,    22,    61,
      37,    38,    39,    27,    61,    61,    30,    44,    45,    61,
      47,    35,    61,    61,     5,     5,    18,     4,    55,    15,
       4,     4,    46,     4,    48,    49,    50,    51,    52,    53,
      54,    20,    56,    57,    58,    15,     5,    61,    16,     4,
      16,    29,    60,   160,    16,     4,    25,   164,    15,    21,
      22,    23,    24,    25,   165,    26,    26,    17,    16,     4,
       4,    36,     4,     5,    15,     7,     4,    16,    16,     4,
      17,     4,    28,    15,    20,    18,    31,    59,    20,    21,
      22,     4,   199,   200,    16,    27,    17,     9,    30,    17,
       5,    18,    16,    35,   211,    29,    17,   208,     4,    17,
      20,    31,   219,   220,    46,    18,    48,    49,    50,    51,
      52,    53,    54,    29,    56,    57,    58,     4,     5,    61,
       7,    21,    22,    23,    24,    25,     4,    19,    15,   161,
      -1,    -1,    -1,    20,    21,    22,    -1,    37,    38,    39,
      27,    -1,    -1,    30,    44,    45,    -1,    47,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,     4,     5,
      57,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    15,
      -1,    -1,     4,     5,    -1,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    30,    -1,    -1,    -1,    -1,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    -1,
      -1,    -1,    -1,    -1,    46,    61,    48,    49,    50,    51,
      52,    53,    54,    -1,    -1,    16,    -1,    -1,    -1,    61,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    16,    -1,    -1,    59,    60,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    18,    47,    -1,    21,    22,
      23,    24,    25,    -1,    55,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    18,    47,    -1,    21,    22,    23,    24,
      25,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    18,    47,    -1,    21,    22,    23,    24,    25,    -1,
      55,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    21,    22,    23,    24,    25,    -1,    -1,    55,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    47,    21,    22,
      23,    24,    25,    -1,    -1,    55,    -1,    -1,    -1,    59,
      60,    -1,    62,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    21,    22,    23,    24,    25,
      -1,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,    62,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    21,    22,    23,    24,    25,    -1,    -1,    55,
      -1,    -1,    -1,    59,    60,    -1,    62,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    21,
      22,    23,    24,    25,    -1,    -1,    55,    -1,    -1,    -1,
      59,    60,    -1,    62,    -1,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    47,    21,    22,    23,    24,
      25,    -1,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,
      62,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    21,    22,    23,    24,    25,    -1,    -1,
      55,    -1,    -1,    -1,    59,    60,    -1,    62,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    47,
      21,    22,    23,    24,    25,    -1,    -1,    55,    -1,    -1,
      -1,    59,    60,    -1,    62,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    20,    21,    22,
      23,    24,    25,    -1,    55,    -1,    -1,    -1,    59,    60,
      -1,    62,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    20,    21,    22,    23,    24,
      25,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    20,    21,    22,    23,    24,    25,    -1,
      55,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    20,    21,    22,    23,    24,    25,    -1,    55,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    20,
      21,    22,    23,    24,    25,    -1,    55,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    21,    22,    23,
      24,    25,    -1,    -1,    55,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    23,    24,    25,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    59,    60,    -1,    37,    38,
      39,    -1,    -1,    -1,    -1,    44,    45,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    10,    64,    66,     5,    15,     0,    64,    15,
      16,    11,    12,    14,    68,    69,    72,    17,    16,    19,
       5,    65,    17,    69,     4,     5,     7,    15,    18,    20,
      21,    22,    27,    30,    35,    46,    48,    49,    50,    51,
      52,    53,    54,    56,    57,    58,    61,    67,    71,    75,
      80,    75,    15,    26,    15,     5,    80,    80,    80,    15,
      15,    15,    80,    61,    61,    61,    61,    61,    61,    61,
      15,     5,     5,    80,    65,    65,    72,    65,    20,    21,
      22,    23,    24,    25,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    47,    55,    59,    60,    18,     4,    80,
      80,    15,    16,    42,     4,     4,     4,    81,    80,    80,
      80,    80,    80,    80,    80,    72,    20,    15,    62,     5,
      73,    74,    80,    80,    80,    80,    80,    80,    80,    80,
      30,    80,    80,    80,    80,    80,    80,    80,    16,    20,
      16,     4,    29,    60,    16,    21,    22,    23,    24,    25,
      62,    62,    62,    62,    62,    62,    62,    16,     4,    70,
      26,    19,    20,    15,    26,    17,    16,     4,     4,    36,
      81,    81,    81,    81,    81,    15,    16,    19,    80,    74,
       4,    80,    75,    16,    16,    17,     4,    20,     4,    59,
      20,    18,    28,    31,    76,    77,    16,     4,     9,    17,
      17,    18,    33,    34,    78,    79,     5,    16,    17,    80,
      80,    29,     4,    20,    31,    75,    18,    18,    80,    29,
      17,    18,    20,    80,    80,    20,    18
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
        case 3:

/* Line 1455 of yacc.c  */
#line 79 "code.y"
    { printf("\nSuccessful compilation\n"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 96 "code.y"
    {
			{
				int id = get_Var_Id((yyvsp[(2) - (8)].string));
            
            
            	if(id!=-1)
            	{
                	printf("already declared\n");
            	}
            	else
            	{
                	vptr[total_Var].str=(yyvsp[(2) - (8)].string);
					printf("func save %s\n",(yyvsp[(2) - (8)].string));
                	vptr[total_Var].n= (yyvsp[(7) - (8)].string);
					printf("%d func output %d\n",total_Var,(yyvsp[(7) - (8)].string));
                	total_Var++;
            	}


			}
			
			
			printf("Function name : %s\n",(yyvsp[(2) - (8)].string));
	
		;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 123 "code.y"
    {
			int id = get_Var_Id((yyvsp[(2) - (6)].string));
			printf("%s Fuction called\n",(yyvsp[(2) - (6)].string));
			printf("output of fuction : %d\n",vptr[id].n);									;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 132 "code.y"
    {printf("Parameter %s: %s\n",(yyvsp[(1) - (2)].string),(yyvsp[(2) - (2)].string));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 142 "code.y"
    { printf("\nvalid declaration\n"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 143 "code.y"
    {
					
					int id = get_Var_Id((yyvsp[(8) - (9)].string));

            
            		if(id!=-1)
            		{	
                		printf("already declared\n");
            		}
            		else
            		{
                		vptr[total_Var].isArray = 1;
						vptr[total_Var].str = (yyvsp[(8) - (9)].string) ;
                		vptr[total_Var].size = (yyvsp[(6) - (9)].number);
                		total_Var++;
            		}
					
					printf("Array declaration Successful\n");
					printf("Printing table\n");
					for(int i = 0 ; i<total_Var; i++){
                		printf("%d %s\n",i,vptr[i].str);
                	}
            
 
				;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 169 "code.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string);  ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 171 "code.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string);  ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 173 "code.y"
    { (yyval.string) = (yyvsp[(1) - (1)].string);  ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 177 "code.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 178 "code.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 181 "code.y"
    {
				int id = get_Var_Id((yyvsp[(1) - (3)].string));
				
            	if(id==-1)
            	{

					vptr[total_Var].str=(yyvsp[(1) - (3)].string);
                	vptr[total_Var].n=(yyvsp[(3) - (3)].number);
                	total_Var++;

                	
            	}
            	else
            	{
                	vptr[id].str=(yyvsp[(1) - (3)].string);
                	vptr[id].n=(yyvsp[(3) - (3)].number);
            	}


			;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 203 "code.y"
    {
				int id = get_Var_Id((yyvsp[(1) - (1)].string));
            
            
            	if(id!=-1)
            	{
                	printf("already declared\n");
            	}
            	else
            	{
                	vptr[total_Var].str=(yyvsp[(1) - (1)].string);
                	vptr[total_Var].n=0;
                	total_Var++;
            	}


			;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 226 "code.y"
    {printf("SWITCH case.\n");val=(yyvsp[(3) - (8)].number);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 228 "code.y"
    {
								(yyval.string) = (yyvsp[(1) - (2)].number);
								printf("\nvalue of expression: %d\n", ((yyvsp[(1) - (2)].number))); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 232 "code.y"
    {
									int id = get_Var_Id((yyvsp[(2) - (3)].string));
									printf("total size of %s is %d \n",(yyvsp[(2) - (3)].string),vptr[id].size);;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 239 "code.y"
    {
				int id = get_Var_Id((yyvsp[(1) - (4)].string));
				
            	if(id==-1)
            	{

					vptr[total_Var].str=(yyvsp[(1) - (4)].string);
                	vptr[total_Var].n=(yyvsp[(3) - (4)].number);
                	total_Var++;

                	
            	}
            	else
            	{
                	vptr[id].str=(yyvsp[(1) - (4)].string);
                	vptr[id].n=(yyvsp[(3) - (4)].number);
            	}

			;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 260 "code.y"
    {
				int id = get_Var_Id((yyvsp[(1) - (7)].string));
				
            	if(id==-1)
            	{

					/* error */

                	
            	}
            	else
            	{
                	vptr[id].arrayVal[(yyvsp[(3) - (7)].number)] = (yyvsp[(6) - (7)].number);
            	}

				/*
				for(int i=0;i<total_Var;i++)
				{
					printf("%s",vptr[i].str);
					printf(" %d\n",vptr[i].n);
				}
				*/ 

			;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 285 "code.y"
    {
								if((yyvsp[(3) - (7)].number))
								{
									printf("\nTrue conditioin. IF executes : %d\n",((yyvsp[(6) - (7)].string)));
								}
								else
								{
									printf("\nFalse condition.If not executes\n");
								}
							;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 296 "code.y"
    {
								 	if((yyvsp[(3) - (11)].number))
									{
										printf("\nTrue conditioin. IF executes : %d\n",(yyvsp[(6) - (11)].string));
									}
									else
									{
										printf("\nFalse condition. Else executes %d\n",(yyvsp[(10) - (11)].string));
									}
								   ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 306 "code.y"
    {
	   printf("For Loop :\n");
	   int i;
	   for(i=(yyvsp[(3) - (10)].number);i<(yyvsp[(5) - (10)].number);i++){
	   printf("Iteration no : %d and expression or statement value : %d\n",i,(yyvsp[(9) - (10)].number));
	   }
	;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 315 "code.y"
    {
								int i = (yyvsp[(5) - (10)].number),j=0;
								printf("While LOOP:\n");
								while((yyvsp[(3) - (10)].number) < i)
								{
									printf("Iteration no : %d and expression or statement value : %d\n" ,j, (yyvsp[(9) - (10)].number));
									i--;
									j++;
								}
								printf("\n");
								
										

						;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 331 "code.y"
    {
								int i = (yyvsp[(7) - (12)].number),j=0;
								printf("While LOOP:\n");
								while((yyvsp[(5) - (12)].number) > i)
								{
									printf("Iteration no : %d and expression or statement value : %d\n" ,j, (yyvsp[(9) - (12)].string));
									i++;
									j++;
								}
								printf("\n");
								
										

						;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 355 "code.y"
    {
						
						if(val==(yyvsp[(2) - (5)].number)){
							  track=1;
							  printf("\nCase No : %d  and Result :  %d\n",(yyvsp[(2) - (5)].number),(yyvsp[(4) - (5)].number));
						}
					;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 364 "code.y"
    {
						if(track!=1){
							printf("\nResult in default Value is :  %d\n",(yyvsp[(3) - (4)].number));
						}
						track=0;
					;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 373 "code.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number); 	;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 375 "code.y"
    {
				int id = get_Var_Id((yyvsp[(1) - (1)].string));
            	(yyval.number) = vptr[id].n;

			;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 382 "code.y"
    {
				int id = get_Var_Id((yyvsp[(1) - (4)].string));
            	(yyval.number) = vptr[id].arrayVal[(yyvsp[(3) - (4)].number)];

			;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 389 "code.y"
    {
		 (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number);
		 printf("%d + %d : \n",(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 393 "code.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) - (yyvsp[(3) - (3)].number); printf("%d - %d : \n",(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 395 "code.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * (yyvsp[(3) - (3)].number); printf("%d * %d : \n",(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 397 "code.y"
    { 	if((yyvsp[(3) - (3)].number)) 
				  		{
				     			(yyval.number) = (yyvsp[(1) - (3)].number) / (yyvsp[(3) - (3)].number);
								printf("%d / %d : \n",(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));
				  		}
				  		else
				  		{
							(yyval.number) = 0;
							printf("\ndivision by zero error\t");
				  		} 	
				    	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 408 "code.y"
    { (yyval.number) = pow((yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number)); printf("%d ^ %d : \n",(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 411 "code.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) < (yyvsp[(3) - (3)].number); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 413 "code.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) > (yyvsp[(3) - (3)].number); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 415 "code.y"
    { (yyval.number) = (yyvsp[(2) - (3)].number);	;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 417 "code.y"
    { (yyval.number)=(yyvsp[(1) - (2)].number)+1; printf("inc: %d\n",(yyval.number));;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 418 "code.y"
    { (yyval.number)=(yyvsp[(1) - (2)].number)-1; printf("dec: %d\n",(yyval.number));;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 421 "code.y"
    {
        (yyval.number) = (yyvsp[(2) - (2)].number);
    ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 425 "code.y"
    {
        (yyval.number) = -(yyvsp[(2) - (2)].number);
    ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 430 "code.y"
    {

        (yyval.number) = (int)(yyvsp[(1) - (3)].number) % (int)(yyvsp[(3) - (3)].number);
    ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 436 "code.y"
    {
        (yyval.number) = ((yyvsp[(1) - (3)].number) <= (yyvsp[(3) - (3)].number));
    ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 440 "code.y"
    {
        (yyval.number) = ((yyvsp[(1) - (3)].number) >= (yyvsp[(3) - (3)].number));
    ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 444 "code.y"
    {
        (yyval.number) = ((yyvsp[(1) - (3)].number) == (yyvsp[(3) - (3)].number));
    ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 448 "code.y"
    {
        (yyval.number) = ((yyvsp[(1) - (3)].number) != (yyvsp[(3) - (3)].number));
    ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 452 "code.y"
    {
        (yyval.number) = ( (yyvsp[(1) - (3)].number) && (yyvsp[(3) - (3)].number));
		printf("%d AND %d : \n",(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));
    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 457 "code.y"
    {
        (yyval.number) = ((yyvsp[(1) - (3)].number) || (yyvsp[(3) - (3)].number));
		printf("%d OR %d : \n",(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));
    ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 462 "code.y"
    {
        (yyval.number) = ((int)(yyvsp[(1) - (3)].number) ^ (int)(yyvsp[(3) - (3)].number));
		printf("%d XOR %d : \n",(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));
    ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 467 "code.y"
    {
        (yyval.number) = !(yyvsp[(2) - (2)].number);
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 471 "code.y"
    {
        (yyval.number) = (yyvsp[(2) - (3)].number);
    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 475 "code.y"
    {
        (yyval.number) = sin((yyvsp[(3) - (4)].number));
		printf("sin( %d ) : \n",(yyvsp[(3) - (4)].number));

    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 481 "code.y"
    {
        (yyval.number) = cos((yyvsp[(3) - (4)].number));
		printf("cos( %d ) : \n",(yyvsp[(3) - (4)].number));
    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 486 "code.y"
    {
        (yyval.number) = tan((yyvsp[(3) - (4)].number));
		printf("tan( %d ) : \n",(yyvsp[(3) - (4)].number));
    ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 491 "code.y"
    {
        (yyval.number) = log10((yyvsp[(3) - (4)].number));
		printf("log10( %d ) : \n",(yyvsp[(3) - (4)].number));
    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 496 "code.y"
    {
        (yyval.number) = log2((yyvsp[(3) - (4)].number));
		printf("log2( %d ) : \n",(yyvsp[(3) - (4)].number));
    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 501 "code.y"
    {
        (yyval.number) = log((yyvsp[(3) - (4)].number));
    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 505 "code.y"
    {
    	(yyval.number) = sqrt((yyvsp[(3) - (4)].number));
		
    ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 510 "code.y"
    {
                    long long x = 1;
                	for(long long i=1;i<=(yyvsp[(1) - (2)].number);i++)
					 	x*=i;
                    (yyval.number) = x;
                    
                ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 520 "code.y"
    { (yyval.number) = (yyvsp[(1) - (1)].number); val = (yyval.number);	;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 522 "code.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) + (yyvsp[(3) - (3)].number); val = (yyval.number); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 524 "code.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) - (yyvsp[(3) - (3)].number); val = (yyval.number); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 526 "code.y"
    { (yyval.number) = (yyvsp[(1) - (3)].number) * (yyvsp[(3) - (3)].number);  val = (yyval.number);;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 528 "code.y"
    { 	if((yyvsp[(3) - (3)].number)) 
				  		{
				     			(yyval.number) = (yyvsp[(1) - (3)].number) / (yyvsp[(3) - (3)].number); val = (yyval.number);
				  		}
				  		else
				  		{
							(yyval.number) = 0;
							 val = (yyval.number);
				  		} 	
				    	;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 538 "code.y"
    { (yyval.number) = pow((yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));  val = (yyval.number);;}
    break;



/* Line 1455 of yacc.c  */
#line 2473 "code.tab.c"
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
#line 542 "code.y"




int yywrap()
{
return 1;
}


yyerror(char *s){
	printf( "%s\n", s);
}
