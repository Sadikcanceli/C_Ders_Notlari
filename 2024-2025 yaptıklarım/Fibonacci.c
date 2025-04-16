#include <stdio.h>

/*
kullanıcıdan alınan bir sayi kadarlık fibonacci sayi dizisi adımını hesaplayan c kodu
*/

int main(){

    int sayi;
    printf("lutfen bir sayi giriniz");
    scanf("%d",&sayi);

    int fibonacci[sayi];

    fibonacci[0]=0;
    fibonacci[1]=1;
    //if'leri buraya almak yerne dögünün altına koyarsan döngüyü boşa başlatırsın
    //sayini 0,1 olması ve negatif olması özel durumları için
    if (sayi==0)
    {
        printf("0");
        return 0;
    }
    if (sayi==1)
    {
        printf("1");
        return 0;
    }
    if (sayi<0)
    {
        printf("Hatali sayi girdiniz lutfen pozitif bir tam sayi giriniz");
        return 0;
    }

    /*
    fibonacci dizisinin 2. adımını bulup dizi elemanına atıyor i=sayi olana kadar her döngüde i'nin değerine denk olan 
    fibonacci adımını buluyor
    */

    for (int i = 2; i <= sayi; i++)
    {
        fibonacci[i]= fibonacci[i-1]+fibonacci[i-2]; 
    }

    /*
    bu döngüyle diziye atanan tüm değerler sırayla yazdırılıyor
    */

    for (int j = 0; j < sayi; j++)
    {
        printf("%d\n",fibonacci[j]);
    }

    /*
    kodun büyük çoğunluğunu doğru yazdım ama döngülerde;
    j=sayi 
    J==sayi
    hatalarını kendim bulamadığım için chatgpt den baktım 
    */
    
    

    return 0;
}