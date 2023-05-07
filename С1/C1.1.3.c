#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,y,sn, ans;
    scanf("%f%f", &x, &y);

    sn = sin(x+y);
    ans = (1.0+pow(sn,2))/(2.0+abs(x-((2.0*pow(x,2))/(1.0+abs(sn)))));

    printf("%f", ans);
    return 0;
}
