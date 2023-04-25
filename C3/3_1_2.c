#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct vector3
{
    char name[100];
    float x,y,z;
};

float multi_scal(struct vector3 v1, struct vector3 v2)
{
	return (v1.x*v2.x+v1.y*v2.y+v1.z*v2.z);
}

struct vector3 multi_vec(struct vector3 v1, struct vector3 v2)
{
    struct vector3 v3 = { .name = "Vector 3",.x = 5, .y = 3, .z = 7};
    v3.x = v1.y*v2.z - v1.z*v2.y;
    v3.y = v1.z*v2.x - v1.x*v2.z;
    v3.z = v1.x*v2.y - v1.y*v2.x;
	return (v3);
}
float mod(struct vector3 v)
{
	return (sqrt(pow(v.x,2)+pow(v.y,2)+pow(v.z,2)));
}
int print(struct vector3 v)
{
    printf_s("Name: %s\nX: %f\nY: %f\nZ: %f\n", v.name, v.x, v.y ,v.z);
	return 0;
}

int main()
{
    struct vector3 v1 = { .name = "Vector 1",.x = 5, .y = 3, .z = 7};
    struct vector3 v2 = { .name = "Vector 2",.x = -2, .y = 4, .z = 9};
    struct vector3 v3;
    printf("%f \n", mod(v2));
    printf("%f \n", multi_scal(v1,v2));
    v3 = multi_vec(v1,v2);
    printf("\n"); print(v3);
}
