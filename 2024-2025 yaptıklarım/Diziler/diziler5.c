#include <stdio.h>

//Matrisi döngü ile tablo şeklinde yazdırma

int main(){
    int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for (int i=0;i<3;i++)
    {
        for (int a=0;a<3;a++)
        {
            printf("\n");
            printf("A[%d][%d]=",i,a);
            printf("%d",A[i][a]);
        }
    }
}