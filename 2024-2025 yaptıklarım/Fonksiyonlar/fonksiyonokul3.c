#include <stdio.h>

/*
kullanıcıdan alınan en ve boy değerine göre yıldızlardan dikdörtgen yazdıran kod
*/

int dikdortgen();

int main(){
dikdortgen();  
}
 
int dikdortgen(){
    int en;
    int boy;

    printf("Lutfen dikdortgenin en degerini giriniz");
    scanf("%d",&en);
    printf("Lutfen dikdortgenin boy degerini giriniz");
    scanf("%d",&boy);

    for (int i = 0; i < en; i++)
    {
        for (int j = 0; j < boy; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}