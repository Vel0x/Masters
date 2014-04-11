/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002, 2003, 2004, 2005, 2006 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 1


/* Substitute the variable and function names.  */
#define yyparse ned2yyparse
#define yylex   ned2yylex
#define yyerror ned2yyerror
#define yylval  ned2yylval
#define yychar  ned2yychar
#define yydebug ned2yydebug
#define yynerrs ned2yynerrs
#define yylloc  ned2yylloc



#include "ned2.tab.hh"

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

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template,
   here we set the default value of $$ to a zeroed-out value.
   Since the default value is undefined, this behavior is
   technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */


/* Line 234 of glr.c.  */
#line 97 "ned2.tab.cc"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(env) setjmp (env)
# define YYLONGJMP(env, val) longjmp (env, val)
#endif

/*-----------------.
| GCC extensions.  |
`-----------------*/

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5) || __STRICT_ANSI__)
#  define __attribute__(Spec) /* empty */
# endif
#endif

#define YYOPTIONAL_LOC(Name) Name

#ifndef YYASSERT
# define YYASSERT(condition) ((void) ((condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  86
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1473

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  142
/* YYNRULES -- Number of rules.  */
#define YYNRULES  373
/* YYNRULES -- Number of states.  */
#define YYNSTATES  619
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 22
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   323

