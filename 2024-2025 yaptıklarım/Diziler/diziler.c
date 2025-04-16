#include <stdio.h>

/*
A[3] A'nın 0 1 2 diye 3 tane değeri vardır demek
A[3][3] A'nın    0  1  2 diye A'nı 0 1 2 indislerini değer veren bir tablo oluşturur 
              0  1  2  3
              1  4  5  6
              2  7  8  9

 */

int main(){
    int A[3];
    int B[3][3];

    
    A[1]=8;
    A[2]=12;

    B[0][0]=1;
    B[0][1]=2;
    B[0][2]=3;
    B[1][0]=4;
    B[1][1]=5;
    B[1][2]=6;
    B[2][0]=7;
    B[2][1]=8;
    B[2][2]=9;

    printf("Lutfen B'nin [1][0] degerini giriniz");
    scanf("%d",&B[1][0]);
    printf("%d\n",B[1][0]);

    printf("Lutfen A'nin [0] degerini giriniz");
    scanf("%d",&A[0]);
    printf("%d",A[0]);
    
}