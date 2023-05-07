#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 11, cin;
    while (sum > 10){
        sum = 0;
        scanf("%d", &cin);

        for(int i = 0; i < 3; i++){
            sum += cin % 10;
            cin /= 10;
        }

        printf("%d \n", sum);
    }
    return 0;
}
