#include <stdio.h>

int main(){
    int A[386];
    int i;
    printf("Lutfen gormek istediginiz ucgenin numarasini giriniz");
    scanf("%d",&i);
    if (i<0 && i>386)
    {
        printf("Hatali numara girdiniz program sonlandiriliyor");

        return 0;
    }
    else
    {
        printf("A[%d]=");
        printf("%d",A[i]);
    }
    
    

}