#define YYTRANSLATE(YYX)						\
  ((YYX <= 0) ? YYEOF :							\
   (unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    90,    76,     2,     2,
      82,    83,    74,    72,    88,    73,    81,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,    79,
      71,    89,    70,    68,    84,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    85,     2,    86,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,     2,    80,     2,     2,     2,     2,
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
      65,    66,    67,    78
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    11,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      42,    46,    50,    54,    58,    62,    66,    70,    74,    78,
      82,    86,    90,    94,    96,   100,   104,   106,   109,   112,
     115,   117,   119,   121,   125,   132,   136,   142,   144,   145,
     149,   151,   153,   156,   157,   163,   164,   169,   170,   173,
     176,   181,   183,   187,   189,   191,   192,   198,   199,   204,
     207,   208,   212,   214,   215,   222,   223,   228,   229,   239,
     240,   245,   246,   256,   257,   262,   263,   270,   271,   276,
     278,   279,   284,   286,   287,   290,   292,   294,   296,   298,
     300,   304,   311,   315,   317,   322,   324,   326,   328,   330,
     332,   334,   335,   337,   342,   344,   346,   348,   349,   352,
     354,   358,   362,   366,   368,   370,   375,   380,   382,   384,
     388,   390,   394,   396,   399,   404,   407,   409,   413,   416,
     419,   422,   424,   429,   432,   438,   440,   444,   446,   450,
     452,   456,   458,   460,   462,   463,   466,   468,   470,   472,
     474,   476,   478,   480,   482,   484,   486,   488,   490,   492,
     494,   496,   498,   500,   502,   504,   506,   508,   510,   512,
     514,   516,   518,   520,   522,   524,   526,   528,   530,   532,
     534,   536,   537,   538,   543,   545,   546,   549,   551,   552,
     557,   560,   565,   569,   571,   575,   578,   580,   582,   584,
     586,   587,   588,   593,   595,   596,   599,   601,   603,   605,
     607,   609,   611,   613,   615,   617,   619,   620,   621,   626,
     628,   629,   632,   634,   637,   638,   646,   651,   658,   660,
     663,   666,   670,   677,   679,   680,   682,   683,   684,   690,
     691,   696,   698,   699,   702,   704,   706,   710,   711,   718,
     720,   721,   725,   727,   729,   731,   738,   742,   748,   752,
     758,   762,   768,   772,   774,   777,   779,   782,   786,   790,
     793,   797,   801,   805,   807,   809,   812,   815,   819,   823,
     826,   830,   834,   837,   838,   840,   841,   847,   849,   852,
     857,   858,   861,   864,   868,   870,   872,   876,   881,   885,
     889,   893,   897,   901,   905,   908,   912,   916,   920,   924,
     928,   932,   936,   940,   944,   947,   951,   955,   959,   962,
     966,   970,   976,   981,   986,   991,   995,  1000,  1007,  1016,
    1027,  1040,  1055,  1072,  1091,  1112,  1135,  1137,  1139,  1141,
    1143,  1145,  1147,  1149,  1153,  1157,  1164,  1166,  1170,  1175,
    1177,  1179,  1181,  1183,  1185,  1187,  1189,  1191,  1193,  1197,
    1201,  1204,  1207,  1209
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
      92,     0,    -1,    66,   222,    -1,    93,    -1,    94,    -1,
      -1,    94,    95,    -1,    95,    -1,    96,    -1,    98,    -1,
     101,    -1,   106,    -1,   107,    -1,   115,    -1,   121,    -1,
     125,    -1,   129,    -1,   133,    -1,    79,    -1,   117,     1,
      80,    -1,    11,     1,    80,    -1,   123,     1,    80,    -1,
       7,     1,    80,    -1,   127,     1,    80,    -1,     6,     1,
      80,    -1,   131,     1,    80,    -1,     8,     1,    80,    -1,
     135,     1,    80,    -1,    10,     1,    80,    -1,   109,     1,
      80,    -1,     9,     1,    80,    -1,     4,    97,    79,    -1,
      97,    81,    45,    -1,    45,    -1,     3,    99,    79,    -1,
      99,    81,   100,    -1,   100,    -1,   100,    45,    -1,   100,
      74,    -1,   100,    51,    -1,    45,    -1,    74,    -1,    51,
      -1,   102,   149,    79,    -1,   102,    82,   103,    83,   149,
      79,    -1,     5,    84,    45,    -1,     5,    84,    45,    85,
      86,    -1,   104,    -1,    -1,   104,    79,   105,    -1,   105,
      -1,    45,    -1,   157,    79,    -1,    -1,   109,    87,   108,
     137,    80,    -1,    -1,     9,    45,   110,   111,    -1,    -1,
      12,   112,    -1,    13,   113,    -1,    12,   112,    13,   113,
      -1,    97,    -1,   113,    88,   114,    -1,   114,    -1,    97,
      -1,    -1,   117,    87,   116,   137,    80,    -1,    -1,    11,
      45,   118,   119,    -1,    12,   120,    -1,    -1,   120,    88,
     112,    -1,   112,    -1,    -1,   123,    87,   122,   137,   166,
      80,    -1,    -1,     7,    45,   124,   111,    -1,    -1,   127,
      87,   126,   137,   166,   175,   181,   192,    80,    -1,    -1,
       6,    45,   128,   111,    -1,    -1,   131,    87,   130,   137,
     166,   175,   181,   192,    80,    -1,    -1,     8,    45,   132,
     111,    -1,    -1,   135,    87,   134,   137,   166,    80,    -1,
      -1,    10,    45,   136,   119,    -1,   139,    -1,    -1,    15,
      69,   138,   139,    -1,   140,    -1,    -1,   140,   141,    -1,
     141,    -1,   142,    -1,   156,    -1,   143,    -1,   145,    -1,
     144,   149,    79,    -1,   144,   149,    89,   148,   149,    79,
      -1,   147,   146,    45,    -1,    45,    -1,   151,    89,   148,
      79,    -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,    -1,   221,    -1,    38,    82,   221,
      83,    -1,    38,    -1,    39,    -1,   150,    -1,    -1,   150,
     157,    -1,   157,    -1,   152,    81,   153,    -1,   152,    81,
      43,    -1,   152,    81,   153,    -1,   153,    -1,   154,    -1,
     154,    85,   155,    86,    -1,   154,    85,    74,    86,    -1,
      51,    -1,    45,    -1,    45,    90,    45,    -1,     9,    -1,
      87,   155,    80,    -1,    74,    -1,   154,    45,    -1,   154,
      87,   155,    80,    -1,   154,    74,    -1,    46,    -1,    46,
      34,    46,    -1,    34,    46,    -1,    46,    34,    -1,   157,
      79,    -1,   158,    -1,   158,    82,   159,    83,    -1,    84,
      45,    -1,    84,    45,    85,    45,    86,    -1,   160,    -1,
     160,    79,   161,    -1,   161,    -1,    45,    89,   162,    -1,
     162,    -1,   162,    88,   163,    -1,   163,    -1,   164,    -1,
      48,    -1,    -1,   164,   165,    -1,   165,    -1,    45,    -1,
      46,    -1,    47,    -1,    35,    -1,    36,    -1,    90,    -1,
      84,    -1,    69,    -1,    85,    -1,    86,    -1,    87,    -1,
      80,    -1,    81,    -1,    68,    -1,    77,    -1,    72,    -1,
      73,    -1,    74,    -1,    75,    -1,    76,    -1,    71,    -1,
      70,    -1,    52,    -1,    53,    -1,    55,    -1,    54,    -1,
      51,    -1,    34,    -1,    50,    -1,    57,    -1,    56,    -1,
      58,    -1,    59,    -1,   167,    -1,    -1,    -1,    16,    69,
     168,   169,    -1,   170,    -1,    -1,   170,   171,    -1,   171,
      -1,    -1,   173,   172,   149,    79,    -1,   174,    45,    -1,
     174,    45,    85,    86,    -1,   174,    45,   220,    -1,    45,
      -1,    45,    85,    86,    -1,    45,   220,    -1,    26,    -1,
      27,    -1,    28,    -1,   176,    -1,    -1,    -1,    14,    69,
     177,   178,    -1,   179,    -1,    -1,   179,   180,    -1,   180,
      -1,   101,    -1,   107,    -1,   115,    -1,   121,    -1,   125,
      -1,   129,    -1,   133,    -1,    79,    -1,   182,    -1,    -1,
      -1,    17,    69,   183,   184,    -1,   185,    -1,    -1,   185,
     186,    -1,   186,    -1,   188,    79,    -1,    -1,   188,    87,
     187,   137,   166,    80,   232,    -1,   189,    69,    97,   191,
      -1,   189,    69,   190,    13,    97,   191,    -1,    45,    -1,
      45,   220,    -1,    71,    70,    -1,    71,   221,    70,    -1,
      71,    38,    82,   221,    83,    70,    -1,   219,    -1,    -1,
     193,    -1,    -1,    -1,    18,    19,    69,   194,   196,    -1,
      -1,    18,    69,   195,   196,    -1,   197,    -1,    -1,   197,
     198,    -1,   198,    -1,   199,    -1,   205,   201,    79,    -1,
      -1,   201,    87,   200,   197,    80,   232,    -1,   202,    -1,
      -1,   202,    88,   203,    -1,   203,    -1,   204,    -1,   219,
      -1,    30,    45,    89,   221,    34,   221,    -1,   206,    31,
     210,    -1,   206,    31,   215,    31,   210,    -1,   206,    32,
     210,    -1,   206,    32,   215,    32,   210,    -1,   206,    33,
     210,    -1,   206,    33,   215,    33,   210,    -1,   207,    81,
     208,    -1,   209,    -1,    45,   220,    -1,    45,    -1,    45,
     214,    -1,    45,   214,   220,    -1,    45,   214,    50,    -1,
      45,   214,    -1,    45,   214,   220,    -1,    45,   214,    50,
      -1,   211,    81,   212,    -1,   213,    -1,    45,    -1,    45,
     220,    -1,    45,   214,    -1,    45,   214,   220,    -1,    45,
     214,    50,    -1,    45,   214,    -1,    45,   214,   220,    -1,
      45,   214,    50,    -1,    90,    45,    -1,    -1,   217,    -1,
      -1,   217,    87,   216,   137,    80,    -1,   218,    -1,   218,
      97,    -1,   218,   190,    13,    97,    -1,    -1,    45,    69,
      -1,    29,   221,    -1,    85,   221,    86,    -1,   222,    -1,
     223,    -1,    82,   222,    83,    -1,    40,    82,   222,    83,
      -1,   222,    72,   222,    -1,   222,    73,   222,    -1,   222,
      74,   222,    -1,   222,    75,   222,    -1,   222,    76,   222,
      -1,   222,    77,   222,    -1,    73,   222,    -1,   222,    52,
     222,    -1,   222,    53,   222,    -1,   222,    70,   222,    -1,
     222,    54,   222,    -1,   222,    71,   222,    -1,   222,    55,
     222,    -1,   222,    56,   222,    -1,   222,    57,   222,    -1,
     222,    58,   222,    -1,    59,   222,    -1,   222,    60,   222,
      -1,   222,    61,   222,    -1,   222,    62,   222,    -1,    63,
     222,    -1,   222,    64,   222,    -1,   222,    65,   222,    -1,
     222,    68,   222,    69,   222,    -1,    21,    82,   222,    83,
      -1,    20,    82,   222,    83,    -1,    22,    82,   222,    83,
      -1,   224,    82,    83,    -1,   224,    82,   222,    83,    -1,
     224,    82,   222,    88,   222,    83,    -1,   224,    82,   222,
      88,   222,    88,   222,    83,    -1,   224,    82,   222,    88,
     222,    88,   222,    88,   222,    83,    -1,   224,    82,   222,
      88,   222,    88,   222,    88,   222,    88,   222,    83,    -1,
     224,    82,   222,    88,   222,    88,   222,    88,   222,    88,
     222,    88,   222,    83,    -1,   224,    82,   222,    88,   222,
      88,   222,    88,   222,    88,   222,    88,   222,    88,   222,
      83,    -1,   224,    82,   222,    88,   222,    88,   222,    88,
     222,    88,   222,    88,   222,    88,   222,    88,   222,    83,
      -1,   224,    82,   222,    88,   222,    88,   222,    88,   222,
      88,   222,    88,   222,    88,   222,    88,   222,    88,   222,
      83,    -1,   224,    82,   222,    88,   222,    88,   222,    88,
     222,    88,   222,    88,   222,    88,   222,    88,   222,    88,
     222,    88,   222,    83,    -1,   225,    -1,   226,    -1,   227,
      -1,    45,    -1,    44,    -1,    24,    -1,    45,    -1,    37,
      81,    45,    -1,    45,    81,    45,    -1,    45,    85,   222,
      86,    81,    45,    -1,    42,    -1,    42,    82,    83,    -1,
      41,    82,   225,    83,    -1,   228,    -1,   229,    -1,   230,
      -1,    48,    -1,    35,    -1,    36,    -1,    46,    -1,    47,
      -1,   231,    -1,   231,    46,    45,    -1,   231,    47,    45,
      -1,    46,    45,    -1,    47,    45,    -1,    79,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   196,   196,   198,   205,   206,   210,   211,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   227,
     229,   231,   233,   235,   237,   239,   241,   243,   245,   247,
     249,   254,   264,   265,   272,   282,   283,   287,   288,   289,
     290,   291,   292,   299,   304,   312,   317,   326,   327,   331,
     332,   336,   348,   360,   359,   383,   382,   391,   393,   394,
     395,   399,   408,   409,   413,   426,   425,   449,   448,   458,
     459,   463,   464,   472,   471,   496,   495,   509,   508,   536,
     535,   549,   548,   576,   575,   592,   591,   616,   615,   628,
     637,   636,   646,   647,   651,   652,   656,   657,   661,   662,
     669,   675,   693,   700,   708,   730,   732,   734,   736,   738,
     743,   746,   750,   752,   754,   758,   766,   767,   771,   772,
     776,   777,   781,   782,   786,   787,   788,   789,   793,   794,
     795,   796,   797,   798,   799,   800,   804,   805,   806,   807,
     814,   822,   823,   827,   833,   843,   847,   848,   852,   861,
     873,   875,   880,   882,   885,   893,   894,   898,   898,   898,
     898,   898,   899,   899,   899,   899,   899,   899,   899,   899,
     899,   900,   900,   900,   900,   900,   900,   900,   900,   900,
     900,   900,   900,   901,   901,   901,   901,   901,   901,   901,
     908,   909,   914,   913,   926,   927,   931,   935,   946,   945,
     957,   962,   968,   975,   979,   984,   993,   995,   997,  1005,
    1006,  1011,  1010,  1027,  1028,  1032,  1033,  1037,  1038,  1039,
    1040,  1041,  1042,  1043,  1044,  1051,  1052,  1057,  1056,  1069,
    1070,  1074,  1075,  1079,  1085,  1084,  1104,  1109,  1119,  1124,
    1133,  1135,  1137,  1142,  1145,  1152,  1153,  1158,  1157,  1169,
    1168,  1181,  1182,  1186,  1187,  1191,  1192,  1205,  1204,  1226,
    1229,  1233,  1238,  1246,  1247,  1251,  1266,  1271,  1276,  1282,
    1288,  1292,  1299,  1300,  1304,  1310,  1318,  1323,  1329,  1338,
    1345,  1353,  1364,  1365,  1369,  1373,  1381,  1386,  1392,  1401,
    1406,  1412,  1421,  1432,  1436,  1438,  1437,  1452,  1453,  1457,
    1465,  1467,  1475,  1488,  1494,  1504,  1505,  1507,  1510,  1512,
    1514,  1516,  1518,  1520,  1523,  1527,  1529,  1531,  1533,  1535,
    1537,  1540,  1542,  1544,  1547,  1551,  1553,  1555,  1558,  1561,
    1563,  1565,  1568,  1570,  1572,  1575,  1577,  1579,  1581,  1583,
    1585,  1587,  1589,  1591,  1593,  1595,  1601,  1602,  1603,  1607,
    1608,  1609,  1613,  1615,  1617,  1619,  1624,  1626,  1628,  1633,
    1634,  1635,  1639,  1644,  1646,  1651,  1653,  1655,  1660,  1661,
    1662,  1663,  1667,  1668
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IMPORT", "PACKAGE", "PROPERTY",
  "MODULE", "SIMPLE", "NETWORK", "CHANNEL", "MODULEINTERFACE",
  "CHANNELINTERFACE", "EXTENDS", "LIKE", "TYPES", "PARAMETERS", "GATES",
  "SUBMODULES", "CONNECTIONS", "ALLOWUNCONNECTED", "DOUBLETYPE", "INTTYPE",
  "STRINGTYPE", "BOOLTYPE", "XMLTYPE", "VOLATILE", "INPUT_", "OUTPUT_",
  "INOUT_", "IF", "FOR", "RIGHTARROW", "LEFTARROW", "DBLARROW", "TO",
  "TRUE_", "FALSE_", "THIS_", "DEFAULT", "ASK", "CONST_", "SIZEOF",
  "INDEX_", "TYPENAME", "XMLDOC", "NAME", "INTCONSTANT", "REALCONSTANT",
  "STRINGCONSTANT", "CHARCONSTANT", "PLUSPLUS", "DOUBLEASTERISK", "EQ",
  "NE", "GE", "LE", "AND", "OR", "XOR", "NOT", "BIN_AND", "BIN_OR",
  "BIN_XOR", "BIN_COMPL", "SHIFT_LEFT", "SHIFT_RIGHT",
  "EXPRESSION_SELECTOR", "INVALID_CHAR", "'?'", "':'", "'>'", "'<'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'^'", "UMIN", "';'", "'}'", "'.'", "'('",
  "')'", "'@'", "'['", "']'", "'{'", "','", "'='", "'$'", "$accept",
  "startsymbol", "nedfile", "definitions", "definition",
  "packagedeclaration", "dottedname", "import", "importspec", "importname",
  "propertydecl", "propertydecl_header", "opt_propertydecl_keys",
  "propertydecl_keys", "propertydecl_key", "fileproperty",
  "channeldefinition", "@1", "channelheader", "@2", "opt_inheritance",
  "extendsname", "likenames", "likename", "channelinterfacedefinition",
  "@3", "channelinterfaceheader", "@4", "opt_interfaceinheritance",
  "extendsnames", "simplemoduledefinition", "@5", "simplemoduleheader",
  "@6", "compoundmoduledefinition", "@7", "compoundmoduleheader", "@8",
  "networkdefinition", "@9", "networkheader", "@10",
  "moduleinterfacedefinition", "@11", "moduleinterfaceheader", "@12",
  "opt_paramblock", "@13", "opt_params", "params", "paramsitem", "param",
  "param_typenamevalue", "param_typename", "pattern_value", "paramtype",
  "opt_volatile", "paramvalue", "opt_inline_properties",
  "inline_properties", "pattern", "pattern2", "pattern_elem",
  "pattern_name", "pattern_index", "property", "property_namevalue",
  "property_name", "opt_property_keys", "property_keys", "property_key",
  "property_values", "property_value", "property_value_tokens",
  "property_value_token", "opt_gateblock", "gateblock", "@14", "opt_gates",
  "gates", "gate", "@15", "gate_typenamesize", "gatetype", "opt_typeblock",
  "typeblock", "@16", "opt_localtypes", "localtypes", "localtype",
  "opt_submodblock", "submodblock", "@17", "opt_submodules", "submodules",
  "submodule", "@18", "submoduleheader", "submodulename", "likeexpr",
  "opt_condition", "opt_connblock", "connblock", "@19", "@20",
  "opt_connections", "connections", "connectionsitem", "connectiongroup",
  "@21", "opt_loops_and_conditions", "loops_and_conditions",
  "loop_or_condition", "loop", "connection", "leftgatespec", "leftmod",
  "leftgate", "parentleftgate", "rightgatespec", "rightmod", "rightgate",
  "parentrightgate", "opt_subgate", "channelspec", "@22",
  "channelspec_header", "opt_channelname", "condition", "vector",
  "expression", "expr", "simple_expr", "funcname", "identifier",
  "special_expr", "literal", "stringliteral", "boolliteral", "numliteral",
  "quantity", "opt_semicolon", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    91,    92,    92,    93,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    96,    97,    97,    98,    99,    99,   100,   100,   100,
     100,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   106,   108,   107,   110,   109,   111,   111,   111,
     111,   112,   113,   113,   114,   116,   115,   118,   117,   119,
     119,   120,   120,   122,   121,   124,   123,   126,   125,   128,
     127,   130,   129,   132,   131,   134,   133,   136,   135,   137,
     138,   137,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   145,   146,   146,   146,   146,   146,
     147,   147,   148,   148,   148,   148,   149,   149,   150,   150,
     151,   151,   152,   152,   153,   153,   153,   153,   154,   154,
     154,   154,   154,   154,   154,   154,   155,   155,   155,   155,
     156,   157,   157,   158,   158,   159,   160,   160,   161,   161,
     162,   162,   163,   163,   163,   164,   164,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     166,   166,   168,   167,   169,   169,   170,   170,   172,   171,
     173,   173,   173,   173,   173,   173,   174,   174,   174,   175,
     175,   177,   176,   178,   178,   179,   179,   180,   180,   180,
     180,   180,   180,   180,   180,   181,   181,   183,   182,   184,
     184,   185,   185,   186,   187,   186,   188,   188,   189,   189,
     190,   190,   190,   191,   191,   192,   192,   194,   193,   195,
     193,   196,   196,   197,   197,   198,   198,   200,   199,   201,
     201,   202,   202,   203,   203,   204,   205,   205,   205,   205,
     205,   205,   206,   206,   207,   207,   208,   208,   208,   209,
     209,   209,   210,   210,   211,   211,   212,   212,   212,   213,
     213,   213,   214,   214,   215,   216,   215,   217,   217,   217,
     218,   218,   219,   220,   221,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   223,   223,   223,   224,
     224,   224,   225,   225,   225,   225,   226,   226,   226,   227,
     227,   227,   228,   229,   229,   230,   230,   230,   231,   231,
     231,   231,   232,   232
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     2,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     3,     3,     1,     2,     2,     2,
       1,     1,     1,     3,     6,     3,     5,     1,     0,     3,
       1,     1,     2,     0,     5,     0,     4,     0,     2,     2,
       4,     1,     3,     1,     1,     0,     5,     0,     4,     2,
       0,     3,     1,     0,     6,     0,     4,     0,     9,     0,
       4,     0,     9,     0,     4,     0,     6,     0,     4,     1,
       0,     4,     1,     0,     2,     1,     1,     1,     1,     1,
       3,     6,     3,     1,     4,     1,     1,     1,     1,     1,
       1,     0,     1,     4,     1,     1,     1,     0,     2,     1,
       3,     3,     3,     1,     1,     4,     4,     1,     1,     3,
       1,     3,     1,     2,     4,     2,     1,     3,     2,     2,
       2,     1,     4,     2,     5,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     0,     4,     1,     0,     2,     1,     0,     4,
       2,     4,     3,     1,     3,     2,     1,     1,     1,     1,
       0,     0,     4,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     0,     4,     1,
       0,     2,     1,     2,     0,     7,     4,     6,     1,     2,
       2,     3,     6,     1,     0,     1,     0,     0,     5,     0,
       4,     1,     0,     2,     1,     1,     3,     0,     6,     1,
       0,     3,     1,     1,     1,     6,     3,     5,     3,     5,
       3,     5,     3,     1,     2,     1,     2,     3,     3,     2,
       3,     3,     3,     1,     1,     2,     2,     3,     3,     2,
       3,     3,     2,     0,     1,     0,     5,     1,     2,     4,
       0,     2,     2,     3,     1,     1,     3,     4,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     2,     3,
       3,     5,     4,     4,     4,     3,     4,     6,     8,    10,
      12,    14,    16,    18,    20,    22,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     6,     1,     3,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     2,     1,     0
};

/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error.  */
static const unsigned short int yydefact[] =
{
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     3,     4,     7,     8,     9,    10,
     117,    11,    12,     0,    13,     0,    14,     0,    15,     0,
      16,     0,    17,     0,     0,   141,    40,    42,    41,     0,
      36,    33,     0,     0,     0,    79,     0,    75,     0,    83,
       0,    55,     0,    87,     0,    67,     0,     0,     0,   351,
     363,   364,     0,     0,     0,   356,   350,   352,   365,   366,
     362,     0,     0,     0,     0,     2,   305,     0,   346,   347,
     348,   359,   360,   361,   367,   143,     1,     6,    48,     0,
     116,   119,     0,    53,     0,    65,     0,    73,     0,    77,
       0,    81,     0,    85,    52,   154,    34,     0,    37,    39,
      38,    31,     0,    45,    24,    57,    22,    57,    26,    57,
      30,    57,    28,    70,    20,    70,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   370,   371,   324,   328,   314,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,    47,    50,
      43,   118,    29,   111,    19,   111,    21,   111,    23,    93,
      25,    93,    27,   111,   184,   160,   161,   157,   158,   159,
     153,   185,   183,   179,   180,   182,   181,   187,   186,   188,
     189,   170,   164,   178,   177,   172,   173,   174,   175,   176,
     171,   168,   169,   163,   165,   166,   167,   162,     0,   145,
     147,   149,   151,   152,   156,    35,    32,     0,     0,     0,
      80,    76,    84,    56,     0,    88,    68,     0,     0,     0,
     353,     0,   352,     0,   357,   354,     0,   306,   315,   316,
     318,   320,   321,   322,   323,   325,   326,   327,   329,   330,
       0,   317,   319,   308,   309,   310,   311,   312,   313,   335,
       0,   368,   369,     0,   117,     0,   130,     0,   110,   128,
     127,   132,     0,     0,    89,    92,    95,    96,    98,   117,
      99,     0,     0,     0,   123,   124,    97,     0,     0,   191,
     191,   191,   191,   154,   142,   154,   154,   157,   155,    46,
      61,    58,    64,    59,    63,    72,    69,   333,   332,   334,
     307,   358,     0,     0,   336,     0,   144,     0,    49,    90,
       0,     0,   136,     0,    54,    94,     0,   105,   106,   107,
     108,   109,     0,     0,     0,   133,   135,     0,     0,   140,
      66,     0,     0,   190,   210,   210,     0,   148,   146,   150,
       0,     0,     0,     0,   331,     0,    44,    93,   129,   138,
     139,   131,   100,     0,   102,   114,   115,     0,   112,   304,
     121,   128,   120,     0,     0,     0,   192,    74,     0,   226,
     209,   226,    86,    60,    62,    71,   355,   337,     0,    91,
     137,   117,     0,   104,   126,   125,   134,   195,   211,     0,
     246,   225,   246,     0,     0,     0,   206,   207,   208,   203,
     193,   194,   197,   198,     0,   214,   227,     0,     0,   245,
       0,   338,     0,   101,   113,     0,   205,   196,   117,   200,
       0,     0,     0,     0,     0,     0,   224,   217,   218,     0,
     219,     0,   220,     0,   221,     0,   222,     0,   223,     0,
     212,   213,   216,   230,     0,   249,    78,    82,     0,   204,
       0,     0,     0,   202,   215,   238,   228,   229,   232,     0,
       0,   247,   252,   339,     0,   303,   199,   201,     0,   239,
     231,   233,   234,     0,   252,     0,     0,   293,   250,   251,
     254,   255,     0,   259,   262,   263,   260,     0,     0,   273,
     264,     0,   111,     0,   244,     0,   248,   302,     0,     0,
     279,   274,   253,   257,     0,     0,   300,   300,   300,     0,
     340,     0,   191,     0,   240,     0,   236,   243,     0,     0,
     292,   281,   280,   260,   261,   256,   293,   266,     0,   283,
       0,   294,   297,   268,     0,   270,     0,   293,   272,     0,
       0,     0,   241,   244,     0,   260,   301,   289,   285,     0,
       0,   295,   298,     0,     0,     0,   276,   341,     0,   373,
       0,   237,     0,   373,   291,   290,   293,   282,   293,   267,
     111,     0,   269,   271,   278,   277,     0,   372,   235,     0,
     265,   258,   286,     0,   299,   342,     0,   242,   288,   287,
     296,     0,   343,     0,     0,   344,     0,     0,   345
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,   310,    18,    39,    40,
      19,    20,   167,   168,   169,    21,    22,   173,    23,   121,
     230,   311,   313,   314,    24,   175,    25,   125,   235,   316,
      26,   177,    27,   117,    28,   179,    29,   115,    30,   181,
      31,   119,    32,   183,    33,   123,   283,   367,   284,   285,
     286,   287,   288,   289,   290,   342,   291,   377,    89,    90,
     292,   293,   294,   295,   333,   296,   297,    35,   218,   219,
     220,   221,   222,   223,   224,   352,   353,   407,   420,   421,
     422,   438,   423,   424,   389,   390,   425,   460,   461,   462,
     410,   411,   463,   476,   477,   478,   512,   479,   480,   515,
     536,   428,   429,   494,   482,   498,   499,   500,   501,   543,
     502,   503,   504,   505,   506,   507,   508,   558,   509,   547,
     548,   587,   549,   567,   550,   590,   551,   552,   510,   568,
     470,   379,    76,    77,    78,    79,    80,    81,    82,    83,
      84,   598
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -490
static const short int yypact[] =
{
      42,   195,   -35,   -53,    69,    70,   112,   160,   173,   177,
     494,  -490,    67,   242,  -490,    75,  -490,  -490,  -490,  -490,
      95,  -490,  -490,     3,  -490,    14,  -490,    15,  -490,    18,
    -490,    19,  -490,    20,    86,   217,  -490,  -490,  -490,   275,
     209,  -490,   283,   214,   167,  -490,   210,  -490,   229,  -490,
     244,  -490,   261,  -490,   271,  -490,   273,   289,   295,  -490,
    -490,  -490,   277,   296,   297,   301,  -490,   262,   320,   330,
    -490,   494,   494,   494,   494,  1294,  -490,   303,  -490,  -490,
    -490,  -490,  -490,  -490,    57,   302,  -490,  -490,   341,   319,
     315,  -490,   329,  -490,   333,  -490,   335,  -490,   336,  -490,
     337,  -490,   340,  -490,  -490,   563,  -490,   195,  -490,  -490,
    -490,  -490,   376,   339,  -490,   110,  -490,   110,  -490,   110,
    -490,   110,  -490,   427,  -490,   427,   494,   494,   494,   396,
     494,    -2,   361,   400,   494,  -490,  -490,  -490,  -490,  -490,
    1076,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   360,   401,   402,   403,  -490,   367,   372,  -490,
    -490,  -490,  -490,   205,  -490,   205,  -490,   188,  -490,   147,
    -490,   147,  -490,   188,  -490,  -490,  -490,   363,  -490,  -490,
    -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,
    -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,
    -490,  -490,  -490,  -490,  -490,  -490,  -490,  -490,   374,   386,
    -490,   385,  -490,   677,  -490,   209,  -490,   393,   -35,   -35,
    -490,  -490,  -490,  -490,   -35,  -490,  -490,  1108,  1140,  1172,
    -490,  1204,   193,   406,  -490,  -490,  1049,  -490,   394,   394,
     394,   394,  1372,  1346,   509,   432,  1390,  1396,   317,   317,
    1268,   394,   394,   293,   293,   413,   413,   413,   413,  -490,
     716,  -490,  -490,   397,   315,   341,  -490,   422,  -490,   -50,
    -490,  -490,    -9,   414,  -490,   164,  -490,  -490,  -490,   315,
    -490,   243,   404,   417,  -490,   138,  -490,   416,   420,   485,
     485,   485,   485,   620,  -490,   563,   620,  -490,  -490,  -490,
     421,   498,   421,   424,  -490,  -490,   429,  -490,  -490,  -490,
    -490,  -490,   438,   494,  -490,   494,  -490,   441,  -490,  -490,
     478,   479,   490,   446,  -490,  -490,   -47,  -490,  -490,  -490,
    -490,  -490,   482,   390,    24,  -490,  -490,    53,    -9,  -490,
    -490,   459,   452,  -490,   519,   519,   463,   385,  -490,  -490,
     -35,   -35,   -35,   499,  1294,   753,  -490,   164,  -490,  -490,
     500,  -490,  -490,   390,  -490,   465,  -490,   466,  -490,  1320,
    -490,   458,   468,   464,   469,   472,  -490,  -490,   487,   537,
    -490,   537,  -490,   424,  -490,  -490,  -490,  -490,   494,  -490,
    -490,   315,   494,  -490,  -490,  -490,  -490,   294,  -490,   489,
     541,  -490,   541,   790,   481,   483,  -490,  -490,  -490,   492,
    -490,   294,  -490,  -490,   527,    49,  -490,    25,   495,  -490,
     507,  -490,   494,  -490,  -490,   260,  -490,  -490,   315,   493,
     543,   544,   546,   547,   548,   549,  -490,  -490,  -490,   508,
    -490,   513,  -490,   514,  -490,   515,  -490,   517,  -490,   518,
    -490,    49,  -490,   562,   554,  -490,  -490,  -490,   827,  -490,
     526,   545,   290,  -490,  -490,   540,  -490,   562,  -490,   170,
     557,  -490,    43,  -490,   494,  -490,  -490,  -490,   494,  -490,
    -490,  -490,  -490,   137,    43,   494,   582,    10,  -490,    43,
    -490,  -490,   542,   553,  -490,  -490,   165,   285,   561,  -490,
    -490,   864,   188,   440,    -5,   615,  -490,  -490,   556,   585,
     176,  -490,  -490,  -490,   165,   567,   606,   607,   612,   613,
    -490,   494,   485,   577,  -490,   590,  -490,  -490,   -35,   494,
    -490,  -490,  -490,   241,  -490,  -490,   276,  -490,   580,  -490,
     631,   576,   137,  -490,   632,  -490,   636,   591,  -490,   901,
     600,   494,  -490,    -5,   648,    80,  -490,   202,  -490,   638,
     639,  -490,   421,   672,   639,   639,   203,  -490,   494,   608,
     603,  -490,   494,   608,  -490,  -490,   591,  -490,   213,  -490,
     205,   -35,  -490,  -490,  -490,  -490,   938,  -490,  -490,   628,
    -490,  -490,   208,   619,   421,  -490,   494,  -490,  -490,  -490,
    -490,   975,  -490,   494,  1012,  -490,   494,  1236,  -490
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -490,  -490,  -490,  -490,   687,  -490,    -1,  -490,  -490,   596,
    -395,  -490,  -490,  -490,   433,  -490,  -332,  -490,  -245,  -490,
     231,  -207,   349,   353,  -244,  -490,  -234,  -490,   592,  -490,
    -232,  -490,  -229,  -490,  -226,  -490,  -225,  -490,  -218,  -490,
    -206,  -490,  -188,  -490,  -184,  -490,  -172,  -490,   348,  -490,
     431,  -490,  -490,  -490,  -490,  -490,  -490,   345,  -248,  -490,
    -490,  -490,   375,  -490,   -19,  -490,     2,  -490,  -490,  -490,
     415,   418,   419,  -490,   503,  -288,  -490,  -490,  -490,  -490,
     316,  -490,  -490,  -490,   383,  -490,  -490,  -490,  -490,   278,
     350,  -490,  -490,  -490,  -490,   263,  -490,  -490,  -490,   190,
     180,   332,  -490,  -490,  -490,   265,   212,  -476,  -490,  -490,
     250,  -490,   236,  -490,  -490,  -490,  -490,  -490,  -490,  -364,
    -490,  -490,  -490,  -489,  -154,  -490,  -490,  -490,  -486,  -401,
    -337,   -10,  -490,  -490,   634,  -490,  -490,  -490,  -490,  -490,
    -490,   183
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -350
static const short int yytable[] =
{
      75,    42,    34,   298,    92,   299,   378,   300,   520,   301,
      41,   302,   354,   355,   356,    94,    96,    34,   436,    98,
     100,   102,    91,   522,   495,   331,   327,   315,   537,  -103,
     447,    43,   372,   276,  -103,    62,   378,   332,   473,  -103,
     330,   336,   373,   242,   464,     1,     2,     3,     4,     5,
       6,     7,     8,     9,     3,   440,   441,   442,   443,   444,
     445,   137,   138,   139,   140,   415,   447,   380,   576,   381,
      44,    46,   495,   496,   489,   280,   112,   537,     1,     2,
       3,     4,     5,     6,     7,     8,     9,   331,   497,   522,
      93,  -275,   171,   448,   465,   488,   521,   602,   281,   332,
     519,    95,    97,   163,   164,    99,   101,   103,    10,   495,
     496,   282,    85,    48,    45,    47,   237,   238,   239,   542,
     241,    11,   228,   229,   246,   497,    12,   383,   446,   448,
    -260,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   270,   414,    11,   395,   276,    49,   517,    12,
     583,    50,   277,   553,   555,   104,   585,  -111,  -111,  -111,
    -111,  -111,   278,   276,    52,   595,   535,    88,    54,    12,
     449,   450,    41,   345,  -111,  -111,  -111,  -111,  -111,   278,
     471,   451,   279,   452,   495,   496,   453,   276,   280,   454,
     455,   609,   564,   277,   -93,    51,   589,   456,   513,   279,
     592,   593,   346,   278,   276,   280,   449,   450,    53,   457,
     277,   281,    55,   347,   580,   348,   541,   451,   312,   452,
     278,    12,   453,   279,   282,   454,   455,   458,   281,   280,
      36,   459,    86,   456,   560,   600,    37,   114,    12,   491,
     279,   282,   584,   594,   108,   457,   280,   492,   608,   113,
     109,   488,   281,   337,   338,   339,   340,   341,   -93,    38,
     495,   496,    12,   458,   133,   282,    91,   459,   134,   281,
      56,    57,    58,   110,    59,   -93,   497,   488,   488,    12,
     116,    91,   282,   488,  -284,    60,    61,    62,   488,   105,
      63,    64,    65,   519,    66,    67,    68,    69,    70,   118,
      56,    57,    58,   364,    59,   365,   526,   527,   528,    71,
     416,   417,   418,    72,   120,    60,    61,    62,   384,   385,
      63,    64,    65,    73,    66,    67,    68,    69,    70,   419,
     532,   122,    74,   133,  -349,   566,   469,   134,   231,    71,
     232,   124,   233,    72,   106,   126,   107,  -284,   129,   312,
     312,   488,   111,    73,   112,   135,   519,   158,   159,   160,
     161,   127,    74,   554,   556,   136,   487,   128,   130,   131,
      56,    57,    58,   132,    59,   162,   166,   165,   413,   156,
     157,   158,   159,   160,   161,    60,    61,    62,   170,    12,
      63,    64,    65,    91,    66,    67,    68,    69,    70,   172,
      56,    57,    58,   174,    59,   176,   178,   180,   603,    71,
     182,   226,   468,    72,   227,    60,    61,    62,   375,   376,
      63,    64,    65,    73,    66,    67,    68,    69,    70,   234,
      91,   240,    74,   269,   244,   245,   271,   272,   273,    71,
     274,   275,   303,    72,   148,   149,   150,   304,   151,   152,
      56,    57,    58,    73,    59,   305,   156,   157,   158,   159,
     160,   161,    74,   306,   511,    60,    61,    62,   533,   309,
      63,    64,    65,   326,    66,    67,    68,    69,    70,   321,
     161,   329,   514,   343,   334,   349,   151,   152,   344,    71,
     350,   351,   112,    72,   156,   157,   158,   159,   160,   161,
     534,   360,   361,    73,    56,    57,    58,   362,    59,   363,
     366,   559,    74,   368,   370,   369,   371,   374,   386,    60,
      61,    62,   387,   388,    63,    64,    65,   563,    66,    67,
      68,    69,    70,   392,   396,   403,   400,   402,   330,  -122,
     404,   572,   406,    71,   409,   405,   408,    72,   426,   427,
     433,   141,   142,   143,   144,   145,   434,    73,   596,   148,
     149,   150,   439,   151,   152,   466,    74,   435,   472,   154,
     155,   156,   157,   158,   159,   160,   161,   467,    45,    47,
     604,    49,    51,    53,    55,    93,   611,   184,   185,   186,
      95,    97,    99,   614,   101,   103,   617,   475,   187,   188,
     189,   190,   485,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   481,   486,   488,   493,   518,   538,   523,
     540,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   524,   529,   211,   212,   539,   545,   213,   214,   215,
     216,   546,   546,   217,   184,   185,   186,   546,   557,   561,
     562,   569,   570,   571,   574,   307,   188,   189,   190,   575,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     579,   519,   582,   586,   588,   591,   599,   597,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   607,   610,
     211,   212,    87,   225,   213,   214,   215,   216,   328,   393,
     217,   184,   185,   186,   394,   399,   335,   236,   401,   382,
     358,   357,   307,   188,   189,   359,   308,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   437,   391,   474,
     490,   412,   573,   581,   430,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   565,   525,   211,   212,   516,
     544,   213,   214,   215,   216,   243,   601,   217,   141,   142,
     143,   144,   145,   146,   147,     0,   148,   149,   150,     0,
     151,   152,     0,     0,   153,     0,   154,   155,   156,   157,
     158,   159,   160,   161,     0,     0,     0,     0,     0,   324,
       0,     0,     0,     0,   325,   141,   142,   143,   144,   145,
     146,   147,     0,   148,   149,   150,     0,   151,   152,     0,
       0,   153,     0,   154,   155,   156,   157,   158,   159,   160,
     161,     0,     0,     0,     0,     0,   397,     0,     0,     0,
       0,   398,   141,   142,   143,   144,   145,   146,   147,     0,
     148,   149,   150,     0,   151,   152,     0,     0,   153,     0,
     154,   155,   156,   157,   158,   159,   160,   161,     0,     0,
       0,     0,     0,   431,     0,     0,     0,     0,   432,   141,
     142,   143,   144,   145,   146,   147,     0,   148,   149,   150,
       0,   151,   152,     0,     0,   153,     0,   154,   155,   156,
     157,   158,   159,   160,   161,     0,     0,     0,     0,     0,
     483,     0,     0,     0,     0,   484,   141,   142,   143,   144,
     145,   146,   147,     0,   148,   149,   150,     0,   151,   152,
       0,     0,   153,     0,   154,   155,   156,   157,   158,   159,
     160,   161,     0,     0,     0,     0,     0,   530,     0,     0,
       0,     0,   531,   141,   142,   143,   144,   145,   146,   147,
       0,   148,   149,   150,     0,   151,   152,     0,     0,   153,
       0,   154,   155,   156,   157,   158,   159,   160,   161,     0,
       0,     0,     0,     0,   577,     0,     0,     0,     0,   578,
     141,   142,   143,   144,   145,   146,   147,     0,   148,   149,
     150,     0,   151,   152,     0,     0,   153,     0,   154,   155,
     156,   157,   158,   159,   160,   161,     0,     0,     0,     0,
       0,   605,     0,     0,     0,     0,   606,   141,   142,   143,
     144,   145,   146,   147,     0,   148,   149,   150,     0,   151,
     152,     0,     0,   153,     0,   154,   155,   156,   157,   158,
     159,   160,   161,     0,     0,     0,     0,     0,   612,     0,
       0,     0,     0,   613,   141,   142,   143,   144,   145,   146,
     147,     0,   148,   149,   150,     0,   151,   152,     0,     0,
     153,     0,   154,   155,   156,   157,   158,   159,   160,   161,
       0,     0,     0,     0,     0,   615,     0,     0,     0,     0,
     616,   141,   142,   143,   144,   145,   146,   147,     0,   148,
     149,   150,     0,   151,   152,     0,     0,   153,     0,   154,
     155,   156,   157,   158,   159,   160,   161,     0,   141,   142,
     143,   144,   145,   146,   147,   322,   148,   149,   150,     0,
     151,   152,     0,     0,   153,     0,   154,   155,   156,   157,
     158,   159,   160,   161,     0,     0,     0,     0,     0,   247,
     141,   142,   143,   144,   145,   146,   147,     0,   148,   149,
     150,     0,   151,   152,     0,     0,   153,     0,   154,   155,
     156,   157,   158,   159,   160,   161,     0,     0,     0,     0,
       0,   317,   141,   142,   143,   144,   145,   146,   147,     0,
     148,   149,   150,     0,   151,   152,     0,     0,   153,     0,
     154,   155,   156,   157,   158,   159,   160,   161,     0,     0,
       0,     0,     0,   318,   141,   142,   143,   144,   145,   146,
     147,     0,   148,   149,   150,     0,   151,   152,     0,     0,
     153,     0,   154,   155,   156,   157,   158,   159,   160,   161,
       0,     0,     0,     0,     0,   319,   141,   142,   143,   144,
     145,   146,   147,     0,   148,   149,   150,     0,   151,   152,
       0,     0,   153,     0,   154,   155,   156,   157,   158,   159,
     160,   161,     0,     0,     0,     0,     0,   320,   141,   142,
     143,   144,   145,   146,   147,     0,   148,   149,   150,     0,
     151,   152,     0,     0,   153,     0,   154,   155,   156,   157,
     158,   159,   160,   161,     0,     0,     0,     0,     0,   618,
     141,   142,   143,   144,   145,   146,   147,     0,   148,   149,
     150,     0,   151,   152,     0,     0,   153,   323,   154,   155,
     156,   157,   158,   159,   160,   161,   141,   142,   143,   144,
     145,   146,   147,     0,   148,   149,   150,     0,   151,   152,
       0,     0,   153,     0,   154,   155,   156,   157,   158,   159,
     160,   161,   141,   142,   143,   144,   145,   146,   147,     0,
     148,   149,   150,     0,   151,   152,     0,     0,   153,     0,
     154,   155,   156,   157,   158,   159,   160,   161,   141,   142,
     143,   144,   145,     0,   147,     0,   148,   149,   150,     0,
     151,   152,     0,     0,     0,     0,   154,   155,   156,   157,
     158,   159,   160,   161,   141,   142,   143,   144,     0,     0,
       0,     0,   148,   149,   150,     0,   151,   152,     0,     0,
       0,     0,   154,   155,   156,   157,   158,   159,   160,   161,
     148,     0,   150,     0,   151,   152,   148,     0,     0,     0,
     151,   152,   156,   157,   158,   159,   160,   161,   156,   157,
     158,   159,   160,   161
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     7,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   304,     0,   293,     0,   300,     0,   300,     0,   300,
       0,   293,     0,   293,     0
};

static const short int yycheck[] =
{
      10,     2,     0,   175,     1,   177,   343,   179,   497,   181,
      45,   183,   300,   301,   302,     1,     1,    15,   419,     1,
       1,     1,    20,   499,    29,    34,   274,   234,   514,    79,
     425,    84,    79,     9,    84,    37,   373,    46,   439,    89,
      90,   289,    89,    45,    19,     3,     4,     5,     6,     7,
       8,     9,    10,    11,     5,     6,     7,     8,     9,    10,
      11,    71,    72,    73,    74,   402,   461,    43,   557,    45,
       1,     1,    29,    30,   475,    51,    81,   563,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    34,    45,   565,
      87,    81,    90,   425,    69,    85,   497,   586,    74,    46,
      90,    87,    87,    46,    47,    87,    87,    87,    66,    29,
      30,    87,    45,     1,    45,    45,   126,   127,   128,   520,
     130,    79,    12,    13,   134,    45,    84,    74,    79,   461,
      87,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   401,    79,   362,     9,    45,   495,    84,
      80,     1,    15,   527,   528,    79,   567,    20,    21,    22,
      23,    24,    25,     9,     1,   576,   513,    82,     1,    84,
     425,   425,    45,    45,    20,    21,    22,    23,    24,    25,
     438,   425,    45,   425,    29,    30,   425,     9,    51,   425,
     425,   602,   539,    15,    16,    45,   570,   425,    71,    45,
     574,   575,    74,    25,     9,    51,   461,   461,    45,   425,
      15,    74,    45,    85,   561,    87,    50,   461,   229,   461,
      25,    84,   461,    45,    87,   461,   461,   425,    74,    51,
      45,   425,     0,   461,   532,   582,    51,    80,    84,    79,
      45,    87,    50,    50,    45,   461,    51,    87,    50,    45,
      51,    85,    74,    20,    21,    22,    23,    24,    80,    74,
      29,    30,    84,   461,    81,    87,   274,   461,    85,    74,
      20,    21,    22,    74,    24,    80,    45,    85,    85,    84,
      80,   289,    87,    85,    81,    35,    36,    37,    85,    82,
      40,    41,    42,    90,    44,    45,    46,    47,    48,    80,
      20,    21,    22,   323,    24,   325,    31,    32,    33,    59,
      26,    27,    28,    63,    80,    35,    36,    37,   347,   348,
      40,    41,    42,    73,    44,    45,    46,    47,    48,    45,
     512,    80,    82,    81,    82,    69,    86,    85,   117,    59,
     119,    80,   121,    63,    79,    82,    81,    81,    81,   360,
     361,    85,    79,    73,    81,    45,    90,    74,    75,    76,
      77,    82,    82,   527,   528,    45,    86,    82,    82,    82,
      20,    21,    22,    82,    24,    82,    45,    85,   398,    72,
      73,    74,    75,    76,    77,    35,    36,    37,    79,    84,
      40,    41,    42,   401,    44,    45,    46,    47,    48,    80,
      20,    21,    22,    80,    24,    80,    80,    80,   590,    59,
      80,    45,   432,    63,    85,    35,    36,    37,    38,    39,
      40,    41,    42,    73,    44,    45,    46,    47,    48,    12,
     438,    45,    82,    83,    83,    45,    45,    45,    45,    59,
      83,    79,    89,    63,    60,    61,    62,    83,    64,    65,
      20,    21,    22,    73,    24,    79,    72,    73,    74,    75,
      76,    77,    82,    88,   484,    35,    36,    37,    38,    86,
      40,    41,    42,    86,    44,    45,    46,    47,    48,    83,
      77,    69,   493,    89,    80,    79,    64,    65,    81,    59,
      80,    16,    81,    63,    72,    73,    74,    75,    76,    77,
      70,    13,    88,    73,    20,    21,    22,    88,    24,    81,
      79,   531,    82,    45,    34,    46,    80,    45,    69,    35,
      36,    37,    80,    14,    40,    41,    42,   538,    44,    45,
      46,    47,    48,    80,    45,    79,    46,    82,    90,    81,
      86,   552,    80,    59,    17,    86,    69,    63,    69,    18,
      79,    52,    53,    54,    55,    56,    83,    73,   578,    60,
      61,    62,    45,    64,    65,    80,    82,    85,    85,    70,
      71,    72,    73,    74,    75,    76,    77,    80,    45,    45,
     591,    45,    45,    45,    45,    87,   606,    34,    35,    36,
      87,    87,    87,   613,    87,    87,   616,    45,    45,    46,
      47,    48,    86,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    69,    79,    85,    69,    45,    13,    87,
      45,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    88,    81,    80,    81,    89,    79,    84,    85,    86,
      87,    45,    45,    90,    34,    35,    36,    45,    45,    82,
      70,    81,    31,    87,    32,    45,    46,    47,    48,    33,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      80,    90,    34,    45,    45,    13,    83,    79,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    70,    80,
      80,    81,    15,   107,    84,    85,    86,    87,   275,   360,
      90,    34,    35,    36,   361,   367,   285,   125,   373,   344,
     305,   303,    45,    46,    47,   306,   223,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,   421,   355,   461,
     477,   391,   552,   563,   412,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,   543,   506,    80,    81,   494,
     524,    84,    85,    86,    87,   131,   583,    90,    52,    53,
      54,    55,    56,    57,    58,    -1,    60,    61,    62,    -1,
      64,    65,    -1,    -1,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    -1,    88,    52,    53,    54,    55,    56,
      57,    58,    -1,    60,    61,    62,    -1,    64,    65,    -1,
      -1,    68,    -1,    70,    71,    72,    73,    74,    75,    76,
      77,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    88,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    88,    52,
      53,    54,    55,    56,    57,    58,    -1,    60,    61,    62,
      -1,    64,    65,    -1,    -1,    68,    -1,    70,    71,    72,
      73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    88,    52,    53,    54,    55,
      56,    57,    58,    -1,    60,    61,    62,    -1,    64,    65,
      -1,    -1,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    88,    52,    53,    54,    55,    56,    57,    58,
      -1,    60,    61,    62,    -1,    64,    65,    -1,    -1,    68,
      -1,    70,    71,    72,    73,    74,    75,    76,    77,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    88,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    64,    65,    -1,    -1,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,    -1,    -1,    88,    52,    53,    54,
      55,    56,    57,    58,    -1,    60,    61,    62,    -1,    64,
      65,    -1,    -1,    68,    -1,    70,    71,    72,    73,    74,
      75,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,    88,    52,    53,    54,    55,    56,    57,
      58,    -1,    60,    61,    62,    -1,    64,    65,    -1,    -1,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      88,    52,    53,    54,    55,    56,    57,    58,    -1,    60,
      61,    62,    -1,    64,    65,    -1,    -1,    68,    -1,    70,
      71,    72,    73,    74,    75,    76,    77,    -1,    52,    53,
      54,    55,    56,    57,    58,    86,    60,    61,    62,    -1,
      64,    65,    -1,    -1,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    64,    65,    -1,    -1,    68,    -1,    70,    71,
      72,    73,    74,    75,    76,    77,    -1,    -1,    -1,    -1,
      -1,    83,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    -1,    -1,
      -1,    -1,    -1,    83,    52,    53,    54,    55,    56,    57,
      58,    -1,    60,    61,    62,    -1,    64,    65,    -1,    -1,
      68,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      -1,    -1,    -1,    -1,    -1,    83,    52,    53,    54,    55,
      56,    57,    58,    -1,    60,    61,    62,    -1,    64,    65,
      -1,    -1,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    83,    52,    53,
      54,    55,    56,    57,    58,    -1,    60,    61,    62,    -1,
      64,    65,    -1,    -1,    68,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    -1,    -1,    -1,    -1,    -1,    83,
      52,    53,    54,    55,    56,    57,    58,    -1,    60,    61,
      62,    -1,    64,    65,    -1,    -1,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    52,    53,    54,    55,
      56,    57,    58,    -1,    60,    61,    62,    -1,    64,    65,
      -1,    -1,    68,    -1,    70,    71,    72,    73,    74,    75,
      76,    77,    52,    53,    54,    55,    56,    57,    58,    -1,
      60,    61,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      70,    71,    72,    73,    74,    75,    76,    77,    52,    53,
      54,    55,    56,    -1,    58,    -1,    60,    61,    62,    -1,
      64,    65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    76,    77,    52,    53,    54,    55,    -1,    -1,
      -1,    -1,    60,    61,    62,    -1,    64,    65,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    76,    77,
      60,    -1,    62,    -1,    64,    65,    60,    -1,    -1,    -1,
      64,    65,    72,    73,    74,    75,    76,    77,    72,    73,
      74,    75,    76,    77
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      66,    79,    84,    92,    93,    94,    95,    96,    98,   101,
     102,   106,   107,   109,   115,   117,   121,   123,   125,   127,
     129,   131,   133,   135,   157,   158,    45,    51,    74,    99,
     100,    45,    97,    84,     1,    45,     1,    45,     1,    45,
       1,    45,     1,    45,     1,    45,    20,    21,    22,    24,
      35,    36,    37,    40,    41,    42,    44,    45,    46,    47,
      48,    59,    63,    73,    82,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,    45,     0,    95,    82,   149,
     150,   157,     1,    87,     1,    87,     1,    87,     1,    87,
       1,    87,     1,    87,    79,    82,    79,    81,    45,    51,
      74,    79,    81,    45,    80,   128,    80,   124,    80,   132,
      80,   110,    80,   136,    80,   118,    82,    82,    82,    81,
      82,    82,    82,    81,    85,    45,    45,   222,   222,   222,
     222,    52,    53,    54,    55,    56,    57,    58,    60,    61,
      62,    64,    65,    68,    70,    71,    72,    73,    74,    75,
      76,    77,    82,    46,    47,    85,    45,   103,   104,   105,
      79,   157,    80,   108,    80,   116,    80,   122,    80,   126,
      80,   130,    80,   134,    34,    35,    36,    45,    46,    47,
      48,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    80,    81,    84,    85,    86,    87,    90,   159,   160,
     161,   162,   163,   164,   165,   100,    45,    85,    12,    13,
     111,   111,   111,   111,    12,   119,   119,   222,   222,   222,
      45,   222,    45,   225,    83,    45,   222,    83,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,    83,
     222,    45,    45,    45,    83,    79,     9,    15,    25,    45,
      51,    74,    87,   137,   139,   140,   141,   142,   143,   144,
     145,   147,   151,   152,   153,   154,   156,   157,   137,   137,
     137,   137,   137,    89,    83,    79,    88,    45,   165,    86,
      97,   112,    97,   113,   114,   112,   120,    83,    83,    83,
      83,    83,    86,    69,    83,    88,    86,   149,   105,    69,
      90,    34,    46,   155,    80,   141,   149,    20,    21,    22,
      23,    24,   146,    89,    81,    45,    74,    85,    87,    79,
      80,    16,   166,   167,   166,   166,   166,   162,   161,   163,
      13,    88,    88,    81,   222,   222,    79,   138,    45,    46,
      34,    80,    79,    89,    45,    38,    39,   148,   221,   222,
      43,    45,   153,    74,   155,   155,    69,    80,    14,   175,
     176,   175,    80,   113,   114,   112,    45,    83,    88,   139,
      46,   148,    82,    79,    86,    86,    80,   168,    69,    17,
     181,   182,   181,   222,   149,   221,    26,    27,    28,    45,
     169,   170,   171,   173,   174,   177,    69,    18,   192,   193,
     192,    83,    88,    79,    83,    85,   220,   171,   172,    45,
       6,     7,     8,     9,    10,    11,    79,   101,   107,   109,
     115,   117,   121,   123,   125,   127,   129,   131,   133,   135,
     178,   179,   180,   183,    19,    69,    80,    80,   222,    86,
     221,   149,    85,   220,   180,    45,   184,   185,   186,   188,
     189,    69,   195,    83,    88,    86,    79,    86,    85,   220,
     186,    79,    87,    69,   194,    29,    30,    45,   196,   197,
     198,   199,   201,   202,   203,   204,   205,   206,   207,   209,
     219,   222,   187,    71,    97,   190,   196,   221,    45,    90,
     214,   220,   198,    87,    88,   201,    31,    32,    33,    81,
      83,    88,   137,    38,    70,   221,   191,   219,    13,    89,
      45,    50,   220,   200,   203,    79,    45,   210,   211,   213,
     215,   217,   218,   210,   215,   210,   215,    45,   208,   222,
     166,    82,    70,    97,   221,   197,    69,   214,   220,    81,
      31,    87,    97,   190,    32,    33,   214,    83,    88,    80,
     221,   191,    34,    80,    50,   220,    45,   212,    45,   210,
     216,    13,   210,   210,    50,   220,   222,    79,   232,    83,
     221,   232,   214,   137,    97,    83,    88,    70,    50,   220,
      80,   222,    83,    88,   222,    83,    88,   222,    83
};


/* Prevent warning if -Wmissing-prototypes.  */
int yyparse (void);

/* Error token number */
#define YYTERROR 1

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */


#define YYRHSLOC(Rhs, K) ((Rhs)[K].yystate.yyloc)
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))							\
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

/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# define YY_LOCATION_PRINT(File, Loc)			\
    fprintf (File, "%d.%d-%d.%d",			\
	     (Loc).first_line, (Loc).first_column,	\
	     (Loc).last_line,  (Loc).last_column)
#endif


#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#define YYLEX yylex ()

YYSTYPE yylval;

YYLTYPE yylloc;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)							     \
   do { YYRESULTTAG yyflag = YYE; if (yyflag != yyok) return yyflag; }	     \
   while (YYID (0))

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			    \
do {									    \
  if (yydebug)								    \
    {									    \
      YYFPRINTF (stderr, "%s ", Title);					    \
      yy_symbol_print (stderr, Type,					    \
		       Value, Location);  \
      YYFPRINTF (stderr, "\n");						    \
    }									    \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
# if (! defined __cplusplus \
      || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	  && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL))
