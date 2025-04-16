#include <stdio.h>

/*
Siparis fonksiyonunda tablodaki balıklardan birini ve adetini alıyor
Hesapla fonksiyonunda alınan balığın fiyatını topluyor
ana fonksiyonda bunu yazdırıyorum

Siparise sadece secimi gönderim istedğim fiyatı return edip fiyat değişkenine atıyorum
Hesaplaya adet fiyat ve toplam değişkenlerini göderip toplama tekrar atıyorum
sontoplam değişkeninde hesapla fonksiyonunu atayıp yazdırıyorum

!! Mal gibi her değişkeni fonksiyona verme mal 
*/

int Siparis(int secim  );
int Hesapla(int adet,int fiyat,int toplam  );
    
int main(){
    int secim,adet,fiyat;
    int toplam=0;
    int sontoplam=0;

    while (secim!=6)
    {
        printf("***Menu***\n");
        printf("1.Zargan=120TL\n");
        printf("2.Kefal=90TL\n");
        printf("3.Mezgit=100TL\n");
        printf("4.Hamsi=80TL\n");
        printf("5.Alabalik=85TL\n");
        printf("6.Cikis\n");
        printf("Lutfen 1-6 cinsinden bir secim yapin");
        scanf("%d",&secim);
        if (secim>0 && secim<7){
        if (secim==6){
            printf("%d",sontoplam);
            return 0; 
            }
        printf("Kac adet istiyorsunuz");
        scanf("%d",&adet);
        Siparis(secim); 
        fiyat=Siparis(secim);
        sontoplam+=Hesapla( adet,fiyat,toplam );
        }
        else
        {
        printf("Hatali deger girdiniz");
        return 0;
        }
    }
}

int Siparis(int secim ){
    int Zargan=120,Kefal=90,Mezgit=100,Hamsi=80,Alabalik=85;
    if (secim==1){
        return 120;
    }
    if (secim==2)
    {
        return 90;
    }
    if (secim==3)
    {
        return 100;
    }
    if (secim==4)
    {
        
        return 80;
    }
    if (secim==5)
    {
        return 85;
    }
}
int Hesapla(int adet,int fiyat,int toplam  ){
    toplam=toplam+adet*fiyat;
}