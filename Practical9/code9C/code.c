%{
#include <stdio.h>

int digits = 0, alphabets = 0, special = 0;
%}

%%
[0-9]              { digits++; }
[a-zA-Z]           { alphabets++; }
[ \t\n]            { /* ignore spaces */ }
.                  { special++; }
%%

int main() {
    printf("Enter input:\n");
    yylex();

    printf("\nDigits: %d\nAlphabets: %d\nSpecial Characters: %d\n",
            digits, alphabets, special);

    return 0;
}

int yywrap() {
    return 1;
}