#  define YYSTACKEXPANDABLE 1
# else
#  define YYSTACKEXPANDABLE 0
# endif
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)			\
  do {							\
    if (Yystack->yyspaceLeft < YYHEADROOM)		\
      yyexpandGLRStack (Yystack);			\
  } while (YYID (0))
#else
# define YY_RESERVE_GLRSTACK(Yystack)			\
  do {							\
    if (Yystack->yyspaceLeft < YYHEADROOM)		\
      yyMemoryExhausted (Yystack);			\
  } while (YYID (0))
#endif


#if YYERROR_VERBOSE

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
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
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
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef short int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the first token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;
  /* To compute the location of the error token.  */
  yyGLRStackItem yyerror_range[3];

  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static void yyFail (yyGLRStack* yystackp, const char* yymsg)
  __attribute__ ((__noreturn__));
static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != NULL)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static void yyMemoryExhausted (yyGLRStack* yystackp)
  __attribute__ ((__noreturn__));
static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) __attribute__ ((__unused__));
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  yyGLRState* s;
  int i;
  s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
      YYASSERT (s->yyresolved);
      yyvsp[i].yystate.yyresolved = yytrue;
      yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     __attribute__ ((__unused__));
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
/*ARGSUSED*/ static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
	      YYSTYPE* yyvalp,
	      YYLTYPE* YYOPTIONAL_LOC (yylocp),
	      yyGLRStack* yystackp
	      )
{
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  int yylow;
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)						     \
  return yyerror (YY_("syntax error: cannot back up")),     \
	 yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);
  yystackp->yyerror_range[1].yystate.yyloc = *yylocp;

  switch (yyn)
    {
        case 2:
#line 197 "ned2.y"
    { ps.nedfile->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval)); }
    break;

  case 19:
