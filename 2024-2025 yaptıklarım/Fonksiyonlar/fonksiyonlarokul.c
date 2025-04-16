#include <stdio.h>

/*
Fonksiyonu main'in altına yazmak gerekir altına yazınca hata verdiği için boş biçimde en başta tanımlama yapılır main içinde
topla fonksiyonunu çağırdıktan sonra gidip o fonksiyonu bulup okuyup işlemi yapar sonra main içindeki printf("islem bitti"); 
satırından devam eder

fonksiyonlar içinde tanımlanan değişken o fonksiyona özeldir farklı değişkenler 

1.fonk burda parametre almayan ve döndürme yapmayan bir fonksiyon örneği var
2.fonk burda döndürme yapmayan ama parametre alan bir fonksşyon örneği var
3.fonk burda döndürme yapan ama parametre almayan bir fonksiyon örneği var 
4.fonk hem parametre alıp hem de değer döndürüyor en iyisi süper
*/

void topla();
void toplama(int A,int B);
int topla1();
int topla2();

int main(){
    //ekstra şahsi denemeler
    int carpma;
    //2.fonk
    int sayi1=12;
    int sayi2=30;
    //3.fonk
    int sonuc;
    //1.fonk
    printf("Toplama islemi yapiliyor\n");
    topla();
    printf("islem bitti\n\n");
    //2.fonk
    toplama(sayi1,sayi2);
    printf("islem bitti\n\n");
    //3.fonk
    sonuc=topla1();
    printf("Toplama sonucu=%d\n\n",sonuc);
    //4.fonk
    printf("Toplam sonuc=%d\n\n",topla2(15,20));
    //ekstra şahsi denemeler
    carpma=topla2(10,20)*10;
    printf("Carpma sonucu=%d",carpma);
    

}
//1.fonk
void topla(){
    int A=5,B=6,tp;
    tp=A+B;
    printf("Toplam Sonuc=%d\n",tp);
}
//2.fonk
void toplama(int A,int B){
    int sonuc;
    sonuc=A+B;
    printf("Toplam sonuc=%d\n",sonuc);
}
//3.fonk
int topla1(){
    int A=12;
    int B=20;
    int toplama;
    toplama=A+B;
    return toplama;
}
//4.fonk
int topla2(int C,int D){
    int sonuc;
    return C+D;
}
