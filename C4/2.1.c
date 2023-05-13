#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define MY_SIZE 20

int main()
{
    char my_string[MY_SIZE];
    int ans = 0;
    fgets(my_string, MY_SIZE, stdin);

    printf("%s", my_string);

    ///  1
    for(int i = 0; my_string[i] != '\0'; i++){
        ans++;
    }
    printf("%d \n", ans-1);

    /// 2
    char* p = NULL;
    p = &my_string[0];
    for(p; *p != '\0'; p++){

    }
    printf("%d\n", p-&my_string[0]-1);

    /// 3
    printf("%zu\n", strlen(my_string)-1);

    /// 4
    char str2[MY_SIZE];
    strcpy(str2, my_string);
    printf("%s", str2);

    /// 5
    char str3[MY_SIZE] = "ab";
    char str4[MY_SIZE] = "cd";
    printf("%s\n",strcat(str3,str4));

    /// 6
    printf("%d\n", strcmp(str3, str4));

    ///7
    char str5[MY_SIZE] = "AbCdEfG";
    for(int i = 0; i < 7; i++)
        printf("%c",tolower(str5[i]));

    printf("\n");

    for(int i = 0; i < 7; i++)
        printf("%c",toupper(str5[i]));

    return 0;
}