#line 228 "ned2.y"
    { storePos(ps.component, (*yylocp)); restoreGlobalParserState(); }
    break;

  case 20:
#line 230 "ned2.y"
    { restoreGlobalParserState(); }
    break;

  case 21:
#line 232 "ned2.y"
    { storePos(ps.component, (*yylocp)); restoreGlobalParserState(); }
    break;

  case 22:
#line 234 "ned2.y"
    { restoreGlobalParserState(); }
    break;

  case 23:
#line 236 "ned2.y"
    { storePos(ps.component, (*yylocp)); restoreGlobalParserState(); }
    break;

  case 24:
#line 238 "ned2.y"
    { restoreGlobalParserState(); }
    break;

  case 25:
#line 240 "ned2.y"
    { storePos(ps.component, (*yylocp)); restoreGlobalParserState(); }
    break;

  case 26:
#line 242 "ned2.y"
    { restoreGlobalParserState(); }
    break;

  case 27:
#line 244 "ned2.y"
    { storePos(ps.component, (*yylocp)); restoreGlobalParserState(); }
    break;

  case 28:
#line 246 "ned2.y"
    { restoreGlobalParserState(); }
    break;

  case 29:
#line 248 "ned2.y"
    { storePos(ps.component, (*yylocp)); restoreGlobalParserState(); }
    break;

  case 30:
