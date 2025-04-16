#include <stdio.h>
/*
1.başla
2.A[5]
3. A[1]*-1 , A[2]*-1 , A[3]*-1 , A[4]*-1 , A[5]*-1
4.yaz A[1] , A[2] , A[3] , A[4] , A[5]
5.dur
*/
int main(){
    int A[5]={-2,-3,-4,-5,-6};
    for (int i = 0; i < 5; i++)
    {
        printf("\t");
        printf("%d",-(A[i]));
    }
}