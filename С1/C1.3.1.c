#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;

    printf("Size?\n");
    scanf("%d",&n);

    int x[n], y[n];

    for(int i = 0; i < n; i++){
        printf("value %d?\n", i);
        scanf("%d", &x[i]);
    }

     for(int i = 0; i < n; i++){
            y[i] = x[i]*x[i];
            printf("%d ", y[i]);
     }

    return 0;
}
