#include<stdio.h>
int main()
{
    //Clear-Bit Formula = num=num & ~(1 << bit)
    int r=21 & ~ (1<<2);
    printf("%d \n", r); //op=17

}