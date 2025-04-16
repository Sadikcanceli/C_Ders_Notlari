#include <stdio.h>

int main(){
    
    int Dizi1[5][5]={};
    int Dizi2[5][5]={};
    int Toplam=0;

    for (int i = 0; i<4 ; i++)
    {
        for (int j = 0; j < 4; j++)
        {
          printf("1.Dizinin elemanlarini giriiniz");  
          scanf("%d",&Dizi1[i][j]);
          
        }
    }

    for (int i = 0; i<4 ; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("2.Dizinin elemanlarini giriiniz");
            scanf("%d",&Dizi2[i][j]);
        }
        
    }

    printf("Toplam Matrisler=");

    for (int i = 0; i<4 ; i++)
    {
        for (int j = 0; j < 4; j++)
        {
          Toplam=Dizi1[i][j]+Dizi2[i][j];
          printf("%d\t",Toplam);
          Toplam=0;
        }
        
    }

    
    
}