#line 250 "ned2.y"
    { restoreGlobalParserState(); }
    break;

  case 31:
#line 255 "ned2.y"
    {
                  ps.package = (PackageElement *)createElementWithTag(NED_PACKAGE, ps.nedfile);
                  ps.package->setName(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc)).c_str());
                  storePos(ps.package,(*yylocp));
                  storeBannerAndRightComments(ps.package,(*yylocp));
                }
    break;

  case 34:
#line 273 "ned2.y"
    {
                  ps.import = (ImportElement *)createElementWithTag(NED_IMPORT, ps.nedfile);
                  ps.import->setImportSpec(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc)).c_str());
                  storePos(ps.import,(*yylocp));
                  storeBannerAndRightComments(ps.import,(*yylocp));
                }
    break;

  case 43:
#line 300 "ned2.y"
    {
                    storePos(ps.propertydecl, (*yylocp));
                    storeBannerAndRightComments(ps.propertydecl,(*yylocp));
                }
    break;

  case 44:
#line 305 "ned2.y"
    {
                    storePos(ps.propertydecl, (*yylocp));
                    storeBannerAndRightComments(ps.propertydecl,(*yylocp));
                }
    break;

  case 45:
#line 313 "ned2.y"
    {
                  ps.propertydecl = (PropertyDeclElement *)createElementWithTag(NED_PROPERTY_DECL, ps.nedfile);
                  ps.propertydecl->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc)));
                }
    break;

  case 46:
#line 318 "ned2.y"
    {
                  ps.propertydecl = (PropertyDeclElement *)createElementWithTag(NED_PROPERTY_DECL, ps.nedfile);
                  ps.propertydecl->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yyloc)));
                  ps.propertydecl->setIsArray(true);
                }
    break;

  case 51:
#line 337 "ned2.y"
    {
                  ps.propkey = (PropertyKeyElement *)createElementWithTag(NED_PROPERTY_KEY, ps.propertydecl);
                  ps.propkey->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)));
                  storePos(ps.propkey, (*yylocp));
                }
    break;

  case 52:
#line 349 "ned2.y"
    {
                  storePos(ps.property, (*yylocp));
                  storeBannerAndRightComments(ps.property,(*yylocp));
                }
    break;

  case 53:
#line 360 "ned2.y"
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createElementWithTag(NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
    break;

  case 54:
#line 369 "ned2.y"
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(ps.component, (*yylocp));
                  storePos(ps.component, (*yylocp));
                  storeTrailingComment(ps.component,(*yylocp));
                }
    break;

  case 55:
#line 383 "ned2.y"
    {
                  ps.component = (ChannelElement *)createElementWithTag(NED_CHANNEL, ps.inTypes ? (NEDElement *)ps.types : (NEDElement *)ps.nedfile);
                  ((ChannelElement *)ps.component)->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                }
    break;

  case 56:
#line 388 "ned2.y"
    { storeBannerAndRightComments(ps.component,(*yylocp)); }
    break;

  case 61:
#line 400 "ned2.y"
    {
                  ps.extends = (ExtendsElement *)createElementWithTag(NED_EXTENDS, ps.component);
                  ps.extends->setName(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)).c_str());
                  storePos(ps.extends, (*yylocp));
                }
    break;

  case 64:
#line 414 "ned2.y"
    {
                  ps.interfacename = (InterfaceNameElement *)createElementWithTag(NED_INTERFACE_NAME, ps.component);
                  ps.interfacename->setName(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)).c_str());
                  storePos(ps.interfacename, (*yylocp));
                }
    break;

  case 65:
#line 426 "ned2.y"
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createElementWithTag(NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
    break;

  case 66:
#line 435 "ned2.y"
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(ps.component, (*yylocp));
                  storePos(ps.component, (*yylocp));
                  storeTrailingComment(ps.component,(*yylocp));
                }
    break;

  case 67:
#line 449 "ned2.y"
    {
                  ps.component = (ChannelInterfaceElement *)createElementWithTag(NED_CHANNEL_INTERFACE, ps.inTypes ? (NEDElement *)ps.types : (NEDElement *)ps.nedfile);
                  ((ChannelInterfaceElement *)ps.component)->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                }
    break;

  case 68:
#line 454 "ned2.y"
    { storeBannerAndRightComments(ps.component,(*yylocp)); }
    break;

  case 73:
#line 472 "ned2.y"
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createElementWithTag(NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
    break;

  case 74:
#line 482 "ned2.y"
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(ps.component, (*yylocp));
                  storePos(ps.component, (*yylocp));
                  storeTrailingComment(ps.component,(*yylocp));
                }
    break;

  case 75:
#line 496 "ned2.y"
    {
                  ps.component = (SimpleModuleElement *)createElementWithTag(NED_SIMPLE_MODULE, ps.inTypes ? (NEDElement *)ps.types : (NEDElement *)ps.nedfile );
                  ((SimpleModuleElement *)ps.component)->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                }
    break;

  case 76:
#line 501 "ned2.y"
    { storeBannerAndRightComments(ps.component,(*yylocp)); }
    break;

  case 77:
#line 509 "ned2.y"
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createElementWithTag(NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
    break;

  case 78:
#line 522 "ned2.y"
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(ps.component, (*yylocp));
                  storePos(ps.component, (*yylocp));
                  storeTrailingComment(ps.component,(*yylocp));
                }
    break;

  case 79:
#line 536 "ned2.y"
    {
                  ps.component = (CompoundModuleElement *)createElementWithTag(NED_COMPOUND_MODULE, ps.inTypes ? (NEDElement *)ps.types : (NEDElement *)ps.nedfile );
                  ((CompoundModuleElement *)ps.component)->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                }
    break;

  case 80:
#line 541 "ned2.y"
    { storeBannerAndRightComments(ps.component,(*yylocp)); }
    break;

  case 81:
#line 549 "ned2.y"
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)ps.component->getFirstChildWithTag(NED_PARAMETERS); // networkheader already created it for @isNetwork
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
    break;

  case 82:
#line 562 "ned2.y"
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(ps.component, (*yylocp));
                  storePos(ps.component, (*yylocp));
                  storeTrailingComment(ps.component,(*yylocp));
                }
    break;

  case 83:
#line 576 "ned2.y"
    {
                  ps.component = (CompoundModuleElement *)createElementWithTag(NED_COMPOUND_MODULE, ps.inTypes ? (NEDElement *)ps.types : (NEDElement *)ps.nedfile );
                  ((CompoundModuleElement *)ps.component)->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                }
    break;

  case 84:
#line 581 "ned2.y"
    {
                  setIsNetworkProperty(ps.component);
                  storeBannerAndRightComments(ps.component,(*yylocp));
                }
    break;

  case 85:
#line 592 "ned2.y"
    {
                  ps.typescope.push(ps.component);
                  ps.blockscope.push(ps.component);
                  ps.parameters = (ParametersElement *)createElementWithTag(NED_PARAMETERS, ps.component);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
    break;

  case 86:
#line 602 "ned2.y"
    {
                  ps.propertyscope.pop();
                  ps.blockscope.pop();
                  ps.component = ps.typescope.top();
                  ps.typescope.pop();
                  if (np->getStoreSourceFlag())
                      storeComponentSourceCode(ps.component, (*yylocp));
                  storePos(ps.component, (*yylocp));
                  storeTrailingComment(ps.component,(*yylocp));
                }
    break;

  case 87:
#line 616 "ned2.y"
    {
                  ps.component = (ModuleInterfaceElement *)createElementWithTag(NED_MODULE_INTERFACE, ps.inTypes ? (NEDElement *)ps.types : (NEDElement *)ps.nedfile);
                  ((ModuleInterfaceElement *)ps.component)->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                }
    break;

  case 88:
#line 621 "ned2.y"
    { storeBannerAndRightComments(ps.component,(*yylocp)); }
    break;

  case 89:
#line 629 "ned2.y"
    {
                  storePos(ps.parameters, (*yylocp));
                  if (!ps.parameters->getFirstChild()) { // delete "parameters" element if empty
                      ps.parameters->getParent()->removeChild(ps.parameters);
                      delete ps.parameters;
                  }
                }
    break;

  case 90:
#line 637 "ned2.y"
    {
                  ps.parameters->setIsImplicit(false);
                  storeBannerAndRightComments(ps.parameters,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                }
    break;

  case 91:
#line 642 "ned2.y"
    { storePos(ps.parameters, (*yylocp)); }
    break;

  case 100:
#line 670 "ned2.y"
    {
                  ps.propertyscope.pop();
                  storePos(ps.param, (*yylocp));
                  storeBannerAndRightComments(ps.param,(*yylocp));
                }
    break;

  case 101:
#line 676 "ned2.y"
    {
                  ps.propertyscope.pop();
                  if (!isEmpty(ps.exprPos))  // note: $4 cannot be checked, as it's always NULL when expression parsing is off
                      addExpression(ps.param, "value",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval));
                  else {
                      // Note: "=default" is currently not accepted in NED files, because
                      // it would be complicated to support in the Inifile Editor.
                      if (ps.isDefault)
                          np->getErrors()->addError(ps.param,"applying the default value (\"=default\" syntax) is not supported in NED files");
                  }
                  ps.param->setIsDefault(ps.isDefault);
                  storePos(ps.param, (*yylocp));
                  storeBannerAndRightComments(ps.param,(*yylocp));
                }
    break;

  case 102:
#line 694 "ned2.y"
    {
                  ps.param = addParameter(ps.parameters, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc));
                  ps.param->setType(ps.paramType);
                  ps.param->setIsVolatile(ps.isVolatile);
                  ps.propertyscope.push(ps.param);
                }
    break;

  case 103:
#line 701 "ned2.y"
    {
                  ps.param = addParameter(ps.parameters, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc));
                  ps.propertyscope.push(ps.param);
                }
    break;

  case 104:
#line 709 "ned2.y"
    {
                  ps.param = addParameter(ps.parameters, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc));
                  ps.param->setIsPattern(true);
                  const char *patt = ps.param->getName();
                  if (strchr(patt,' ') || strchr(patt,'\t') || strchr(patt,'\n'))
                      np->getErrors()->addError(ps.param,"parameter name patterns may not contain whitespace");
                  if (!isEmpty(ps.exprPos))  // note: $3 cannot be checked, as it's always NULL when expression parsing is off
                      addExpression(ps.param, "value",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval));
                  else {
                      // Note: "=default" is currently not accepted in NED files, because
                      // it would be complicated to support in the Inifile Editor.
                      if (ps.isDefault)
                          np->getErrors()->addError(ps.param,"applying the default value (\"=default\" syntax) is not supported in NED files");
                  }
                  ps.param->setIsDefault(ps.isDefault);
                  storePos(ps.param, (*yylocp));
                  storeBannerAndRightComments(ps.param,(*yylocp));
                }
    break;

  case 105:
#line 731 "ned2.y"
    { ps.paramType = NED_PARTYPE_DOUBLE; }
    break;

  case 106:
#line 733 "ned2.y"
    { ps.paramType = NED_PARTYPE_INT; }
    break;

  case 107:
#line 735 "ned2.y"
    { ps.paramType = NED_PARTYPE_STRING; }
    break;

  case 108:
#line 737 "ned2.y"
    { ps.paramType = NED_PARTYPE_BOOL; }
    break;

  case 109:
#line 739 "ned2.y"
    { ps.paramType = NED_PARTYPE_XML; }
    break;

  case 110:
#line 744 "ned2.y"
    { ps.isVolatile = true; }
    break;

  case 111:
#line 746 "ned2.y"
    { ps.isVolatile = false; }
    break;

  case 112:
#line 751 "ned2.y"
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval); ps.exprPos = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc); ps.isDefault = false; }
    break;

  case 113:
#line 753 "ned2.y"
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval); ps.exprPos = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yyloc); ps.isDefault = true; }
    break;

  case 114:
#line 755 "ned2.y"
    {
                  ((*yyvalp)) = NULL; ps.exprPos = makeEmptyYYLTYPE(); ps.isDefault = true;
                }
    break;

  case 115:
#line 759 "ned2.y"
    {
                  np->getErrors()->addError(ps.parameters,"interactive prompting (\"=ask\" syntax) is not supported in NED files");
                  ((*yyvalp)) = NULL; ps.exprPos = makeEmptyYYLTYPE(); ps.isDefault = false;
                }
    break;

  case 140:
#line 815 "ned2.y"
    {
                  storePos(ps.property, (*yylocp));
                  storeBannerAndRightComments(ps.property,(*yylocp));
                }
    break;

  case 143:
#line 828 "ned2.y"
    {
                  assertNonEmpty(ps.propertyscope);
                  ps.property = addProperty(ps.propertyscope.top(), toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                  ps.propvals.clear(); // just to be safe
                }
    break;

  case 144:
#line 834 "ned2.y"
    {
                  assertNonEmpty(ps.propertyscope);
                  ps.property = addProperty(ps.propertyscope.top(), toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yyloc)));
                  ps.property->setIndex(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yyloc)));
                  ps.propvals.clear(); // just to be safe
                }
    break;

  case 148:
#line 853 "ned2.y"
    {
                  ps.propkey = (PropertyKeyElement *)createElementWithTag(NED_PROPERTY_KEY, ps.property);
                  ps.propkey->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)));
                  for (int i=0; i<(int)ps.propvals.size(); i++)
                      ps.propkey->appendChild(ps.propvals[i]);
                  ps.propvals.clear();
                  storePos(ps.propkey, (*yylocp));
                }
    break;

  case 149:
#line 862 "ned2.y"
    {
                  ps.propkey = (PropertyKeyElement *)createElementWithTag(NED_PROPERTY_KEY, ps.property);
                  ps.propkey->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval));
                  for (int i=0; i<(int)ps.propvals.size(); i++)
                      ps.propkey->appendChild(ps.propvals[i]);
                  ps.propvals.clear();
                  storePos(ps.propkey, (*yylocp));
                }
    break;

  case 150:
