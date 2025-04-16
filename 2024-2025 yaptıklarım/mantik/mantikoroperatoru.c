#include <stdio.h>

int main(){
    double sicaklik;
    printf("Lutfen sicaklik degerini giriniz ");
    scanf("%lf",&sicaklik);

    if (sicaklik<= 0 || sicaklik>=30)
    {
        printf("Hava bugun kotu");
    }
    else{
        printf("hava bugun guzel");
    }
    
}