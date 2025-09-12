#include<stdio.h>
union ID {
    int adhar;
    int pan;
   // int voting_c;
    double d;
}s;

int main()
{
    printf("%d", sizeof(union ID));//8
    s.adhar=100;
    printf("\n%d",s.adhar);//100

    s.pan=99;
    printf("\n%d",s.pan);//99
    
    printf("\n%d",s.adhar);/// 99 //overwrite
}
