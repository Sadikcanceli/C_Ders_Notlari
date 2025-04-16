#include <stdio.h>

void ekle(int* a,int* b,int* c);

int main(){
    int a=142;
    int b=12;
    int* pointera=&a;//int* pointera diyerek pointera değişkenine a nın pointer adresini kaydetmiş oldum

    printf("a nin adresi %x \n",&a);
    printf("b nin adresi %x \n",&b);
    ekle(pointera,&b, &a);
    
    printf("%d \n",a);
    printf("%d \n",b);
    
    // scanf("%d",&b); 
    /*scanf hiç bir değer döndürmemesine rağmen bir değişkeni değiştirebiliyor
     çünkü fonksiyon pointera giderek değişiklik yapıyor*/ 
}

void ekle(int* a, int* b, int* c)//burada int*a diyerek gelen int parametrenin pointerini alıyoruz 
{
    *a = *a + 2;//*a diyerek a değişkeninin pointerında kaydeilen değeri alıyorz burada yukarıdaki a değişkeni yani 142
    *b = *b + 1;
    *a = *a + 2;

}