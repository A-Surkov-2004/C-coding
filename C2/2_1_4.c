#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    double *p = NULL, n;
    int i, size;

    printf("Enter size of array \n");
    scanf("%d", &size);

    p = (double*) malloc(size * sizeof(double));

    printf("Enter %d elements \n", size);
    for (i = 0; i < size; i++) {
        scanf("%lf", &n);
        p[i] = n;
    }


    for (i = 0; i < size; i++) {
        printf("%lf ", p[i]);
    }

    free(p);
    return 0;
}
