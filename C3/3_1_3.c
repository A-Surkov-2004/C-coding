#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct complex
{
    float rl,im;
};

float fctr (float n)
{
  return (n < 2) ? 1 : n * fctr (n - 1);
}

int main()
{
    struct complex z = {6, 3};
    int n = 100;
    float suma = 0, sumb = 0;
    for(float i = 1; i <= n; i++){
        suma += 1/fctr(i) * pow(z.rl,i);
        sumb += 1/fctr(i) * pow(z.im,i);
    }
    printf("z = %f + i*%f", suma, sumb);
    return 0;
}
