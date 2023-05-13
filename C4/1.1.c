#include <stdio.h>
#include <stdlib.h>

long long c_fct(int n){
    long long ans = 1;
    for(int i = 2; i <=n; i++)
        ans *= i;
    return ans;
}

long long r_fct(int n){
    long long ans;
    ans = n;
    if(ans > 1)
        return ans*r_fct(ans-1);
    else
        return 1;
}


int main()
{
    int n;
    scanf("%d", &n);

    printf("\n%lld\n",c_fct(n));
    printf("\n%lld\n",r_fct(n));

    return 0;
}