#line 874 "ned2.y"
    { ps.propvals.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 151:
#line 876 "ned2.y"
    { ps.propvals.push_back((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval)); }
    break;

  case 152:
#line 881 "ned2.y"
    { ((*yyvalp)) = createLiteral(NED_CONST_SPEC, (*yylocp), (*yylocp)); }
    break;

  case 153:
#line 883 "ned2.y"
    { ((*yyvalp)) = createStringLiteral((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;

  case 154:
#line 885 "ned2.y"
    {
                  LiteralElement *node = (LiteralElement *)createElementWithTag(NED_LITERAL);
                  node->setType(NED_CONST_SPEC); // and leave both value and text at ""
                  ((*yyvalp)) = node;
                }
    break;

  case 192:
#line 914 "ned2.y"
    {
                  assertNonEmpty(ps.blockscope);
                  ps.gates = (GatesElement *)createElementWithTag(NED_GATES, ps.blockscope.top());
                  storeBannerAndRightComments(ps.gates,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                }
    break;

  case 193:
#line 920 "ned2.y"
    {
                  storePos(ps.gates, (*yylocp));
                }
    break;

  case 196:
#line 932 "ned2.y"
    {
                  storeBannerAndRightComments(ps.gate,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                }
    break;

  case 197:
#line 936 "ned2.y"
    {
                  storeBannerAndRightComments(ps.gate,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc));
                }
    break;

  case 198:
#line 946 "ned2.y"
    {
                  ps.propertyscope.push(ps.gate);
                }
    break;

  case 199:
#line 950 "ned2.y"
    {
                  ps.propertyscope.pop();
                  storePos(ps.gate, (*yylocp));
                }
    break;

  case 200:
#line 958 "ned2.y"
    {
                  ps.gate = addGate(ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                }
    break;

  case 201:
#line 963 "ned2.y"
    {
                  ps.gate = addGate(ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                  ps.gate->setIsVector(true);
                }
    break;

  case 202:
#line 969 "ned2.y"
    {
                  ps.gate = addGate(ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc));
                  ps.gate->setType(ps.gateType);
                  ps.gate->setIsVector(true);
                  addExpression(ps.gate, "vector-size",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval));
                }
    break;

  case 203:
#line 976 "ned2.y"
    {
                  ps.gate = addGate(ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc));
                }
    break;

  case 204:
#line 980 "ned2.y"
    {
                  ps.gate = addGate(ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc));
                  ps.gate->setIsVector(true);
                }
    break;

  case 205:
#line 985 "ned2.y"
    {
                  ps.gate = addGate(ps.gates, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc));
                  ps.gate->setIsVector(true);
                  addExpression(ps.gate, "vector-size",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval));
                }
    break;

  case 206:
#line 994 "ned2.y"
    { ps.gateType = NED_GATETYPE_INPUT; }
    break;

  case 207:
#line 996 "ned2.y"
    { ps.gateType = NED_GATETYPE_OUTPUT; }
    break;

  case 208:
#line 998 "ned2.y"
    { ps.gateType = NED_GATETYPE_INOUT; }
    break;

  case 211:
#line 1011 "ned2.y"
    {
                  assertNonEmpty(ps.blockscope);
                  ps.types = (TypesElement *)createElementWithTag(NED_TYPES, ps.blockscope.top());
                  storeBannerAndRightComments(ps.types,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                  if (ps.inTypes)
                     np->getErrors()->addError(ps.types,"more than one level of type nesting is not allowed");
                  ps.inTypes = true;
                }
    break;

  case 212:
#line 1020 "ned2.y"
    {
                  ps.inTypes = false;
                  storePos(ps.types, (*yylocp));
                }
    break;

  case 227:
#line 1057 "ned2.y"
    {
                  assertNonEmpty(ps.blockscope);
                  ps.submods = (SubmodulesElement *)createElementWithTag(NED_SUBMODULES, ps.blockscope.top());
                  storeBannerAndRightComments(ps.submods,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                }
    break;

  case 228:
#line 1063 "ned2.y"
    {
                  storePos(ps.submods, (*yylocp));
                }
    break;

  case 233:
#line 1080 "ned2.y"
    {
                  storeBannerAndRightComments(ps.submod,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                  storePos(ps.submod, (*yylocp));
                }
    break;

  case 234:
#line 1085 "ned2.y"
    {
                  ps.blockscope.push(ps.submod);
                  ps.parameters = (ParametersElement *)createElementWithTag(NED_PARAMETERS, ps.submod);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                  storeBannerAndRightComments(ps.submod,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                }
    break;

  case 235:
#line 1095 "ned2.y"
    {
                  ps.blockscope.pop();
                  ps.propertyscope.pop();
                  storePos(ps.submod, (*yylocp));
                  storeTrailingComment(ps.submod,(*yylocp));
                }
    break;

  case 236:
#line 1105 "ned2.y"
    {
                  ps.submod->setType(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yyloc)).c_str());
                  if ((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval)) ps.submod->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval));
                }
    break;

  case 237:
#line 1110 "ned2.y"
    {
                  addOptionalExpression(ps.submod, "like-expr", ps.exprPos, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval));
                  ps.submod->setLikeType(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yyloc)).c_str());
                  ps.submod->setIsDefault(ps.isDefault);
                  if ((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval)) ps.submod->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval));
                }
    break;

  case 238:
#line 1120 "ned2.y"
    {
                  ps.submod = (SubmoduleElement *)createElementWithTag(NED_SUBMODULE, ps.submods);
                  ps.submod->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)));
                }
    break;

  case 239:
#line 1125 "ned2.y"
    {
                  ps.submod = (SubmoduleElement *)createElementWithTag(NED_SUBMODULE, ps.submods);
                  ps.submod->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc)));
                  addExpression(ps.submod, "vector-size",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval));
                }
    break;

  case 240:
#line 1134 "ned2.y"
    { ((*yyvalp)) = NULL; ps.exprPos = makeEmptyYYLTYPE(); ps.isDefault = false; }
    break;

  case 241:
#line 1136 "ned2.y"
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval); ps.exprPos = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc); ps.isDefault = false; }
    break;

  case 242:
#line 1138 "ned2.y"
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval); ps.exprPos = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yyloc); ps.isDefault = true; }
    break;

  case 243:
#line 1143 "ned2.y"
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval); }
    break;

  case 244:
#line 1145 "ned2.y"
    { ((*yyvalp)) = NULL; }
    break;

  case 247:
#line 1158 "ned2.y"
    {
                  assertNonEmpty(ps.blockscope);
                  ps.conns = (ConnectionsElement *)createElementWithTag(NED_CONNECTIONS, ps.blockscope.top());
                  ps.conns->setAllowUnconnected(true);
                  storeBannerAndRightComments(ps.conns,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc));
                }
    break;

  case 248:
#line 1165 "ned2.y"
    {
                  storePos(ps.conns, (*yylocp));
                }
    break;

  case 249:
#line 1169 "ned2.y"
    {
                  assertNonEmpty(ps.blockscope);
                  ps.conns = (ConnectionsElement *)createElementWithTag(NED_CONNECTIONS, ps.blockscope.top());
                  storeBannerAndRightComments(ps.conns,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                }
    break;

  case 250:
#line 1175 "ned2.y"
    {
                  storePos(ps.conns, (*yylocp));
                }
    break;

  case 256:
#line 1193 "ned2.y"
    {
                  if ((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval)) {
                      transferChildren((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval), ps.conn);
                      delete (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval);
                  }
                  storePos(ps.conn, (*yylocp));
                  storeBannerAndRightComments(ps.conn,(*yylocp));
                }
    break;

  case 257:
#line 1205 "ned2.y"
    {
                  if (ps.inConnGroup)
                      np->getErrors()->addError(ps.conngroup,"nested connection groups are not allowed");
                  ps.conngroup = (ConnectionGroupElement *)createElementWithTag(NED_CONNECTION_GROUP, ps.conns);
                  if ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval)) {
                      // for's and if's were collected in a temporary UnknownElement, put them under conngroup now
                      transferChildren((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval), ps.conngroup);
                      delete (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval);
                  }
                  ps.inConnGroup = true;
                  storeBannerAndRightComments(ps.conngroup,(((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc));
                }
    break;

  case 258:
#line 1218 "ned2.y"
    {
                  ps.inConnGroup = false;
                  storePos(ps.conngroup,(*yylocp));
                  storeTrailingComment(ps.conngroup,(*yylocp));
                }
    break;

  case 259:
#line 1227 "ned2.y"
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval); }
    break;

  case 260:
#line 1229 "ned2.y"
    { ((*yyvalp)) = NULL; }
    break;

  case 261:
#line 1234 "ned2.y"
    {
                  (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval)->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval));
                  ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval);
                }
    break;

  case 262:
#line 1239 "ned2.y"
    {
                  ((*yyvalp)) = new UnknownElement();
                  ((*yyvalp))->appendChild((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval));
                }
    break;

  case 265:
#line 1252 "ned2.y"
    {
                  ps.loop = (LoopElement *)createElementWithTag(NED_LOOP);
                  ps.loop->setParamName( toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (6))].yystate.yyloc)) );
                  addExpression(ps.loop, "from-value",(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (6))].yystate.yysemantics.yysval));
                  addExpression(ps.loop, "to-value",(((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval));
                  storePos(ps.loop, (*yylocp));
                  ((*yyvalp)) = ps.loop;
                }
    break;

  case 266:
#line 1267 "ned2.y"
    {
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(true);
                }
    break;

  case 267:
#line 1272 "ned2.y"
    {
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(true);
                }
    break;

  case 268:
#line 1277 "ned2.y"
    {
                  swapConnection(ps.conn);
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(false);
                }
    break;

  case 269:
#line 1283 "ned2.y"
    {
                  swapConnection(ps.conn);
                  ps.conn->setIsBidirectional(false);
                  ps.conn->setIsForwardArrow(false);
                }
    break;

  case 270:
#line 1289 "ned2.y"
    {
                  ps.conn->setIsBidirectional(true);
                }
    break;

  case 271:
#line 1293 "ned2.y"
    {
                  ps.conn->setIsBidirectional(true);
                }
    break;

  case 274:
#line 1305 "ned2.y"
    {
                  ps.conn = (ConnectionElement *)createElementWithTag(NED_CONNECTION, ps.inConnGroup ? (NEDElement*)ps.conngroup : (NEDElement*)ps.conns );
                  ps.conn->setSrcModule( toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc)) );
                  addExpression(ps.conn, "src-module-index",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval));
                }
    break;

  case 275:
#line 1311 "ned2.y"
    {
                  ps.conn = (ConnectionElement *)createElementWithTag(NED_CONNECTION, ps.inConnGroup ? (NEDElement*)ps.conngroup : (NEDElement*)ps.conns );
                  ps.conn->setSrcModule( toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)) );
                }
    break;

  case 276:
#line 1319 "ned2.y"
    {
                  ps.conn->setSrcGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                }
    break;

  case 277:
#line 1324 "ned2.y"
    {
                  ps.conn->setSrcGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                  addExpression(ps.conn, "src-gate-index",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval));
                }
    break;

  case 278:
#line 1330 "ned2.y"
    {
                  ps.conn->setSrcGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)) );
                  ps.conn->setSrcGateSubg(ps.subgate);
                  ps.conn->setSrcGatePlusplus(true);
                }
    break;

  case 279:
#line 1339 "ned2.y"
    {
                  ps.conn = (ConnectionElement *)createElementWithTag(NED_CONNECTION, ps.inConnGroup ? (NEDElement*)ps.conngroup : (NEDElement*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                }
    break;

  case 280:
#line 1346 "ned2.y"
    {
                  ps.conn = (ConnectionElement *)createElementWithTag(NED_CONNECTION, ps.inConnGroup ? (NEDElement*)ps.conngroup : (NEDElement*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                  addExpression(ps.conn, "src-gate-index",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval));
                }
    break;

  case 281:
#line 1354 "ned2.y"
    {
                  ps.conn = (ConnectionElement *)createElementWithTag(NED_CONNECTION, ps.inConnGroup ? (NEDElement*)ps.conngroup : (NEDElement*)ps.conns );
                  ps.conn->setSrcModule("");
                  ps.conn->setSrcGate(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)));
                  ps.conn->setSrcGateSubg(ps.subgate);
                  ps.conn->setSrcGatePlusplus(true);
                }
    break;

  case 284:
#line 1370 "ned2.y"
    {
                  ps.conn->setDestModule( toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)) );
                }
    break;

  case 285:
#line 1374 "ned2.y"
    {
                  ps.conn->setDestModule( toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc)) );
                  addExpression(ps.conn, "dest-module-index",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval));
                }
    break;

  case 286:
#line 1382 "ned2.y"
    {
                  ps.conn->setDestGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                }
    break;

  case 287:
#line 1387 "ned2.y"
    {
                  ps.conn->setDestGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  addExpression(ps.conn, "dest-gate-index",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval));
                }
    break;

  case 288:
#line 1393 "ned2.y"
    {
                  ps.conn->setDestGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  ps.conn->setDestGatePlusplus(true);
                }
    break;

  case 289:
#line 1402 "ned2.y"
    {
                  ps.conn->setDestGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                }
    break;

  case 290:
#line 1407 "ned2.y"
    {
                  ps.conn->setDestGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  addExpression(ps.conn, "dest-gate-index",ps.exprPos,(((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval));
                }
    break;

  case 291:
#line 1413 "ned2.y"
    {
                  ps.conn->setDestGate( toString( (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)) );
                  ps.conn->setDestGateSubg(ps.subgate);
                  ps.conn->setDestGatePlusplus(true);
                }
    break;

  case 292:
#line 1422 "ned2.y"
    {
                  const char *s = toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc));
                  if (!strcmp(s,"i"))
                      ps.subgate = NED_SUBGATE_I;
                  else if (!strcmp(s,"o"))
                      ps.subgate = NED_SUBGATE_O;
                  else
                       np->getErrors()->addError(currentLocation(), "invalid subgate spec `%s', must be `i' or `o'", toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)));
                }
    break;

  case 293:
#line 1432 "ned2.y"
    { ps.subgate = NED_SUBGATE_NONE; }
    break;

  case 295:
#line 1438 "ned2.y"
    {
                  ps.parameters = (ParametersElement *)createElementWithTag(NED_PARAMETERS, ps.conn);
                  ps.parameters->setIsImplicit(true);
                  ps.propertyscope.push(ps.parameters);
                }
    break;

  case 296:
#line 1445 "ned2.y"
    {
                  ps.propertyscope.pop();
                }
    break;

  case 298:
#line 1454 "ned2.y"
    {
                  ps.conn->setType(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc)).c_str());
                }
    break;

  case 299:
#line 1458 "ned2.y"
    {
                  addOptionalExpression(ps.conn, "like-expr", ps.exprPos, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval));
                  ps.conn->setLikeType(removeSpaces((((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yyloc)).c_str());
                  ps.conn->setIsDefault(ps.isDefault);
                }
    break;

  case 301:
#line 1468 "ned2.y"
    { ps.conn->setName(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yyloc))); }
    break;

  case 302:
#line 1476 "ned2.y"
    {
                  ps.condition = (ConditionElement *)createElementWithTag(NED_CONDITION);
                  addExpression(ps.condition, "condition",(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yyloc),(((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval));
                  storePos(ps.condition, (*yylocp));
                  ((*yyvalp)) = ps.condition;
                }
    break;

  case 303:
#line 1489 "ned2.y"
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval); ps.exprPos = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yyloc); }
    break;

  case 304:
#line 1495 "ned2.y"
    {
                  if (np->getParseExpressionsFlag()) ((*yyvalp)) = createExpression((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval));
                }
    break;

  case 306:
#line 1506 "ned2.y"
    { ((*yyvalp)) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval); }
    break;

  case 307:
#line 1508 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction("const", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval)); }
    break;

  case 308:
#line 1511 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("+", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 309:
#line 1513 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("-", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 310:
#line 1515 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("*", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 311:
#line 1517 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("/", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 312:
#line 1519 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("%", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 313:
#line 1521 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("^", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 314:
#line 1525 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = unaryMinus((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval)); }
    break;

  case 315:
#line 1528 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("==", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 316:
#line 1530 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("!=", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 317:
#line 1532 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(">", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 318:
#line 1534 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(">=", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 319:
#line 1536 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("<", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 320:
#line 1538 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("<=", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 321:
#line 1541 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("&&", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 322:
#line 1543 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("||", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 323:
#line 1545 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("##", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 324:
#line 1549 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("!", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval)); }
    break;

  case 325:
