#include<stdio.h>
#pragma pack(1)/// use for packing
struct ID {
    int adhar;
    char c;
    int pan;
    int voting_c;
    double d;
}s;

int main()
{
    printf("%d", sizeof(struct ID));// 21
    s.adhar=100;
    printf("\n%d",s.adhar);//100

    s.pan=99;
    printf("\n%d",s.pan);//99
    
    printf("\n%d",s.adhar);/// 100
}
