#include <stdio.h>
#include <stdlib.h>


struct el {
    int value;
    struct el *next;
    struct el *prev;
};

void fwd(struct el* element){
    printf("%d",element->value);
    if (element->next != NULL)
        fwd(element->next);
}

void bck(struct el* element){
    printf("%d",element->value);
    if (element->prev != NULL)
        bck(element->prev);
}

int main()
{
    int n = 0, now = 0;

    printf("Size?\n");
    scanf("%d",&n);

    struct el arr [n];

    for(int i = 0; i < n; i++){
        printf("value %d?\n", i);
        scanf("%d", &now);
        arr[i].value = now;
        if(i == 0){
            arr[i].prev = NULL;
            arr[i].next = &arr[i+1];
        }
        else if(i == n-1){
            arr[i].prev = &arr[i-1];
            arr[i].next = NULL;
        }
        else{
            arr[i].prev = &arr[i-1];
            arr[i].next = &arr[i+1];
        }
    }

    fwd(&arr[0]);
    printf("\n");
    bck(&arr[n-1]);

    return 0;
}
