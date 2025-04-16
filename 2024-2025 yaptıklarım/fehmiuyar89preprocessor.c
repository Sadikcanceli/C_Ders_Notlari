#include <stdio.h>
#define PI 3.14
#define MAX(number1,number2) (number1>number2)? number1:number2
/*
bu tarz define işlemlerine makro denir 
üst satırda bir MAX makrosunda number1 number2 verdik 
ikinci parantezde büyük küçük olmayı kontrol ettik
son kısımda eğer number1 büyükse number1 yaz değilse number2 yaz dedik
*/  

int main(){
    //define ile pi ayarlma kısmı 
    float area;
    float radius;

    printf("Lutfen bir Cap degeri giriniz");
    scanf("%f",&radius);

    area=PI*radius*radius;
    printf("%f\n\n",area);

    //makro yazma kısmı
    printf("%d\n",MAX(2,7));
    printf("%d\n",MAX(5,2));
    printf("%d\n",MAX(136,243));
    printf("%d\n",MAX(6,4));

    return 0;
}