#include <stdio.h>
#include <stdlib.h>

struct matrix
{
    double **content;
    int strings, columns;
};

int main()
{
    double *a;
    struct matrix mtx;
    int cmd;
    while(1){
        printf("Enter 1 to create matrix, 2 to create array, 3 to multiply two matrix \n");

        scanf("%d", &cmd);

        if(cmd == 2)
            a = create_array();

        else if(cmd == 1)
	       create_matrix();


        else if (cmd == 3)
            multi_mat();

        else
            printf("Wrong command, try again... \n");
    }
	return 0;
}
