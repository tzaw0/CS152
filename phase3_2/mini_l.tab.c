/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "mini_l.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "symboltable.h"

extern int yylex();
extern int yyparse();
extern int l, c;
extern FILE* yyin;

void yyerror(const char* s);

//For symbol table
SymbolTable st = SymbolTable();
bool errorRaised = false;
bool loopScope = false;

//For code generation
vector<string> params;
string code = "";
unsigned int temp_var = 0;
unsigned int curr_loop = 0;
unsigned int curr_if = 0;

char* var_generator() {
  stringstream ss;
  ss << "_temp" << temp_var++;
  return strdup(ss.str().c_str());
}


#line 107 "mini_l.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_MINI_L_TAB_H_INCLUDED
# define YY_YY_MINI_L_TAB_H_INCLUDED
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
    FUNCTION = 258,
    BEGIN_PARAMS = 259,
    END_PARAMS = 260,
    BEGIN_LOCALS = 261,
    END_LOCALS = 262,
    BEGIN_BODY = 263,
    END_BODY = 264,
    INTEGER = 265,
    ARRAY = 266,
    OF = 267,
    IF = 268,
    THEN = 269,
    ENDIF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    BEGINLOOP = 274,
    ENDLOOP = 275,
    CONTINUE = 276,
    BREAK = 277,
    READ = 278,
    WRITE = 279,
    NOT = 280,
    TRUE = 281,
    FALSE = 282,
    RETURN = 283,
    SUB = 284,
    ADD = 285,
    MULT = 286,
    DIV = 287,
    MOD = 288,
    EQ = 289,
    NEQ = 290,
    LT = 291,
    GT = 292,
    LTE = 293,
    GTE = 294,
    SEMICOLON = 295,
    COLON = 296,
    COMMA = 297,
    L_PAREN = 298,
    R_PAREN = 299,
    L_SQUARE_BRACKET = 300,
    R_SQUARE_BRACKET = 301,
    ASSIGN = 302,
    NUMBER = 303,
    IDENT = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 38 "mini_l.y"

  char num[254];
  char id[254];
  struct {
    char * code;
    char * ret;
    char * i;
    unsigned int label_num;
  } node;

#line 220 "mini_l.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_L_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

