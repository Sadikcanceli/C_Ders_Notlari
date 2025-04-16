#include <stdio.h>

//sınvada yazdığım kod 

int main(){
 int i=1;
 int j=0;
 int sayi=0;

 for ( i=1; i < 10; i++)
 {
    for (j = 0; j < 10; j++)
    {
        sayi=i*1000+j*100+j*10+i*1;
        printf("%d\n",sayi);
    }
    
 }
}