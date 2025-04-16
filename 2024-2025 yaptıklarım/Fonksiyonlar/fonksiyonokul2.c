#include<stdio.h>

/*,
ayrı fonksiyonlarda girilen alt ve üst sınırlar arasındaki sayılardan 3'ün katı ,7'nin katı ve 9'un katı olan sayıları 
ve onların Aritmetik ortalamalarını bulan kod 
*/

int ucler();
int yediler();
int dokuzlar();
void yaz();

int main() {
    yaz();
}

int  ucler(int altsinir, int ustsinir) {
    printf("Ucun katlari: ");
    int a = 0;
    float AO = 0;
    for (int i = altsinir; i < ustsinir; i++) {  
        if (i % 3 == 0) {
            printf("%d \t", i);
            a++;
            AO += i;
        }
    }
    if (a > 0) {
        AO = (AO / a);
        printf("%lf\n", AO);
    } 
}

int  yediler(int altsinir, int ustsinir) {
    printf("Yedinin katlari ");
    int a = 0;
    float AO = 0;
    for (int i = altsinir; i < ustsinir; i++) {
        if (i % 7 == 0) {
            printf("%d \t", i);
            a++;
            AO += i;
        }
    }
    if (a > 0) {
        AO = (AO / a);
        printf("%lf\n", AO);
    }
}

int  dokuzlar(int altsinir, int ustsinir) {
    printf("Dokuzun katlari ");
    int a = 0;
    float AO = 0;
    for (int i = altsinir; i < ustsinir; i++) {
        if (i % 9 == 0) {
            printf("%d \t", i);
            a++;
            AO += i;
        }
    }
    if (a > 0) {
        AO = (AO / a);
        printf("%lf\n", AO);
    } 
}

void yaz() {
    int as = 0, us = 0;
    printf("Bir alt sinir giriniz ");
    scanf("%d", &as);
    printf("Bir ust sinir giriniz ");
    scanf("%d", &us);
    ucler(as, us);
    printf("\n");
    yediler(as, us);
    printf("\n");
    dokuzlar(as, us); 
}

