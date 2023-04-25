#include <conio.h>
#include <stdio.h>
#include <stdlib.h>


int main() {
    float **p = NULL;
    int i,n,m;
    n = 5; m = 10; // Размер массива и подмассива

    p = (float**) malloc(n * sizeof(float*));
    for (i = 0; i < n; i++) {
        p[i] = (float*) malloc(m * sizeof(float));
    }

    for (i = 0; i < n; i++) {
        free(p[i]);
    }
    free(p);
    return 0;
}
