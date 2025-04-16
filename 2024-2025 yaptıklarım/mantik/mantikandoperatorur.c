#include <stdio.h>

int main(){
    double sicaklik;
    printf("Lutfen sicaklik degerini giriniz ");
    scanf("%lf",&sicaklik);
    if (sicaklik<30 && sicaklik>15)
    {
        printf("Hava bugun guzel");
    }
    else if (sicaklik>=30)
    {
        printf("Hava bugun cok sicak");
    }
    else
    {
        printf("Hava bugun cok soguk");
    }
    
    
    
}