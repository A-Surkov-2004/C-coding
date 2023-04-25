#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, ans, *pa, *pb, *pans;

    pa = &a;
    pb = &b;
    pans = &ans;

    *pa = 2;
    *pb = 40;
    *pans = *pa+*pb;

    printf("%d", *pans);

    return 0;
}
