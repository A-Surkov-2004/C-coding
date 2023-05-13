#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    char str1[32], str2[32];
    int a;
    float b;

    printf("Enter integer\n");
    fgets(str2, 36, stdin);
    printf("Enter float number\n");
    fgets(str1, 36, stdin);

    b = atof(str1);
    a = atoi(str2);

    printf("%f", a+b);
    return 0;
}
