#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Mainde numberin pointerini gönderdik yani ptr numberin pointer adresini tutuyor
bu sayede *ptr ile number içindeki değeri sqrt fonksiyonuna gönderip karekökünü aldırıyoruz ve
bunu tekrar ptr içindeki pointerin içine atıyoruz return ptr dediğimizde ptr içinde karekökü alınmış değerin pointerini döndürüp 
bunu main i
içinde tekrar ptr ye atıyor daha sonra printf içinde *ptr ile ptr içine atanan karekökü alınmış ifadeyi yazdırıyoruz
*/

float* squareRoot(float* ptr);

int main(){
    float number; 
    float* ptr; // float bir değişkenin pointeri demek

    printf("Please enter a number:");
    scanf("%f",&number);

    ptr=squareRoot(&number); //squareRoot fonksiyonuna number fonksiyonun pointer adresini gönderdik ve ptr değişkenide
    printf("squareroot of number %.2f\n\n",*ptr);

}

float* squareRoot(float* ptr){

    *ptr=sqrt(*ptr);
    return ptr ;
}