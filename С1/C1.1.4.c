#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float h(float a,float b,float c,float x){
    float ans;
    ans = -((x-a)/pow(x*x+a*a,1.0/3.0))-((4.0*pow(x*x+b*b,3.0/4.0))/(2.0+a+b+pow(pow(x-c,2),1/3.0)));
    return ans;
}

int main()
{
    float a,b,c,x;
    scanf("%f%f%f%f", &a,&b,&c,&x);
    printf("%f",h(a,b,c,x));
    return 0;
}

// 0.12 3.5 2.4 1.4 // -5.442602
// 0.12 3.5 2.4 1.6 // -5.738755
// 0.27 3.9 2.8 1.8 // -5.992693
