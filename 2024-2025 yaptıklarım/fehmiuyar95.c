#include <stdio.h>

int main(){
    
    char name='f'; //sadece f karakterini kaydetmek için tek tırnak ' kullan 

    int number=20;

    int* nptr=&number;

    char *string = "Ahmet"; //ahmet stringini kaydeder
    
    char* ptr= &name;//ptr değişkeninde name yani f nin pointer adresini kaydetiyor bir pointer oluyor 

    printf("f karakterinin pointeri :%x\n\n",ptr);//ptr nin kaydettiği pointeri yazdırıyor 

    ptr++;

    printf("f karakterinin pointeri :%x\n\n",ptr);//ptr nin kaydettiği pointeri yazdırıyor 

    /*
    burada ilk satırda stringin başına * koymamamızın sebebi char ve string yapılarında yıldız koymadan direkt çağırabiliyoruz
    ama başka veri yapıları (int, double, float gibi) böyle çalışmıyor başına * koymak gerek 
    */
    printf("ahmet stringin:%s\n\n", string);    // "Ahmet" stringini yazdırır
    printf("ahmet stringinin pointeri:%x\n\n", string);    // string'in gösterdiği adresi (pointer değeri) yazdırır

    printf("number sayisinin degeri:%d\n\n",*nptr); // nptr pointerinda kayıtlı değeri yazdırır
    printf("number sayisinin pointer adresi:%x\n\n",nptr); // nptr pointer adresini yazdırır
}