#include<stdio.h>
int main()
{
    // Bitwise Operator= (&, |, ^, <<, >>)
    int a=10;
    int b=21;

    printf("%d \n", a&b);//0
    printf("%d \n", a|b);//31
    printf("%d \n", a^b);//31

    // Left Shift = (<<)  
    printf("%d\n",a<<2);//op=40

    //Right Shift= (>>)   
    printf("%d\n",b>>1); //op=10



}