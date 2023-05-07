#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float sum;

    printf("Size? (n*n)\n");
    scanf("%d",&n);

    printf("Enter %d elements (as you please) \n", n*n);

    float x[n][n];

    for(int i = 0; i < n; i++){ //input
            for(int j = 0; j < n; j++)
                scanf("%f", &x[i][j]);
    }

    for(int i = 0; i < n; i++){ //program
        sum = 0;
        for(int j = 0; j < n; j++){
            sum += x[i][j];
        }
        x[i][0] = sum/n;
    }

    for(int i = 0; i < n; i++){ //output
        for(int j = 0; j < n; j++)
            printf("%f ",x[i][j]);
        printf("\n");
    }

    return 0;
}
