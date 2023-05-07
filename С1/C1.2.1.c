#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const float r1 = 206.7, r2 = 149.6, t1 = 365.25, t2 = 686.98;
    float w1, w2, x, y;

    w1 = (2*M_PI)/t1;
    w2 = (2*M_PI)/t2;

    for(float time = 0; time < 365.25*10; time+=1){
        x = r1 * cos(w1*time) - r2*cos(w2*time);
        y = r1 * sin(w1*time) - r2*sin(w2*time);
        printf("%f %f \n", x, y);
    }
    return 0;
}
