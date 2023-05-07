#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 3, mem;

    int x[n][n];

    for(int j = 0; j < n; j++){ //input
            for(int i = 0; i < n; i++)
                x[i][j] = i+1+n*j;
    }

    for(int j = 0; j < n; j++){ //program
        for(int i = j; i < n; i++){
            mem = x[i][j];
            x[i][j] = x[j][i];
            x[j][i] = mem;
        }
    }

    for(int j = 0; j < n; j++){ //output
        for(int i = 0; i < n; i++)
            printf("%d ",x[i][j]);
        printf("\n");
    }

    return 0;
}
