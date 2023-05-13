#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int* swp(int *p){
    int mem;
    for(int i = 0; i<12; i+=2){
        mem = p[i];
        p[i] = p[i+1];
        p[i+1] = mem;
    }
    return p;
}

int main()
{
    int *p = NULL;
    p = (int*) malloc(sizeof(int)*12);

    for (int i = 0; i < 12; i++) {
        p[i] = i+1;
    }
    p = swp(p);

    for (int i = 0; i < 12; i++) {
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}
