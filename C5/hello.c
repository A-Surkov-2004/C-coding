#include <stdio.h>
#include <stdlib.h>

void create_matrix()
{
    double **p = NULL;
    int n, m;

    printf("Type number of strings, then number of columns \n");
    scanf("%d%d",&n,&m);

    p = (double**) malloc(n * sizeof(double*));
    for (int i = 0; i < n; i++)
        p[i] = (double*) malloc(m * sizeof(double));

    printf("Matrix created. \n");
}
