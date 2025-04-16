#include <stdio.h>
#include <stdlib.h>

int main(){

    char isim[30];

printf("ismiinizi giriniz");
    gets(isim);// gets tehlikeli gets yerine fgets kullanmak daha güvenli

    printf("\n Isminiz %s\n",isim);

    return 0;
}