#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, mem;

    printf("Size?\n");
    scanf("%d",&n);

    int x[n];

    for(int i = 0; i < n; i++){ //input
        printf("value %d?\n", i);
        scanf("%d", &x[i]);
    }

    for(int i = 0; i < n/2; i++){ //program
            mem = x[i];
            x[i] = x[n-i-1];
            x[n-i-1] = mem;
    }

    for(int i = 0; i < n; i++){ //output
        printf("%d ", x[i]);
    }

    return 0;
}
