#include <stdio.h>
#include <stdlib.h>

double* create_array()
{
    double *a = NULL;
    int n;

    printf("Type number of elements. \n");
    scanf("%d",&n);

    a = (double*) malloc(n * sizeof(double));
    printf("Array created. \n");

    return a;
}
