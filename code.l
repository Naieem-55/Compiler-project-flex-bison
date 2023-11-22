%{
	#include<stdio.h>
	#include <string.h>
	#include "code.tab.h"
	#include<stdlib.h>
%}

var [a-zA-Z|a-zA-Z0-9]+
increment "||"
decrement "~~"
comment [/][-][-](.*|\n)[-][-][/]
digit [0-9]+

%%


{comment} {
	printf("comment\n");

}
"#get*<"{var}">"   { printf("library added\n");}

{increment}   {return inc;} 
"{"	 { return LB; }
"}"	  { return RB; }
"op-stop"    {   return BREAK;     }

            
"nInt"	{ yylval.string=strdup(yytext);return INT; }
"nFloat"	{ yylval.string=strdup(yytext);return FLOAT; }
"nChar"	{ yylval.string=strdup(yytext);return CHAR; }
"Arr"       { yylval.string=strdup(yytext);return ARRAY; }
"SZ_OF"     {return size_of;}
"call_koro"      {return CALL;}

{digit}	{ 
		yylval.number = atoi(yytext);
		return NUM;
	}


"nCase"      { return CASE;      }
"nSwitch"      { return SWITCH;	}
"nEndSwitch"      { return SWITCH_END;	}
"nDefault"     {  return DEFAULT; 	}
[:]     { return COL;	}


"nWhile" { return WHILE;} 
"nEndWhile" { return WHILE_END;} 
"nFor"   { return FOR;}	
"nEndFor"   { return FOR_END;}	
"["	{ return LP; }
"]"	{ return RP; }


","	{ return CM; }
";"	{ return SM; }



"|"	{ return PLUS; }
"~"	{ return MINUS; }
"#"	{ return MULT; }
"%"	{ return DIV; }
"/" { return MOD; }
"^"	{ return POW; }
"="	{ return ASSIGN;  }



"nGT"	{ return GT; } 
"nGTE"	{ return GTE; } 
"nLT"	{ return LT; } 
"nLTE"	{ return LTE; }
"nEQL"	{ return EEQL; }
"nNEQL"	{ return NEQL; }

"XOR"		{ return XOR; }
"AND"	    { return AND; }
"OR"		{ return OR; }
"NT"		{ return NOT; }
"SIN"		{ return SIN; }
"COS"		{ return COS; }
"TAN"		{ return TAN; }
"SQRT"		{ return SQRT; }
"log"		{ return LOG; }
"log2"		{ return LOG2; }
"ln"		{ return LN; }
"FACT"			{ return FACTORIAL; }


{var} {
	 yylval.string=strdup(yytext);
	 return VAR;
	}

"nIf"		{ return IF; }
"nElif"		{ return ELIF; }
"nElse"		{ return ELSE; }

"start()"	{ return MAIN; }
"def->nInt"     {
                     printf("Function declared with return type : INTERGER\n");
                    
                    return FUNC_NUM; 
                    }
"def->nChar"     { return FUNC_STR; }

[ \t\n]*	

.	{
		yyerror("Unknown Character.\n");
	}
%%

int main()
{
	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
	yyparse();
}