#define YYUNDEFTOK  2
#define YYMAXUTOK   304


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    94,    94,    97,    98,    99,   109,   110,   111,   112,
     113,   114,   115,   116,   119,   120,   121,   122,   123,   124,
     125,   125,   126,   126,   127,   128,   129,   130,   131,   134,
     135,   136,   137,   140,   151,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   183,   184,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   218,   219,   220,   221,
     222,   223
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
  "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "BEGINLOOP",
  "ENDLOOP", "CONTINUE", "BREAK", "READ", "WRITE", "NOT", "TRUE", "FALSE",
  "RETURN", "SUB", "ADD", "MULT", "DIV", "MOD", "EQ", "NEQ", "LT", "GT",
  "LTE", "GTE", "SEMICOLON", "COLON", "COMMA", "L_PAREN", "R_PAREN",
  "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN", "NUMBER", "IDENT",
  "$accept", "prog_start", "functions", "function", "param_declarations",
  "param_declaration", "local_declarations", "local_declaration",
  "statements", "statement", "$@1", "$@2", "read_var", "write_var",
  "bool_exp", "nots", "comp", "expression", "multiplicative_expr",
  "additive", "multiplicative", "term", "int_var", "arr_var", "parameters",
  "parameter", "identifiers", "numbers", "int_declaration",
  "arr_declaration", "func_declaration", "int_use", "arr_use", "func_use", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF (-66)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-47)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   -40,    29,   -66,     0,   -66,   -66,   -66,   -66,    -8,
      36,   -40,    38,     6,    17,    57,   -40,     1,   -40,   -66,
     -66,   -66,    78,    28,    42,   -66,    44,    83,   -40,    25,
      39,    79,   -66,   -66,   -66,   -66,    52,    74,    74,    85,
     -66,   -66,   -40,   -40,    68,    97,    70,    65,    66,    69,
     -66,    81,   111,    74,   113,    21,   116,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -10,   -66,    45,    34,   -66,   -66,
     -39,   -66,   -66,    79,    68,    68,   -66,   -66,    39,   126,
     -66,    79,    30,    95,   -66,    79,    93,   -66,   -66,    30,
     -66,   -66,   -66,    72,   -66,   -66,   -66,   -66,    76,    92,
     -66,    61,   -13,   -66,   -66,   -66,   -66,   -66,   -66,    30,
      79,   119,   -66,   -66,   -66,    30,    94,   129,   -66,    79,
     -10,   -66,   122,   127,   101,   102,   -66,   135,   132,   104,
     -66,    74,    30,   -66,   -66,   -66,   -66,   -66,   -66,   101,
     -66
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     2,     4,    64,    68,     1,     3,     0,
       0,     7,     0,     0,     0,     0,     7,     0,    11,     6,
      66,    67,     0,     0,     0,     8,     0,     0,    11,     0,
       0,    15,    10,    66,    67,    65,     0,    36,    36,     0,
      26,    27,     0,     0,    46,     0,     0,     0,     0,    69,
      12,     0,     0,    36,     0,    44,     0,    22,    24,    29,
      30,    25,    31,    32,    46,    28,    49,    53,    54,    55,
      69,    56,     5,    15,    46,    46,    70,    59,     0,     0,
      35,    15,    44,     0,    20,    15,     0,    48,    47,    44,
      50,    51,    52,    46,    71,    14,    16,    17,    46,     0,
       9,     0,     0,    37,    38,    39,    40,    41,    42,    44,
      15,     0,    57,    43,    45,    44,     0,     0,    18,    15,
      46,    33,     0,     0,    63,     0,    60,     0,     0,     0,
      21,    36,    44,    61,    58,    13,    19,    34,    23,    63,
      62
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -66,   -66,   145,   -66,   134,   -66,   123,   -66,   -65,   -66,
     -66,   -66,   -66,   -66,   -37,    99,    51,   -27,    62,   -66,
     -66,   -66,   -29,   -24,   -66,    15,    -1,   -25,   124,   125,
     -66,   -66,   -66,   -66
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    12,    13,    22,    23,    45,    46,
     110,    85,    58,    61,    54,    55,   109,    65,    66,    89,
      93,    67,    68,    69,   125,   133,    70,    71,    25,    26,
       9,    77,    98,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    56,    47,     1,    94,    36,    76,    48,    95,     5,
      14,    20,    21,    59,    62,    14,   101,    24,    60,    63,
     111,   103,   104,   105,   106,   107,   108,    24,    83,     7,
      49,   112,    10,    64,   -44,    33,    34,    86,    35,     5,
      11,    49,    49,    15,    47,   122,    16,    96,    97,    48,
     -46,   -46,    47,    99,   128,   102,    47,    48,    17,   -46,
     -46,    48,   113,    18,    82,    90,    91,    92,    28,    35,
       5,   116,    49,    64,    87,    88,   118,   119,    35,     5,
      49,    47,   121,    29,    49,    27,    48,    35,   124,    30,
      47,    31,    37,   129,   138,    48,    38,    39,    52,    53,
      40,    41,    42,    43,    57,   139,    72,    44,   -44,    49,
      73,    64,    74,    75,    76,    64,    35,     5,    49,    64,
      35,     5,   -44,    79,    35,     5,    78,    81,     5,   103,
     104,   105,   106,   107,   108,    84,   100,   112,   117,   123,
     126,   127,   130,   132,   131,   135,   134,   136,   137,     8,
      19,    32,    80,   120,   140,   114,     0,    50,     0,    51
};

