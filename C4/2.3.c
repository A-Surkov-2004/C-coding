#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    char str[20] = "1,a.B;c! 3L?j.5";
    for(int i = 0; i < 15; i++){
        printf("#%d     %c: ", i,str[i]);
        if(isdigit(str[i]))
            printf("number; ");
        if(isalpha(str[i]))
            printf("letter; ");
        if(islower(str[i]))
            printf("Lower case; ");
        if(isupper(str[i]))
            printf("Upper case; ");
        if(iscntrl(str[i]))
            printf("Control code; ");
        if(isgraph(str[i]))
            printf("Visible; ");
        if(isspace(str[i]))
            printf("Space;");
        if(ispunct(str[i]))
            printf("Punctuation symbol;");
        printf("\n");
    }
    return 0;
}

//if((str[i]))
//            printf(";");
