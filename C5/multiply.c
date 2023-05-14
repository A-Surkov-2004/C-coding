#include <stdio.h>
#include <stdlib.h>

struct matrix
{
    double **content;
    int strings, columns;
};

struct matrix cm(int x, int y)
{
    double **p = NULL;
    int n, m;
    struct matrix mtx;

    if(x == 0 || y == 0){
        printf("Type number of strings, then number of columns \n");
        scanf("%d%d",&n,&m);
    }
    else{
        n = x; m = y;
    }

    p = (double**) malloc(n * sizeof(double*));
    for (int i = 0; i < n; i++)
        p[i] = (double*) malloc(m * sizeof(double));


    mtx.content = p;
    mtx.strings = n;
    mtx.columns = m;
    printf("Matrix created. \n");

    return mtx;
}


struct matrix ins(struct matrix mtx){
    printf("Enter matrix %d*%d \n", mtx.strings, mtx.columns);
    for (int i = 0; i < mtx.strings; i++) {
        for (int j = 0; j < mtx.columns; j++){
            scanf("%lf", &mtx.content[i][j]);
        }
    }
    return mtx;
}

void prnt(double** p, int n, int m){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            printf("%lf ", p[i][j]);
        }
        printf("\n");
    }
}

void multi_mat()
{
    printf("Creating matrix A...\n");
    struct matrix a = cm(0,0);
    a = ins(a);
    printf("Creating matrix B...\n");
    struct matrix b = cm(0,0);
    b = ins(b);
    if (a.columns != b.strings){
        printf("Multiplying impossible!");
        return;
    }
    else{
        struct matrix c = cm(a.strings, b.columns);
        for(int i = 0; i < a.strings; i++){
            for(int j = 0; j < b.columns; j++){
                c.content[i][j] = 0;
                for(int k = 0; k < a.columns; k++){
                    c.content[i][j] += a.content[i][k] * b.content[k][j];
                }
            }
        }
        prnt(c.content, c.strings, c.columns);
    }

    //for(int i = 0; i < )

    return;
}
