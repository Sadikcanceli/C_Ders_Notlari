#include <stdio.h>

/*
Transpos yapma
12   ==>   13
34         24
*/

int main(){

    int A[2][2]={{1,2},{3,4}};
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int j = 0; j < 2; j++)
        {
            printf("%d",A[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\n");
        for (int j = 0; j < 2; j++)
        {
            printf("%d",A[j][i]);
        }
    }
}