#line 1552 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("&", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 326:
#line 1554 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("|", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 327:
#line 1556 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("#", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 328:
#line 1560 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("~", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval)); }
    break;

  case 329:
#line 1562 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("<<", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 330:
#line 1564 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator(">>", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval)); }
    break;

  case 331:
#line 1566 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createOperator("?:", (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval)); }
    break;

  case 332:
#line 1569 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval)); }
    break;

  case 333:
#line 1571 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval)); }
    break;

  case 334:
#line 1573 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval)); }
    break;

  case 335:
#line 1576 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc))); }
    break;

  case 336:
#line 1578 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval)); }
    break;

  case 337:
#line 1580 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (6))].yystate.yysemantics.yysval)); }
    break;

  case 338:
#line 1582 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (8))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (8))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (8))].yystate.yysemantics.yysval)); }
    break;

  case 339:
#line 1584 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (10))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (10))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (10))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (10))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (10))].yystate.yysemantics.yysval)); }
    break;

  case 340:
#line 1586 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (12))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (12))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (12))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (12))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (12))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((11) - (12))].yystate.yysemantics.yysval)); }
    break;

  case 341:
#line 1588 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (14))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (14))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (14))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (14))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (14))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((11) - (14))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((13) - (14))].yystate.yysemantics.yysval)); }
    break;

  case 342:
#line 1590 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (16))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (16))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (16))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (16))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (16))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((11) - (16))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((13) - (16))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((15) - (16))].yystate.yysemantics.yysval)); }
    break;

  case 343:
#line 1592 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (18))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (18))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (18))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (18))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (18))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((11) - (18))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((13) - (18))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((15) - (18))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((17) - (18))].yystate.yysemantics.yysval)); }
    break;

  case 344:
#line 1594 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (20))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((11) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((13) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((15) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((17) - (20))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((19) - (20))].yystate.yysemantics.yysval)); }
    break;

  case 345:
#line 1596 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction(toString((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (22))].yystate.yyloc)), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((7) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((9) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((11) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((13) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((15) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((17) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((19) - (22))].yystate.yysemantics.yysval), (((yyGLRStackItem const *)yyvsp)[YYFILL ((21) - (22))].yystate.yysemantics.yysval)); }
    break;

  case 352:
#line 1614 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createIdent((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;

  case 353:
#line 1616 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createIdent((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)); }
    break;

  case 354:
#line 1618 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createIdent((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yyloc)); }
    break;

  case 355:
#line 1620 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createIdent((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval)); }
    break;

  case 356:
#line 1625 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction("index"); }
    break;

  case 357:
#line 1627 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction("index"); }
    break;

  case 358:
#line 1629 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createFunction("sizeof", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval)); }
    break;

  case 362:
#line 1640 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createStringLiteral((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;

  case 363:
#line 1645 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createLiteral(NED_CONST_BOOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;

  case 364:
#line 1647 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createLiteral(NED_CONST_BOOL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;

  case 365:
#line 1652 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createLiteral(NED_CONST_INT, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;

  case 366:
#line 1654 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createLiteral(NED_CONST_DOUBLE, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;

  case 367:
#line 1656 "ned2.y"
    { if (np->getParseExpressionsFlag()) ((*yyvalp)) = createQuantityLiteral((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yyloc)); }
    break;


/* Line 930 of glr.c.  */
#line 3373 "ned2.tab.cc"
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


/*ARGSUSED*/ static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {
      
      default: break;
    }
}

			      /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
		&yys->yysemantics.yysval, &yys->yyloc);
  else
    {
#if YYDEBUG
      if (yydebug)
	{
	  if (yys->yysemantics.yyfirstVal)
	    YYFPRINTF (stderr, "%s unresolved ", yymsg);
	  else
	    YYFPRINTF (stderr, "%s incomplete ", yymsg);
	  yy_symbol_print (stderr, yystos[yys->yylrState],
			   NULL, &yys->yyloc);
	  YYFPRINTF (stderr, "\n");
	}
#endif

      if (yys->yysemantics.yyfirstVal)
	{
	  yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
	  yyGLRState *yyrh;
	  int yyn;
	  for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
	       yyn > 0;
	       yyrh = yyrh->yypred, yyn -= 1)
	    yydestroyGLRState (yymsg, yyrh);
	}
    }
}

/** Left-hand-side symbol for rule #RULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yyis_pact_ninf(yystate) \
  ((yystate) == YYPACT_NINF)

/** True iff LR state STATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yyis_pact_ninf (yypact[yystate]);
}

/** The default reduction for STATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yyis_table_ninf(yytable_value) \
  YYID (0)

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *CONFLICTS to a pointer into yyconfl to 0-terminated list of
 *  conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
		int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yyis_table_ninf (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yylhs)
{
  int yyr;
  yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

				/* GLRStates */

/** Return a fresh GLRStackItem.  Callers should call
 * YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 * headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  RULENUM on the semantic values in RHS to the list of
 *  alternative actions for STATE.  Assumes that RHS comes from
 *  stack #K of *STACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
		     yyGLRState* rhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  yynewOption->yystate = rhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

				/* GLRStacks */

/** Initialize SET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = NULL;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize STACK to a single empty stack, with total maximum
 *  capacity for all stacks of SIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If STACK is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yysize, yynewSize;
  size_t yyn;
  yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
	{
	  yyGLRState* yys0 = &yyp0->yystate;
	  yyGLRState* yys1 = &yyp1->yystate;
	  if (yys0->yypred != NULL)
	    yys1->yypred =
	      YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
	  if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != NULL)
	    yys1->yysemantics.yyfirstVal =
	      YYRELOC(yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
	}
      else
	{
	  yySemanticOption* yyv0 = &yyp0->yyoption;
	  yySemanticOption* yyv1 = &yyp1->yyoption;
	  if (yyv0->yystate != NULL)
	    yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
	  if (yyv0->yynext != NULL)
	    yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
	}
    }
  if (yystackp->yysplitPoint != NULL)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
				 yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != NULL)
      yystackp->yytops.yystates[yyn] =
	YYRELOC (yystackp->yyitems, yynewItems,
		 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that S is a GLRState somewhere on STACK, update the
 *  splitpoint of STACK, if needed, so that it is at least as deep as
 *  S.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #K in STACK.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != NULL)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = NULL;
}

/** Undelete the last stack that was marked as deleted.  Can only be
    done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == NULL || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = NULL;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == NULL)
	{
	  if (yyi == yyj)
	    {
	      YYDPRINTF ((stderr, "Removing dead stacks.\n"));
	    }
	  yystackp->yytops.yysize -= 1;
	}
      else
	{
	  yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
	  /* In the current implementation, it's unnecessary to copy
	     yystackp->yytops.yylookaheadNeeds[yyi] since, after
	     yyremoveDeletes returns, the parser immediately either enters
	     deterministic operation or shifts a token.  However, it doesn't
	     hurt, and the code might evolve to need it.  */
	  yystackp->yytops.yylookaheadNeeds[yyj] =
	    yystackp->yytops.yylookaheadNeeds[yyi];
	  if (yyj != yyi)
	    {
	      YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
			  (unsigned long int) yyi, (unsigned long int) yyj));
	    }
	  yyj += 1;
	}
      yyi += 1;
    }
}

/** Shift to a new state on stack #K of STACK, corresponding to LR state
 * LRSTATE, at input position POSN, with (resolved) semantic value SVAL.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
	    size_t yyposn,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #K of YYSTACK, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
		 size_t yyposn, yyGLRState* rhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = NULL;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, rhs, yyrule);
}

/** Pop the symbols consumed by reduction #RULE from the top of stack
 *  #K of STACK, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *VALP to the resulting value,
 *  and *LOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
	    YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == NULL)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* rhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, rhs,
			   yyvalp, yylocp, yystackp);
    }
  else
    {
      /* At present, doAction is never called in nondeterministic
       * mode, so this branch is never taken.  It is here in
       * anticipation of a future feature that will allow immediate
       * evaluation of selected actions in nondeterministic mode.  */
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
	= yystackp->yytops.yystates[yyk];
      if (yynrhs == 0)
	/* Set default location.  */
	yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yys->yyloc;
      for (yyi = 0; yyi < yynrhs; yyi += 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystackp);
    }
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)		\
do {					\
  if (yydebug)				\
    yy_reduce_print Args;		\
} while (YYID (0))

/*----------------------------------------------------------.
| Report that the RULE is going to be reduced on stack #K.  |
`----------------------------------------------------------*/

/*ARGSUSED*/ static inline void
yy_reduce_print (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
		 YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  int yynrhs = yyrhsLength (yyrule);
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  yyGLRStackItem* yyvsp = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
  int yylow = 1;
  int yyi;
  YYUSE (yyvalp);
  YYUSE (yylocp);
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
	     (unsigned long int) yyk, yyrule - 1,
	     (unsigned long int) yyrline[yyrule]);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yysemantics.yysval)
		       , &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yyloc)		       );
      fprintf (stderr, "\n");
    }
}
#endif

/** Pop items off stack #K of STACK according to grammar rule RULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with RULE and store its value with the
 *  newly pushed state, if FORCEEVAL or if STACK is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #K from
 *  the STACK.  In this case, the (necessarily deferred) semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
	     yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == NULL)
    {
      YYSTYPE yysval;
      YYLTYPE yyloc;

      YY_REDUCE_PRINT ((yystackp, yyk, yyrule, &yysval, &yyloc));
      YYCHK (yydoAction (yystackp, yyk, yyrule, &yysval,
			 &yyloc));
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
		  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
				 yylhsNonterm (yyrule)),
		  yyposn, &yysval, &yyloc);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
	   0 < yyn; yyn -= 1)
	{
	  yys = yys->yypred;
	  YYASSERT (yys);
	}
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
		  "Reduced stack %lu by rule #%d; action deferred.  Now in state %d.\n",
		  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
	if (yyi != yyk && yystackp->yytops.yystates[yyi] != NULL)
	  {
	    yyGLRState* yyp, *yysplit = yystackp->yysplitPoint;
	    yyp = yystackp->yytops.yystates[yyi];
	    while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
	      {
		if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
		  {
		    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
		    yymarkStackDeleted (yystackp, yyk);
		    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
				(unsigned long int) yyk,
				(unsigned long int) yyi));
		    return yyok;
		  }
		yyp = yyp->yypred;
	      }
	  }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == NULL)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = NULL;

      if (yystackp->yytops.yycapacity
	  > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
	(yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
				  (yystackp->yytops.yycapacity
				   * sizeof yynewStates[0]));
      if (yynewStates == NULL)
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
	(yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
			     (yystackp->yytops.yycapacity
			      * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == NULL)
	yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff Y0 and Y1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
	   yyn = yyrhsLength (yyy0->yyrule);
	   yyn > 0;
	   yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
	if (yys0->yyposn != yys1->yyposn)
	  return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (Y0,Y1), destructively merge the
 *  alternative semantic values for the RHS-symbols of Y1 and Y0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
	break;
      else if (yys0->yyresolved)
	{
	  yys1->yyresolved = yytrue;
	  yys1->yysemantics.yysval = yys0->yysemantics.yysval;
	}
      else if (yys1->yyresolved)
	{
	  yys0->yyresolved = yytrue;
	  yys0->yysemantics.yysval = yys1->yysemantics.yysval;
	}
      else
	{
	  yySemanticOption** yyz0p;
	  yySemanticOption* yyz1;
	  yyz0p = &yys0->yysemantics.yyfirstVal;
	  yyz1 = yys1->yysemantics.yyfirstVal;
	  while (YYID (yytrue))
	    {
	      if (yyz1 == *yyz0p || yyz1 == NULL)
		break;
	      else if (*yyz0p == NULL)
		{
		  *yyz0p = yyz1;
		  break;
		}
	      else if (*yyz0p < yyz1)
		{
		  yySemanticOption* yyz = *yyz0p;
		  *yyz0p = yyz1;
		  yyz1 = yyz1->yynext;
		  (*yyz0p)->yynext = yyz;
		}
	      yyz0p = &(*yyz0p)->yynext;
	    }
	  yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
	}
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
	return 0;
      else
	return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
				   yyGLRStack* yystackp);


/** Resolve the previous N states starting at and including state S.  If result
 *  != yyok, some states may have been left unresolved possibly with empty
 *  semantic option chains.  Regardless of whether result = yyok, each state
 *  has been left with consistent data so that yydestroyGLRState can be invoked
 *  if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
		 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
	YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of OPT, perform its user action, and return
 *  the semantic value and location.  Regardless of whether result = yyok, all
 *  RHS states have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
		 YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs;
  int yychar_current;
  YYSTYPE yylval_current;
  YYLTYPE yylloc_current;
  YYRESULTTAG yyflag;

  yynrhs = yyrhsLength (yyopt->yyrule);
  yyflag = yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
	yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  if (yynrhs == 0)
    /* Set default location.  */
    yyrhsVals[YYMAXRHS + YYMAXLEFT - 1].yystate.yyloc = yyopt->yystate->yyloc;
  yychar_current = yychar;
  yylval_current = yylval;
  yylloc_current = yylloc;
  yychar = yyopt->yyrawchar;
  yylval = yyopt->yyval;
  yylloc = yyopt->yyloc;
  yyflag = yyuserAction (yyopt->yyrule, yynrhs,
			   yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
			   yyvalp, yylocp, yystackp);
  yychar = yychar_current;
  yylval = yylval_current;
  yylloc = yylloc_current;
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == NULL)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
	       yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
	       yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
	       (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
	{
	  if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
	    YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]));
	  else
	    YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
		       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]),
		       (unsigned long int) (yystates[yyi - 1]->yyposn + 1),
		       (unsigned long int) yystates[yyi]->yyposn);
	}
      else
	yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

/*ARGSUSED*/ static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
		   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Starting at and including state S1, resolve the location for each of the
 *  previous N1 states that is unresolved.  The first semantic option of a state
 *  is always chosen.  */
static void
yyresolveLocations (yyGLRState* yys1, int yyn1,
		    yyGLRStack *yystackp)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp);
      if (!yys1->yyresolved)
	{
	  yySemanticOption *yyoption;
	  yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
	  int yynrhs;
	  int yychar_current;
	  YYSTYPE yylval_current;
	  YYLTYPE yylloc_current;
	  yyoption = yys1->yysemantics.yyfirstVal;
	  YYASSERT (yyoption != NULL);
	  yynrhs = yyrhsLength (yyoption->yyrule);
	  if (yynrhs > 0)
	    {
	      yyGLRState *yys;
	      int yyn;
	      yyresolveLocations (yyoption->yystate, yynrhs,
				  yystackp);
	      for (yys = yyoption->yystate, yyn = yynrhs;
		   yyn > 0;
		   yys = yys->yypred, yyn -= 1)
		yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
	    }
	  else
	    {
	      /* Both yyresolveAction and yyresolveLocations traverse the GSS
		 in reverse rightmost order.  It is only necessary to invoke
		 yyresolveLocations on a subforest for which yyresolveAction
		 would have been invoked next had an ambiguity not been
		 detected.  Thus the location of the previous state (but not
		 necessarily the previous state itself) is guaranteed to be
		 resolved already.  */
	      yyGLRState *yyprevious = yyoption->yystate;
	      yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
	    }
	  yychar_current = yychar;
	  yylval_current = yylval;
	  yylloc_current = yylloc;
	  yychar = yyoption->yyrawchar;
	  yylval = yyoption->yyval;
	  yylloc = yyoption->yyloc;
	  YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
	  yychar = yychar_current;
	  yylval = yylval_current;
	  yylloc = yylloc_current;
	}
    }
}

