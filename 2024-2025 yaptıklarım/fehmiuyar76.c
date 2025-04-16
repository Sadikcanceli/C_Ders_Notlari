#include <stdio.h>

/*
Kullanıcıdan alınan değer büyüklüğünde dizi oluşturan ve kullanıcıdan dizinin değelerini alan
soonrada bu değerleri tek ve çift olarak ayırıp yazdıran kod
*/

/*
fonksiyonlara gönderilen şeyin ne olacağı parametlerde veriliyor 
int x diyince int bir değişken gidecek demek bu değişken x olmak zorunda değil
int Dizi[] olunca bir dizi gönderilece demek bu değişkenin adı illa Dizi[] olmak zorunda değil
*/
void Diziolusturma(int Dizi[],int x);
void Teksayilar(int Dizi[],int x);
void Ciftsayilar(int Dizi[],int x);

int main(){
    int x=0;
    printf("Lutfen dizinin eleman sayini giriniz");
    scanf("%d",&x);
    int Dizi[x];
    Diziolusturma(Dizi,x);//bir dizi gönderirken yukardaki gibi tanımlanır 
    Teksayilar(Dizi,x);//main içinde ise bu şekilde Dizi değişkeni ve dizinin büyüklüğü olan x değişkeni gönderilir
    Ciftsayilar(Dizi,x);
    return 0;
}

void Diziolusturma(int Dizi[],int x){

    for ( int i = 0; i < x; i++)
    {
        printf("%d. indis numarali elemani giriniz",i);
        scanf("%d",&Dizi[i]);
    }

    printf("Dizinin orijinal hali:\n");
    for (int j = 0; j < x; j++)
    {
        printf("%d\t",Dizi[j]);
    }
}

void Teksayilar(int Dizi[],int x){
    int sayac=0;

    for (int i = 0; i < x; i++)//kac tane tek eleman olduğunu buluyor ve ayrı bir dizinin büyüklüğünü oluşturuyor
        {
            if (Dizi[i] % 2 != 0)
            {
                sayac++;
            }
        }

    int Teksayilar[sayac];
    int indisler=0;//ikinci bir döngü açmamak için 0 dan başlayan başka bir değişken atanır 

    for (int i = 0; i < x; i++)
        {
            if (Dizi[i] % 2 != 0)
                {
                Teksayilar[indisler++]=Dizi[i];
                }
        }

    printf("\nTek sayilar:\n");

    for (int i = 0; i < sayac; i++)
        {
            printf("%d\t",Teksayilar[i]);
        }
        printf("\n");
}

void Ciftsayilar(int Dizi[],int x){
    int sayac=0;

    for (int i = 0; i < x; i++)//kac tane çift eleman olduğunu buluyor ve ayrı bir dizinin büyüklüğünü oluşturuyor
        {
            if (Dizi[i] % 2 == 0)
            {
                sayac++;
            }
        }

    int Ciftsayilar[sayac];
    int indisler=0;//ikinci bir döngü açmamak için 0 dan başlayan başka bir değişken atanır 

    for (int i = 0; i < x; i++)
        {
            if (Dizi[i] % 2 == 0)
                {
                Ciftsayilar[indisler++]=Dizi[i];
                }
        }

    printf("\nCift sayilar:\n");

    for (int i = 0; i < sayac; i++)
        {
            printf("%d\t",Ciftsayilar[i]);
        }
        printf("\n");
}

