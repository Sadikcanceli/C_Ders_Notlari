#include <stdio.h>

//Matris değerlerini kullanıcıdan alıp döngü ile hepsini denk geldiği matrise göre yazma

int main(){
    int A[3][3]={};
    printf("lutfen deger giriniz=");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d \n",&A[i][j]);
        } 
    }
    printf("-------------------------\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("A[%d][%d]=",i,j);
            printf("%d \n",A[i][j]);
        }   
    }
}