/** Resolve the ambiguity represented in state S, perform the indicated
 *  actions, and set the semantic value of S.  If result != yyok, the chain of
 *  semantic options in S has been cleared instead or it has been left
 *  unmodified except that redundant options may have been removed.  Regardless
 *  of whether result = yyok, S has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest;
  yySemanticOption** yypp;
  yybool yymerge;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  yybest = yyoptionList;
  yymerge = yyfalse;
  for (yypp = &yyoptionList->yynext; *yypp != NULL; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
	{
	  yymergeOptionSets (yybest, yyp);
	  *yypp = yyp->yynext;
	}
      else
	{
	  switch (yypreference (yybest, yyp))
	    {
	    case 0:
	      yyresolveLocations (yys, 1, yystackp);
	      return yyreportAmbiguity (yybest, yyp);
	      break;
	    case 1:
	      yymerge = yytrue;
	      break;
	    case 2:
	      break;
	    case 3:
	      yybest = yyp;
	      yymerge = yyfalse;
	      break;
	    default:
	      /* This cannot happen so it is not worth a YYASSERT (yyfalse),
		 but some compilers complain if the default case is
		 omitted.  */
	      break;
	    }
	  yypp = &yyp->yynext;
	}
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval,
				yylocp);
      if (yyflag == yyok)
	for (yyp = yybest->yynext; yyp != NULL; yyp = yyp->yynext)
	  {
	    if (yyprec == yydprec[yyp->yyrule])
	      {
		YYSTYPE yysval_other;
		YYLTYPE yydummy;
		yyflag = yyresolveAction (yyp, yystackp, &yysval_other,
					  &yydummy);
		if (yyflag != yyok)
		  {
		    yydestruct ("Cleanup: discarding incompletely merged value for",
				yystos[yys->yylrState],
				&yysval, yylocp);
		    break;
		  }
		yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
	      }
	  }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = NULL;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != NULL)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
	   yys != yystackp->yysplitPoint;
	   yys = yys->yypred, yyn += 1)
	continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
			     ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == NULL)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = NULL;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;

  while (yyr != NULL)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
		   size_t yyposn)
{
  int yyaction;
  const short int* yyconflicts;
  yyRuleNum yyrule;

  while (yystackp->yytops.yystates[yyk] != NULL)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
		  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
	{
	  yyrule = yydefaultAction (yystate);
	  if (yyrule == 0)
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystackp, yyk);
	      return yyok;
	    }
	  YYCHK (yyglrReduce (yystackp, yyk, yyrule, yyfalse));
	}
      else
	{
	  yySymbol yytoken;
	  yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
	  if (yychar == YYEMPTY)
	    {
	      YYDPRINTF ((stderr, "Reading a token: "));
	      yychar = YYLEX;
	      yytoken = YYTRANSLATE (yychar);
	      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
	    }
	  else
	    yytoken = YYTRANSLATE (yychar);
	  yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

	  while (*yyconflicts != 0)
	    {
	      size_t yynewStack = yysplitStack (yystackp, yyk);
	      YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
			  (unsigned long int) yynewStack,
			  (unsigned long int) yyk));
	      YYCHK (yyglrReduce (yystackp, yynewStack,
				  *yyconflicts, yyfalse));
	      YYCHK (yyprocessOneStack (yystackp, yynewStack,
					yyposn));
	      yyconflicts += 1;
	    }

	  if (yyisShiftAction (yyaction))
	    break;
	  else if (yyisErrorAction (yyaction))
	    {
	      YYDPRINTF ((stderr, "Stack %lu dies.\n",
			  (unsigned long int) yyk));
	      yymarkStackDeleted (yystackp, yyk);
	      break;
	    }
	  else
	    YYCHK (yyglrReduce (yystackp, yyk, -yyaction,
				yyfalse));
	}
    }
  return yyok;
}

/*ARGSUSED*/ static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState == 0)
    {
#if YYERROR_VERBOSE
      int yyn;
      yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      if (YYPACT_NINF < yyn && yyn <= YYLAST)
	{
	  yySymbol yytoken = YYTRANSLATE (yychar);
	  size_t yysize0 = yytnamerr (NULL, yytokenName (yytoken));
	  size_t yysize = yysize0;
	  size_t yysize1;
	  yybool yysize_overflow = yyfalse;
	  char* yymsg = NULL;
	  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;
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

	  yyarg[0] = yytokenName (yytoken);
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
		yyarg[yycount++] = yytokenName (yyx);
		yysize1 = yysize + yytnamerr (NULL, yytokenName (yyx));
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + strlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow)
	    yymsg = (char *) YYMALLOC (yysize);

	  if (yymsg)
	    {
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYFREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      yyMemoryExhausted (yystackp);
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
      yynerrs += 1;
    }
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the look-ahead.  */
/*ARGSUSED*/ static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (YYID (yytrue))
      {
	yySymbol yytoken;
	if (yychar == YYEOF)
	  yyFail (yystackp, NULL);
	if (yychar != YYEMPTY)
	  {
	    /* We throw away the lookahead, but the error range
	       of the shifted error token must take it into account.  */
	    yyGLRState *yys = yystackp->yytops.yystates[0];
	    yyGLRStackItem yyerror_range[3];
	    yyerror_range[1].yystate.yyloc = yys->yyloc;
	    yyerror_range[2].yystate.yyloc = yylloc;
	    YYLLOC_DEFAULT ((yys->yyloc), yyerror_range, 2);
	    yytoken = YYTRANSLATE (yychar);
	    yydestruct ("Error: discarding",
			yytoken, &yylval, &yylloc);
	  }
	YYDPRINTF ((stderr, "Reading a token: "));
	yychar = YYLEX;
	yytoken = YYTRANSLATE (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
	yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
	if (yyis_pact_ninf (yyj))
	  return;
	yyj += yytoken;
	if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
	  {
	    if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
	      return;
	  }
	else if (yytable[yyj] != 0 && ! yyis_table_ninf (yytable[yyj]))
	  return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != NULL)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, NULL);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != NULL)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yyis_pact_ninf (yyj))
	{
	  yyj += YYTERROR;
	  if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
	      && yyisShiftAction (yytable[yyj]))
	    {
	      /* Shift the error token having adjusted its location.  */
	      YYLTYPE yyerrloc;
	      yystackp->yyerror_range[2].yystate.yyloc = yylloc;
	      YYLLOC_DEFAULT (yyerrloc, (yystackp->yyerror_range), 2);
	      YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
			       &yylval, &yyerrloc);
	      yyglrShift (yystackp, 0, yytable[yyj],
			  yys->yyposn, &yylval, &yyerrloc);
	      yys = yystackp->yytops.yystates[0];
	      break;
	    }
	}
      yystackp->yyerror_range[1].yystate.yyloc = yys->yyloc;
      yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == NULL)
    yyFail (yystackp, NULL);
}

#define YYCHK1(YYE)							     \
  do {									     \
    switch (YYE) {							     \
    case yyok:								     \
      break;								     \
    case yyabort:							     \
      goto yyabortlab;							     \
    case yyaccept:							     \
      goto yyacceptlab;							     \
    case yyerr:								     \
      goto yyuser_error;						     \
    default:								     \
      goto yybuglab;							     \
    }									     \
  } while (YYID (0))


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 0;
#endif


  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (YYID (yytrue))
    {
      /* For efficiency, we have two loops, the first of which is
	 specialized to deterministic operation (single stack, no
	 potential ambiguity).  */
      /* Standard mode */
      while (YYID (yytrue))
	{
	  yyRuleNum yyrule;
	  int yyaction;
	  const short int* yyconflicts;

	  yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
	  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
	  if (yystate == YYFINAL)
	    goto yyacceptlab;
	  if (yyisDefaultedState (yystate))
	    {
	      yyrule = yydefaultAction (yystate);
	      if (yyrule == 0)
		{
		  yystack.yyerror_range[1].yystate.yyloc = yylloc;
		  yyreportSyntaxError (&yystack);
		  goto yyuser_error;
		}
	      YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
	    }
	  else
	    {
	      yySymbol yytoken;
	      if (yychar == YYEMPTY)
		{
		  YYDPRINTF ((stderr, "Reading a token: "));
		  yychar = YYLEX;
		  yytoken = YYTRANSLATE (yychar);
		  YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
		}
	      else
		yytoken = YYTRANSLATE (yychar);
	      yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
	      if (*yyconflicts != 0)
		break;
	      if (yyisShiftAction (yyaction))
		{
		  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
		  if (yychar != YYEOF)
		    yychar = YYEMPTY;
		  yyposn += 1;
		  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
		  if (0 < yystack.yyerrState)
		    yystack.yyerrState -= 1;
		}
	      else if (yyisErrorAction (yyaction))
		{
		  yystack.yyerror_range[1].yystate.yyloc = yylloc;
		  yyreportSyntaxError (&yystack);
		  goto yyuser_error;
		}
	      else
		YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
	    }
	}

      while (YYID (yytrue))
	{
	  yySymbol yytoken_to_shift;
	  size_t yys;

	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

	  /* yyprocessOneStack returns one of three things:

	      - An error flag.  If the caller is yyprocessOneStack, it
		immediately returns as well.  When the caller is finally
		yyparse, it jumps to an error label via YYCHK1.

	      - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
		(&yystack, yys), which sets the top state of yys to NULL.  Thus,
		yyparse's following invocation of yyremoveDeletes will remove
		the stack.

	      - yyok, when ready to shift a token.

	     Except in the first case, yyparse will invoke yyremoveDeletes and
	     then shift the next token onto all remaining stacks.  This
	     synchronization of the shift (that is, after all preceding
	     reductions on all stacks) helps prevent double destructor calls
	     on yylval in the event of memory exhaustion.  */

	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
	  yyremoveDeletes (&yystack);
	  if (yystack.yytops.yysize == 0)
	    {
	      yyundeleteLastStack (&yystack);
	      if (yystack.yytops.yysize == 0)
		yyFail (&yystack, YY_("syntax error"));
	      YYCHK1 (yyresolveStack (&yystack));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
	      yystack.yyerror_range[1].yystate.yyloc = yylloc;
	      yyreportSyntaxError (&yystack);
	      goto yyuser_error;
	    }

	  /* If any yyglrShift call fails, it will fail after shifting.  Thus,
	     a copy of yylval will already be on stack 0 in the event of a
	     failure in the following loop.  Thus, yychar is set to YYEMPTY
	     before the loop to make sure the user destructor for yylval isn't
	     called twice.  */
	  yytoken_to_shift = YYTRANSLATE (yychar);
	  yychar = YYEMPTY;
	  yyposn += 1;
	  for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
	    {
	      int yyaction;
	      const short int* yyconflicts;
	      yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
	      yygetLRActions (yystate, yytoken_to_shift, &yyaction,
			      &yyconflicts);
	      /* Note that yyconflicts were handled by yyprocessOneStack.  */
	      YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
	      YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
	      yyglrShift (&yystack, yys, yyaction, yyposn,
			  &yylval, &yylloc);
	      YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
			  (unsigned long int) yys,
			  yystack.yytops.yystates[yys]->yylrState));
	    }

	  if (yystack.yytops.yysize == 1)
	    {
	      YYCHK1 (yyresolveStack (&yystack));
	      YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
	      yycompressStack (&yystack);
	      break;
	    }
	}
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
		YYTRANSLATE (yychar),
		&yylval, &yylloc);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
	{
	  size_t yysize = yystack.yytops.yysize;
	  size_t yyk;
	  for (yyk = 0; yyk < yysize; yyk += 1)
	    if (yystates[yyk])
	      {
		while (yystates[yyk])
		  {
		    yyGLRState *yys = yystates[yyk];
		    yystack.yyerror_range[1].yystate.yyloc = yys->yyloc;
		    yydestroyGLRState ("Cleanup: popping", yys);
		    yystates[yyk] = yys->yypred;
		    yystack.yynextFree -= 1;
		    yystack.yyspaceLeft += 1;
		  }
		break;
	      }
	}
      yyfreeGLRStack (&yystack);
    }

  /* Make sure YYID is used.  */
  return YYID (yyresult);
}

/* DEBUGGING ONLY */
#ifdef YYDEBUG
static void yypstack (yyGLRStack* yystackp, size_t yyk)
  __attribute__ ((__unused__));
static void yypdumpstack (yyGLRStack* yystackp) __attribute__ ((__unused__));

static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      fprintf (stderr, " -> ");
    }
  fprintf (stderr, "%d@%lu", yys->yylrState, (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == NULL)
    fprintf (stderr, "<null>");
  else
    yy_yypstack (yyst);
  fprintf (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)							     \
    ((YYX) == NULL ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      fprintf (stderr, "%3lu. ", (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
	{
	  fprintf (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
		   yyp->yystate.yyresolved, yyp->yystate.yylrState,
		   (unsigned long int) yyp->yystate.yyposn,
		   (long int) YYINDEX (yyp->yystate.yypred));
	  if (! yyp->yystate.yyresolved)
	    fprintf (stderr, ", firstVal: %ld",
		     (long int) YYINDEX (yyp->yystate.yysemantics.yyfirstVal));
	}
      else
	{
	  fprintf (stderr, "Option. rule: %d, state: %ld, next: %ld",
		   yyp->yyoption.yyrule - 1,
		   (long int) YYINDEX (yyp->yyoption.yystate),
		   (long int) YYINDEX (yyp->yyoption.yynext));
	}
      fprintf (stderr, "\n");
    }
  fprintf (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    fprintf (stderr, "%lu: %ld; ", (unsigned long int) yyi,
	     (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  fprintf (stderr, "\n");
}
#endif


#line 1671 "ned2.y"


//----------------------------------------------------------------------
// general bison/flex stuff:
//

NEDElement *doParseNED2(NEDParser *p, const char *nedtext)
{
#if YYDEBUG != 0      /* #if added --VA */
    yydebug = YYDEBUGGING_ON;
#endif

    NONREENTRANT_NED_PARSER(p);

    // reset the lexer
    pos.co = 0;
    pos.li = 1;
    prevpos = pos;

    yyin = NULL;
    yyout = stderr; // not used anyway

    // alloc buffer
    struct yy_buffer_state *handle = yy_scan_string(nedtext);
    if (!handle)
        {np->getErrors()->addError("", "unable to allocate work memory"); return NULL;}

    // create parser state and NEDFileElement
    resetParserState();
    ps.nedfile = new NedFileElement();

    // store file name with slashes always, even on Windows -- neddoc relies on that
    ps.nedfile->setFilename(slashifyFilename(np->getFileName()).c_str());
    ps.nedfile->setVersion("2");

    // storing the start and end position of the whole file for the NedFileElement
    // NOTE: we cannot use storePos() because it strips off the leading spaces
    // and comments from the element.
    YYLTYPE pos = np->getSource()->getFullTextPos();
    NEDSourceRegion region;
    region.startLine = pos.first_line;
    region.startColumn = pos.first_column;
    region.endLine = pos.last_line;
    region.endColumn = pos.last_column;
    ps.nedfile->setSourceRegion(region);

    // store file comment
    storeFileComment(ps.nedfile);

    ps.propertyscope.push(ps.nedfile);

    globalps = ps; // remember this for error recovery

    if (np->getStoreSourceFlag())
        storeSourceCode(ps.nedfile, np->getSource()->getFullTextPos());

    // parse
    try
    {
        yyparse();
    }
    catch (NEDException& e)
    {
        yyerror((std::string("error during parsing: ")+e.what()).c_str());
        yy_delete_buffer(handle);
        return NULL;
    }

    if (np->getErrors()->empty())
    {
        // more sanity checks
        if (ps.propertyscope.size()!=1 || ps.propertyscope.top()!=ps.nedfile)
            INTERNAL_ERROR0(NULL, "error during parsing: imbalanced propertyscope");
        if (!ps.blockscope.empty() || !ps.typescope.empty())
            INTERNAL_ERROR0(NULL, "error during parsing: imbalanced blockscope or typescope");
    }
    yy_delete_buffer(handle);

    return ps.nedfile;
}

void yyerror(const char *s)
{
    // chop newline
    char buf[250];
    strcpy(buf, s);
    if (buf[strlen(buf)-1] == '\n')
        buf[strlen(buf)-1] = '\0';

    np->error(buf, pos.li);
}


