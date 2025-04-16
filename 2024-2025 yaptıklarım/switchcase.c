#include <stdio.h>
int main(){
    int elma=5,armut=10,karpuz=15,secim,adet,toplam=0;
    if (secim==5)
    {
        printf("Program kapatiliyor",secim);
        return 0;
    }
while (secim!=4)
{
    printf("\n**Meyveler**\n1.Elma\n2.Armut\n3.Karpuz\n4.Toplam fiyat\n5.Cikis\n");
    printf("Lutfen almak istediginiz meyveyi seciniz");
    scanf("%d",&secim);
    switch (secim)
    {
        case 1: 
        printf("kac adet almak istiyorsunuz");
        scanf("%d",&adet);
        toplam=toplam+adet*elma;
        break;
        case 2: 
        printf("kac adet almak istiyorsunuz");
        scanf("%d",&adet);
        toplam=toplam+adet*armut;
        break;
        case 3: 
        printf("kac adet almak istiyorsunuz");
        scanf("%d",&adet);
        toplam=toplam+adet*karpuz;
        break;
        case 4:
        printf("Toplam fiayt =%d",toplam);
        return 0;
        break;
        case 5:
        printf("Program kapatiliyor",secim);
        return 0;
        break;
        default:
        printf("Hatali sayi girdiniz program sonlandiriliyor");
        return 0;
        break;
    }
}
return 0;
}
