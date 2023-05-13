#include <stdio.h>
#include <stdlib.h>

float* multi_vec(float* v1, float* v2)
{
    float* v3 = NULL;
    v3 = (float*) malloc(3 * sizeof(float));
    v3[0] = v1[1]*v2[2] - v1[2]*v2[1];
    v3[1] = v1[2]*v2[0] - v1[0]*v2[2];
    v3[2] = v1[0]*v2[1] - v1[1]*v2[0];
	return (v3);
}



int main()
{
    float *v1, *v2, *v3;
    v1 = (float*) malloc(3 * sizeof(float));
    v2 = (float*) malloc(3 * sizeof(float));

    for(int i = 0; i < 3; i++)
        scanf("%f", &v1[i]);
    for(int i = 0; i < 3; i++)
        scanf("%f", &v2[i]);

    v3 = multi_vec(v1,v2);

    for(int i = 0; i < 3; i++)
        printf("%f ", v3[i]);

    free(v1);
    free(v2);
    free(v3);
    return 0;
}
