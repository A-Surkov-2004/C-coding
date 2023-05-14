#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include <ctype.h>
#include <stdlib.h>

FILE *data;


struct student {
    unsigned int id;
    char name [50];
    char faculty [50];
    float rating;
};


int main()
{
    int n;
    printf("Enter number of students \n");
    scanf("%d", &n);
    struct student arr [n];
    for(int i = 0; i < n; i++){ // input
        printf("creating student #%d \n", i+1);
        printf("Enter student id \n");
        scanf("%d", &arr[i].id);

        printf("Enter student name \n");
        scanf("%s", arr[i].name);

        printf("Enter student faculty \n");
        scanf("%s", arr[i].faculty);

        printf("Enter student rating \n");
        scanf("%f", &arr[i].rating);
    }

    data = fopen("data.txt", "wb");//write
    for(int i = 0; i < n; i++){
        fwrite(&arr, sizeof(char)*100+sizeof(int)+sizeof(float), n, data);
        //fprintf(data,"%u, %s, %s, %f\n", arr[i].id, arr[i].name, arr[i].faculty, arr[i].rating);
    }
    fclose(data);


    FILE *data; //read
    data = fopen("data.txt", "rb");

    fread(&arr, sizeof(char)*100+sizeof(int)+sizeof(float), n, data);

    fclose(data);

    for(int i = 0; i < n; i++){ // output
        printf("Student #%d: \n id: %d \n name %s \n faculty %s \n rating %f \n", i+1, arr[i].id, arr[i].name, arr[i].faculty, arr[i].rating);
    }

    return 0;
}
