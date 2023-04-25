#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, ans, *pa, *pb, *pans;

    scanf("%d%d", &a,&b);

    pa = &a;
    pb = &b;
    pans = &ans;

    if (*pa > *pb)
        *pans = *pa;
    else
        *pans = *pb;

    printf("%d", *pans);

    return 0;
}
