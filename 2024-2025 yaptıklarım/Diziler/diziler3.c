#include <stdio.h>

//değeri kullanıcıdan alıp yazdırma

int main(){
    int A[3]={};
    int i;
    for (i=0;i<3;i++)
    {
        printf("Bir deger giriniz=");
        scanf("%d",&A[i]);
        printf("Girilen deger=%d\n",A[i]);
    }

    for (i=0;i<3;i++)
    {
        printf("A Dizi Degerleri=%d\n",A[i]);
    }
    

    
}