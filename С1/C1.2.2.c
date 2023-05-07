#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(double x){
    return exp(x+2);
}


int main()
{
    double a = -2, b = 0, n = 100;
    double h = (b-a)/n, sum = 0;
    for(double i = a; i < b; i += h){
        sum += (f(i)+f(i+h))*h/2;
    }
    printf("%f", sum);
    return 0;
}
