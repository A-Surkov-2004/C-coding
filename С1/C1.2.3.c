#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int m;
    int v[1000]; v[0] = 1; v[1] = 1; v[2] = 1;
    scanf("%d", &m);
    printf("%d %d ", 1, 1);
    for(int i = 3; v[i-1] <= m; i+=1){
        v[i] = v[i-2] + v[i-3];
        printf("%d ", v[i-1]);
    }
    return 0;
}
