#include <stdio.h>

//Ayrı bir fonksiyonda diziyi yazdıran kodu yazıp bu fonksiyonu çağırıyorum

void allnumbers(int numbers[]){
    int i;
    for (i=0;i<6;i++)
    {
        printf("%d",numbers[i]);
        printf("\t");
    }
    
}

int main(){
    int numbers[6]={1,2,3,4,5,6};
    allnumbers(numbers);

    return 0;
}