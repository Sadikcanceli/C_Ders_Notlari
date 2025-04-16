#include <stdio.h>

/*recursion fonksiyona basit bir örnek 
fonksiyon yazarken 15. satırda faktoriyel(x) şeklinde yaz parametreyi unutursan pointer değerini yazdırır 
*/

int faktoriyel(int x);

int main(){
 int sonuc;
 int x;

 printf("lutfen bir sayi giriniz");
 scanf("%d",&x);

 sonuc=faktoriyel(x);
 printf("%d",faktoriyel(x));
}

int faktoriyel(int x){
    if (x>0)
    {
        return x*faktoriyel(x-1);
    }
    else
    {
        return 1;
    }
}