#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 1234567890;
    int *intPtr;
    char *charPtr;

    intPtr = &a;
    printf("%d\n", *intPtr);
    printf("--------------------\n");
    charPtr = (char*)intPtr;
    for(int i = 0; i < 4; i++){
        printf("%d ", *charPtr);
        charPtr++;
    }
}
