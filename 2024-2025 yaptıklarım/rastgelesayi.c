#include <stdio.h>
#include <stdlib.h>

/*
Rastglee sayi tahimin yapma oyunu
*/

int main(){
    int sayi=0;
    int tahmin=0;
    int devam=1;
    srand(time(NULL));
    sayi=rand()%99+1;
    printf("Lutfen 1-100 arasinda bir sayi tahmin edin");
    scanf("%d",&tahmin);

    if (tahmin>100 || tahmin<1)
    {
        printf("Hatali deger girdiniz");
        return 0;
    }
    

    if (sayi==tahmin)
    {
        printf("Tebrikler dogru cevap ");
        return 0;
    }

    else
    {
        printf("Yanlis cevap verdiniz\n");    
    }


    while (devam==1)
    {
        printf("Devam=?   1 devam/0 dur");
        scanf("%d",&devam);
        if (devam==0)
        {return 0;}
        
       printf("Lutfen 1-100 arasinda bir sayi tahmin edin");
        scanf("%d",&tahmin);

        if (tahmin>100 || tahmin<1)
        {
            printf("Hatali deger girdiniz");
            return 0;
        }

        if (sayi==tahmin)
        {
            printf("Tebrikler dogru cevap ");
            return 0;
        }
        else
        {
            printf("Yanlis cevap verdiniz");    
        }
        
    }
    
}