static const yytype_int16 yycheck[] =
{
       1,    38,    31,     3,    43,    30,    45,    31,    73,    49,
      11,    10,    11,    42,    43,    16,    81,    18,    42,    43,
      85,    34,    35,    36,    37,    38,    39,    28,    55,     0,
      31,    44,    40,    43,    44,    10,    11,    64,    48,    49,
       4,    42,    43,     5,    73,   110,    40,    74,    75,    73,
      29,    30,    81,    78,   119,    82,    85,    81,    41,    29,
      30,    85,    89,     6,    43,    31,    32,    33,    40,    48,
      49,    98,    73,    43,    29,    30,    15,    16,    48,    49,
      81,   110,   109,    41,    85,     7,   110,    48,   115,    45,
     119,     8,    13,   120,   131,   119,    17,    18,    46,    25,
      21,    22,    23,    24,    19,   132,     9,    28,    40,   110,
      40,    43,    47,    47,    45,    43,    48,    49,   119,    43,
      48,    49,    46,    12,    48,    49,    45,    14,    49,    34,
      35,    36,    37,    38,    39,    19,    10,    44,    46,    20,
      46,    12,    20,    42,    17,    10,    44,    15,    44,     4,
      16,    28,    53,   102,   139,    93,    -1,    33,    -1,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    51,    52,    53,    49,    76,     0,    52,    80,
      40,     4,    54,    55,    76,     5,    40,    41,     6,    54,
      10,    11,    56,    57,    76,    78,    79,     7,    40,    41,
      45,     8,    56,    10,    11,    48,    77,    13,    17,    18,
      21,    22,    23,    24,    28,    58,    59,    72,    73,    76,
      78,    79,    46,    25,    64,    65,    64,    19,    62,    72,
      73,    63,    72,    73,    43,    67,    68,    71,    72,    73,
      76,    77,     9,    40,    47,    47,    45,    81,    45,    12,
      65,    14,    43,    67,    19,    61,    67,    29,    30,    69,
      31,    32,    33,    70,    43,    58,    67,    67,    82,    77,
      10,    58,    67,    34,    35,    36,    37,    38,    39,    66,
      60,    58,    44,    67,    68,    83,    67,    46,    15,    16,
      66,    67,    58,    20,    67,    74,    46,    12,    58,    67,
      20,    17,    42,    75,    44,    10,    15,    44,    64,    67,
      75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    54,    54,    55,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    59,    59,
      60,    59,    61,    59,    59,    59,    59,    59,    59,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    66,
      66,    66,    66,    67,    67,    68,    68,    69,    69,    69,
      70,    70,    70,    70,    71,    71,    71,    71,    71,    72,
      73,    74,    75,    75,    76,    77,    78,    79,    80,    81,
      82,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,    13,     3,     0,     4,     9,
       3,     0,     4,     9,     3,     0,     3,     3,     5,     7,
       0,     6,     0,     7,     2,     2,     1,     1,     2,     1,
       1,     1,     1,     4,     6,     2,     0,     1,     1,     1,
       1,     1,     1,     3,     0,     3,     0,     1,     1,     0,
       1,     1,     1,     0,     1,     1,     1,     3,     5,     2,
       5,     2,     3,     0,     1,     1,     0,     0,     0,     0,
       0,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2:
#line 94 "mini_l.y"
                      {cout << (yyvsp[0].node).code; code = string((yyvsp[0].node).code);}
#line 1502 "mini_l.tab.c"
    break;

  case 3:
#line 97 "mini_l.y"
                              {stringstream ss;ss << (yyvsp[-1].node).code << (yyvsp[0].node).code; (yyval.node).code = strdup(ss.str().c_str());}
#line 1508 "mini_l.tab.c"
    break;

  case 4:
#line 98 "mini_l.y"
           {(yyval.node).code = (char*)"";}
#line 1514 "mini_l.tab.c"
    break;

  case 5:
#line 99 "mini_l.y"
                                                                                                                                                                               {
  st.LeaveCurrentScope();
  stringstream ss;
  ss << "func " << (yyvsp[-11].node).ret << "\n" << (yyvsp[-7].node).code;
  for(int i = 0; i < params.size(); i++)
    ss << "= " << params[i] << ", $" << i << "\n";
  params.clear();
  ss << (yyvsp[-4].node).code << (yyvsp[-1].node).code << "endfunc\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1527 "mini_l.tab.c"
    break;

  case 6:
#line 109 "mini_l.y"
                                                                   {stringstream ss; ss << (yyvsp[-2].node).code << (yyvsp[0].node).code; (yyval.node).code = strdup(ss.str().c_str());}
#line 1533 "mini_l.tab.c"
    break;

  case 7:
#line 110 "mini_l.y"
           {(yyval.node).code = (char*)"";}
#line 1539 "mini_l.tab.c"
    break;

  case 8:
#line 111 "mini_l.y"
                                                             {stringstream ss; ss << ". " << (yyvsp[-3].node).ret << "\n"; (yyval.node).code = strdup(ss.str().c_str()); params.push_back((yyvsp[-3].node).ret);}
#line 1545 "mini_l.tab.c"
    break;

  case 9:
#line 112 "mini_l.y"
                                                                                                 {stringstream ss; ss << ".[] " << (yyvsp[-8].node).ret << ", " << (yyvsp[-3].node).ret << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1551 "mini_l.tab.c"
    break;

  case 10:
#line 113 "mini_l.y"
                                                                   {stringstream ss; ss << (yyvsp[-2].node).code << (yyvsp[0].node).code; (yyval.node).code = strdup(ss.str().c_str());}
#line 1557 "mini_l.tab.c"
    break;

  case 11:
#line 114 "mini_l.y"
           {(yyval.node).code = (char*)"";}
#line 1563 "mini_l.tab.c"
    break;

  case 12:
#line 115 "mini_l.y"
                                                             {stringstream ss; ss << ". " << (yyvsp[-3].node).ret << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1569 "mini_l.tab.c"
    break;

  case 13:
#line 116 "mini_l.y"
                                                                                                 {stringstream ss; ss << ".[] " << (yyvsp[-8].node).ret << ", " << (yyvsp[-3].node).ret << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1575 "mini_l.tab.c"
    break;

  case 14:
#line 119 "mini_l.y"
                                           {stringstream ss; ss << (yyvsp[-2].node).code << (yyvsp[0].node).code; (yyval.node).code = strdup(ss.str().c_str());}
#line 1581 "mini_l.tab.c"
    break;

  case 15:
#line 120 "mini_l.y"
           {(yyval.node).code = (char*)"";}
#line 1587 "mini_l.tab.c"
    break;

  case 16:
#line 121 "mini_l.y"
                                     {stringstream ss; ss << (yyvsp[0].node).code << "= " << (yyvsp[-2].node).ret << ", "  << (yyvsp[0].node).ret << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1593 "mini_l.tab.c"
    break;

  case 17:
#line 122 "mini_l.y"
                              {stringstream ss; ss << (yyvsp[0].node).code << "[]= " << (yyvsp[-2].node).ret << ", " << (yyvsp[-2].node).i << ", " << (yyvsp[0].node).ret << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1599 "mini_l.tab.c"
    break;

  case 18:
#line 123 "mini_l.y"
                                      {stringstream ss; (yyval.node).label_num = curr_if++; ss << (yyvsp[-3].node).code << "?:= if_true" << (yyval.node).label_num << ", " << (yyvsp[-3].node).ret << "\n:= endif" << (yyval.node).label_num << "\n: if_true" << (yyval.node).label_num << "\n" << (yyvsp[-1].node).code << ": endif" << (yyval.node).label_num << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1605 "mini_l.tab.c"
    break;

  case 19:
#line 124 "mini_l.y"
                                                      {stringstream ss; (yyval.node).label_num = curr_if++; ss << (yyvsp[-5].node).code << "?:= if_true" << (yyval.node).label_num << ", " << (yyvsp[-5].node).ret << "\n:= else" << (yyval.node).label_num << "\n: if_true" << (yyval.node).label_num << "\n" << (yyvsp[-3].node).code << ":= endif" << (yyval.node).label_num << "\n: else" << (yyval.node).label_num << "\n" << (yyvsp[-1].node).code << ": endif" << (yyval.node).label_num << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1611 "mini_l.tab.c"
    break;

  case 20:
#line 125 "mini_l.y"
                             {loopScope = true;}
#line 1617 "mini_l.tab.c"
    break;

  case 21:
#line 125 "mini_l.y"
                                                                    {loopScope = false; stringstream ss; (yyval.node).label_num = curr_loop++; ss << ": beginloop" << (yyval.node).label_num << "\n" << (yyvsp[-4].node).code << "?:= loopbody" << (yyval.node).label_num << ", " << (yyvsp[-4].node).ret << "\n:= endloop" << (yyval.node).label_num << "\n: loopbody" << (yyval.node).label_num << "\n" << (yyvsp[-1].node).code << ":= beginloop" << (yyval.node).label_num << "\n: endloop" << (yyval.node).label_num << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1623 "mini_l.tab.c"
    break;

  case 22:
#line 126 "mini_l.y"
                 {loopScope = true;}
#line 1629 "mini_l.tab.c"
    break;

  case 23:
#line 126 "mini_l.y"
                                                                       {loopScope = false; stringstream ss; (yyval.node).label_num = curr_loop++; ss << ": beginloop" << (yyval.node).label_num << "\n" << (yyvsp[-3].node).code << (yyvsp[0].node).code << "?:= beginloop" << (yyval.node).label_num << ", " << (yyvsp[0].node).ret << "\n: endloop" << (yyval.node).label_num << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1635 "mini_l.tab.c"
    break;

  case 24:
#line 127 "mini_l.y"
                  {(yyval.node).code = strdup((yyvsp[0].node).code);}
#line 1641 "mini_l.tab.c"
    break;

  case 25:
#line 128 "mini_l.y"
                    {(yyval.node).code = strdup((yyvsp[0].node).code);}
#line 1647 "mini_l.tab.c"
    break;

  case 26:
#line 129 "mini_l.y"
             {if(!loopScope) {printf("Error line %d: continue statement not within a loop.\n", l); errorRaised = true;} stringstream ss; ss << ":= beginloop" << curr_loop << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1653 "mini_l.tab.c"
    break;

  case 27:
#line 130 "mini_l.y"
          {if(!loopScope) {printf("Error line %d: continue statement not within a loop.\n", l); errorRaised = true;} stringstream ss; ss << ":= endloop" << curr_loop << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1659 "mini_l.tab.c"
    break;

  case 28:
#line 131 "mini_l.y"
                      {stringstream ss; ss << (yyvsp[0].node).code << "ret " << (yyvsp[0].node).ret << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1665 "mini_l.tab.c"
    break;

  case 29:
#line 134 "mini_l.y"
                  {stringstream ss; ss << ".< " << (yyvsp[0].node).ret << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1671 "mini_l.tab.c"
    break;

  case 30:
#line 135 "mini_l.y"
            {stringstream ss; char* t = strdup(var_generator()); ss << ". " << t << "\n=[] " << t << ", " << (yyvsp[0].node).ret << ", " << (yyvsp[0].node).i << "\n.< " << t << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1677 "mini_l.tab.c"
    break;

  case 31:
#line 136 "mini_l.y"
                   {stringstream ss; ss << ".> " << (yyvsp[0].node).ret << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1683 "mini_l.tab.c"
    break;

  case 32:
#line 137 "mini_l.y"
            {stringstream ss; char* t = strdup(var_generator()); ss << ". " << t << "\n=[] " << t << ", " << (yyvsp[0].node).ret << ", " << (yyvsp[0].node).i << "\n.> " << t << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1689 "mini_l.tab.c"
    break;

  case 33:
#line 140 "mini_l.y"
                                          {
  stringstream ss;
  (yyval.node).ret = strdup(var_generator());
  ss << (yyvsp[-2].node).code << (yyvsp[0].node).code << ". " << (yyval.node).ret << "\n" << (yyvsp[-1].node).code << " " << (yyval.node).ret << ", " << (yyvsp[-2].node).ret << ", " << (yyvsp[0].node).ret << "\n";
  if(strlen((yyvsp[-3].node).code) % 2 != 0) {
    char* t = strdup(var_generator());
    ss << ". " << t << "\n" << (yyvsp[-3].node).code << " " << t << ", " << (yyval.node).ret << "\n";
    (yyval.node).ret = strdup(t);
  }
  (yyval.node).code = strdup(ss.str().c_str());}
#line 1704 "mini_l.tab.c"
    break;

  case 34:
#line 151 "mini_l.y"
                                                    {
  stringstream ss;
  (yyval.node).ret = strdup(var_generator());
  ss << (yyvsp[-3].node).code << (yyvsp[-1].node).code << ". " << (yyval.node).ret << "\n" << (yyvsp[-2].node).code << " " << (yyval.node).ret << ", " << (yyvsp[-3].node).ret << ", " << (yyvsp[-1].node).ret << "\n";
  if(strlen((yyvsp[-5].node).code) % 2 != 0) {
    char* t = strdup(var_generator());
    ss << ". " << t << "\n" << (yyvsp[-5].node).code << " " << t << ", " << (yyval.node).ret << "\n";
    (yyval.node).ret = strdup(t);
  }
  (yyval.node).code = strdup(ss.str().c_str());}
#line 1719 "mini_l.tab.c"
    break;

  case 35:
#line 162 "mini_l.y"
               {stringstream ss; ss << "!" << (yyvsp[0].node).code; (yyval.node).code = strdup(ss.str().c_str());}
#line 1725 "mini_l.tab.c"
    break;

  case 36:
#line 163 "mini_l.y"
           {(yyval.node).code = (char*)"";}
#line 1731 "mini_l.tab.c"
    break;

  case 37:
#line 164 "mini_l.y"
         {(yyval.node).code = (char*)"==";}
#line 1737 "mini_l.tab.c"
    break;

  case 38:
#line 165 "mini_l.y"
        {(yyval.node).code = (char*)"!=";}
#line 1743 "mini_l.tab.c"
    break;

  case 39:
#line 166 "mini_l.y"
       {(yyval.node).code = (char*)"<";}
#line 1749 "mini_l.tab.c"
    break;

  case 40:
#line 167 "mini_l.y"
       {(yyval.node).code = (char*)">";}
#line 1755 "mini_l.tab.c"
    break;

  case 41:
#line 168 "mini_l.y"
        {(yyval.node).code = (char*)"<=";}
#line 1761 "mini_l.tab.c"
    break;

  case 42:
#line 169 "mini_l.y"
        {(yyval.node).code = (char*)">=";}
#line 1767 "mini_l.tab.c"
    break;

  case 43:
#line 170 "mini_l.y"
                                                    {
  stringstream ss;
  if((yyvsp[-1].node).code[0] != '\0') {
    (yyval.node).ret = strdup(var_generator());
    ss << (yyvsp[-2].node).code << (yyvsp[0].node).code;
    ss << ". " << (yyval.node).ret << "\n";
    ss << (yyvsp[-1].node).code << " " << (yyval.node).ret << ", " << (yyvsp[-2].node).ret << ", " << (yyvsp[0].node).ret << "\n";
    (yyval.node).code = strdup(ss.str().c_str());
  }
  else {
    (yyval.node).ret = strdup((yyvsp[-2].node).ret);
    (yyval.node).code = strdup((yyvsp[-2].node).code);
  }}
#line 1785 "mini_l.tab.c"
    break;

  case 44:
#line 183 "mini_l.y"
           {(yyval.node).code = (char*)"";}
#line 1791 "mini_l.tab.c"
    break;

  case 45:
#line 184 "mini_l.y"
                                                             {
  stringstream ss;
  if((yyvsp[-1].node).code[0] != '\0') {
    (yyval.node).ret = strdup(var_generator());
    ss << (yyvsp[-2].node).code << (yyvsp[0].node).code;
    ss << ". " << (yyval.node).ret << "\n";
    ss << (yyvsp[-1].node).code << " " << (yyval.node).ret << ", " << (yyvsp[-2].node).ret << ", " << (yyvsp[0].node).ret << "\n";
    (yyval.node).code = strdup(ss.str().c_str());
  }
  else {
    (yyval.node).ret = strdup((yyvsp[-2].node).ret);
    (yyval.node).code = strdup((yyvsp[-2].node).code);
  }}
#line 1809 "mini_l.tab.c"
    break;

  case 46:
#line 197 "mini_l.y"
           {(yyval.node).code = (char*)"";}
#line 1815 "mini_l.tab.c"
    break;

  case 47:
#line 198 "mini_l.y"
              {(yyval.node).code = (char*)"+";}
#line 1821 "mini_l.tab.c"
    break;

  case 48:
#line 199 "mini_l.y"
        {(yyval.node).code = (char*)"-";}
#line 1827 "mini_l.tab.c"
    break;

  case 49:
#line 200 "mini_l.y"
           {(yyval.node).code = (char*)"";}
#line 1833 "mini_l.tab.c"
    break;

  case 50:
#line 201 "mini_l.y"
                     {(yyval.node).code = (char*)"*";}
#line 1839 "mini_l.tab.c"
    break;

  case 51:
#line 202 "mini_l.y"
        {(yyval.node).code = (char*)"/";}
#line 1845 "mini_l.tab.c"
    break;

  case 52:
#line 203 "mini_l.y"
        {(yyval.node).code = (char*)"%";}
#line 1851 "mini_l.tab.c"
    break;

  case 53:
#line 204 "mini_l.y"
           {(yyval.node).code = (char*)"";}
#line 1857 "mini_l.tab.c"
    break;

  case 54:
#line 205 "mini_l.y"
              {(yyval.node).ret = strdup((yyvsp[0].node).ret); (yyval.node).code = (char*)"";}
#line 1863 "mini_l.tab.c"
    break;

  case 55:
#line 206 "mini_l.y"
            {stringstream ss; (yyval.node).ret = strdup(var_generator()); ss << ". " << (yyval.node).ret << "\n=[] " << (yyval.node).ret << ", " << (yyvsp[0].node).ret << ", " << (yyvsp[0].node).i << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1869 "mini_l.tab.c"
    break;

  case 56:
#line 207 "mini_l.y"
            {(yyval.node).ret = strdup((yyvsp[0].node).ret); (yyval.node).code = (char*)"";}
#line 1875 "mini_l.tab.c"
    break;

  case 57:
#line 208 "mini_l.y"
                               {(yyval.node).ret = strdup((yyvsp[-1].node).ret); (yyval.node).code = strdup((yyvsp[-1].node).code);}
#line 1881 "mini_l.tab.c"
    break;

  case 58:
#line 209 "mini_l.y"
                                                    {stringstream ss; (yyval.node).ret = strdup(var_generator()); ss << (yyvsp[-1].node).code << ". " << (yyval.node).ret << "\ncall " << (yyvsp[-4].node).ret << ", " << (yyval.node).ret << "\n"; (yyval.node).code = strdup(ss.str().c_str());}
#line 1887 "mini_l.tab.c"
    break;

  case 59:
#line 210 "mini_l.y"
                             {(yyval.node).ret = strdup((yyvsp[-1].node).ret);}
#line 1893 "mini_l.tab.c"
    break;

  case 60:
#line 211 "mini_l.y"
                                                                          {(yyval.node).ret = strdup((yyvsp[-4].node).ret); (yyval.node).i = strdup((yyvsp[-1].node).ret);}
#line 1899 "mini_l.tab.c"
    break;

  case 61:
#line 212 "mini_l.y"
                                 {stringstream ss; ss << (yyvsp[-1].node).code << "param " << (yyvsp[-1].node).ret << "\n" << (yyvsp[0].node).code; (yyval.node).code = strdup(ss.str().c_str());}
#line 1905 "mini_l.tab.c"
    break;

  case 62:
#line 213 "mini_l.y"
                                      {stringstream ss; ss << (yyvsp[-1].node).code << "param " << (yyvsp[-1].node).ret << "\n" << (yyvsp[0].node).code; (yyval.node).code = strdup(ss.str().c_str());}
#line 1911 "mini_l.tab.c"
    break;

  case 63:
#line 214 "mini_l.y"
           {(yyval.node).code = (char*)"";}
#line 1917 "mini_l.tab.c"
    break;

  case 64:
#line 215 "mini_l.y"
                   {(yyval.node).ret = strdup((yyvsp[0].id));}
#line 1923 "mini_l.tab.c"
    break;

  case 65:
#line 216 "mini_l.y"
                {(yyval.node).ret = strdup((yyvsp[0].num));}
#line 1929 "mini_l.tab.c"
    break;

  case 66:
#line 218 "mini_l.y"
                        {errorRaised |= !st.addSymbol(string(yylval.id), SymbolTable::INT, l);}
#line 1935 "mini_l.tab.c"
    break;

  case 67:
#line 219 "mini_l.y"
                        {errorRaised |= !st.addSymbol(string(yylval.id), SymbolTable::ARR, l);}
#line 1941 "mini_l.tab.c"
    break;

  case 68:
#line 220 "mini_l.y"
                         {errorRaised |= !st.addSymbol(string(yylval.id), SymbolTable::FUNC, l); st.EnterNewScope();}
#line 1947 "mini_l.tab.c"
    break;

  case 69:
#line 221 "mini_l.y"
                {errorRaised |= !st.checkUsage(string(yylval.id), SymbolTable::INT, l);}
#line 1953 "mini_l.tab.c"
    break;

  case 70:
#line 222 "mini_l.y"
                {errorRaised |= !st.checkUsage(string(yylval.id), SymbolTable::ARR, l);}
#line 1959 "mini_l.tab.c"
    break;

  case 71:
#line 223 "mini_l.y"
                 {errorRaised |= !st.checkUsage(string(yylval.id), SymbolTable::FUNC, l);}
#line 1965 "mini_l.tab.c"
    break;


#line 1969 "mini_l.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 224 "mini_l.y"


int main(int argc, char **argv) {
  ++argv, --argc;
  if(argc > 0)
    yyin = fopen(argv[0], "r");
  else
    yyin = stdin;

  do {
    yyparse();
  } while(!feof(yyin));

  errorRaised |= !st.checkForMain();
  if(!errorRaised) {
    ofstream fout;
    string filename = "mil" + string(argv[0]).substr(string(argv[0]).find_first_of("/"));
    filename = filename.substr(0, filename.find_last_of(".")) + ".mil";
    fout.open(filename.c_str());
    fout << code;
    fout.close();
  }
  return 0;
}

void yyerror(const char* s) {
  extern int l;
  extern char *yytext;

  printf("%s: %s on line %d\n", s, yytext, l);
  exit(1);
}
