#include<stdio.h>
struct ID {
    int adhar;
    int pan;
    int voting_c;
    double d;
    
}s;

int main()
{
    printf("%d", sizeof(struct ID));// 24
    s.adhar=100;
    printf("\n%d",s.adhar);//100

     s.pan=99;
    printf("\n%d",s.pan);//99
    
    printf("\n%d",s.adhar);/// 100
}
