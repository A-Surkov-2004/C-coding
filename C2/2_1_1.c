#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int main()
{
    double **pointer = NULL;
    double *p = NULL;
    double d;

    pointer = (double**) malloc(100);
    p = (double*) malloc(100);

    pointer = &p;
    p = &d;
    **pointer = 2;
    printf("%f", **pointer);

    free(pointer);
    free(p);

    return 0;
}
