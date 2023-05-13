#include <stdio.h>
#include <stdlib.h>

double** create(int n, int m){
    double **p = NULL;

    p = (double**) malloc(n * sizeof(double*));
    for (int i = 0; i < n; i++)
        p[i] = (double*) malloc(m * sizeof(double));

    return p;
}

void del(double** p, int n, int m){
    for (int i = 0; i < n; i++)
        free(p[i]);
    free(p);
    return;
}

double** ins(double** p, int n, int m){
    printf("Enter matrix %d*%d \n", n,m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            scanf("%lf", &p[i][j]);
        }
    }
    return p;
}

void prnt(double** p, int n, int m){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            printf("%lf ", p[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    double **p = NULL;
    char c;
    int n,m;

    while (1){
        printf("Print 'c' to create matrix, 'd' to delete matrix, 'i' to insert numbers in matrix or 'p' to print matrix \n");
        scanf("%c",&c);
        //printf("/n %c /n", c);

        if(c == 'c'){
            printf("Type number of strings, then number of columns \n");
            scanf("%d%d",&n,&m);
            p = create(n,m);
        }
        else if(c == 'd')
            del(p,n,m);

        else if(c == 'i')
            ins(p,n,m);

        else if(c == 'p')
            prnt(p,n,m);
    }
    return 0;
}
