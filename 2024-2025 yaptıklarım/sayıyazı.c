#include <stdio.h>

/*
klavyeden girilen bir sayıyı yazı şeklinde yazma kodu
*/

void birler(int sayi);
void onlar(int sayi);
void yuzler(int sayi);
void binler(int sayi);
void onbinler(int sayi);

int main(){
    int sayi=1;
    int b1,b10,b100,b1000,b10000;
    while (sayi!=-1)
    {
        printf("Lutfen en fazla 5 basamakli bir sayi giriniz / cikis yapmak için -1 giriniz");
        scanf("%d",&sayi);
        printf("\n");
        if (sayi==-1)break;
        b1 = sayi % 10;                 // Birler basamağı
        b10 = (sayi / 10) % 10;         // Onlar basamağı
        b100 = (sayi / 100) % 10;       // Yüzler basamağı
        b1000 = (sayi / 1000) % 10;     // Binler basamağı
        b10000 = (sayi / 10000) % 10;   // On binler basamağı

        onbinler(b10000);
        binler(b1000);
        yuzler(b100);
        onlar(b10);
        printf(" ");
        birler(b1);
        printf("\n");
        
    }
    return 0;
}

void birler(int sayi){

    switch (sayi)
    {
        case 1:
        printf("bir");
        break;
        case 2:
        printf("iki");
        break;
        case 3:
        printf("uc");
        break;
        case 4:
        printf("dort");
        break;
        case 5:
        printf("bes");
        break;
        case 6:
        printf("alti");
        break;
        case 7:
        printf("yedi");
        break;
        case 8:
        printf("sekiz");
        break;
        case 9:
        printf("dokuz");
        break;
        default:
        printf(" ");
        break;
    }
}
void onlar(int sayi){
    switch ( sayi)
    {
        case 1:
        printf("on");
        break;
        case 2:
        printf("yirmi");
        break;
        case 3:
        printf("otuz");
        break;
        case 4:
        printf("kirk");
        break;
        case 5:
        printf("elli");
        break;
        case 6:
        printf("altmis");
        break;
        case 7:
        printf("yetmis");
        break;
        case 8:
        printf("seksen");
        break;
        case 9:
        printf("doksan");
        break;
        default:
        printf(" ");
        break;
    }
}
void yuzler(int sayi){
    switch ( sayi)
    {
        case 1:
        printf(" yuz ");
        break;
        case 2:
        printf(" iki yuz ");
        break;
        case 3:
        printf(" uc yuz ");
        break;
        case 4:
        printf(" dort yuz ");
        break;
        case 5:
        printf(" bes yuz ");
        break; 
        case 6:
        printf(" alti yuz ");
        break;
        case 7:
        printf(" yedi yuz ");
        break;
        case 8:
        printf(" sekiz yuz ");
        break;
        case 9:
        printf(" dokuz yuz ");
        break;
        default:
        printf(" ");
        break;
    }
}
void binler(int sayi){
    switch ( sayi)
    {
        case 1:
        printf(" bin ");
        break;
        case 2:
        printf(" iki bin ");
        break;
        case 3:
        printf(" uc bin ");
        break;
        case 4:
        printf(" dort bin ");
        break;
        case 5:
        printf(" bes bin ");
        break;
        case 6:
        printf(" alti bin ");
        break;
        case 7:
        printf(" yedi bin ");
        break;
        case 8:
        printf(" sekiz bin ");
        break;
        case 9:
        printf(" dokuz bin ");
        break;
        default:
        printf(" ");
        break;
    }
}
void onbinler(int sayi){
    switch ( sayi)
    {
        case 1:
        printf(" on  ");
        break;
        case 2:
        printf(" yirmi  ");
        break;
        case 3:
        printf(" otuz  ");
        break;
        case 4:
        printf(" kirk  ");
        break;
        case 5:
        printf(" elli  ");
        break;
        case 6:
        printf(" altmis  ");
        break;
        case 7:
        printf(" yetmis  ");
        break;
        case 8:
        printf(" seksen  ");
        break;
        case 9:
        printf(" doksan  ");
        break;
        default:
        printf(" ");
        break;
    }
}