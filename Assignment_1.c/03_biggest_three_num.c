#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 3 numbers:- ");
    scanf("%d%d%d", &a, &b,&c);

    if (a>=b && a>=c)
    {
        printf("A is the Biggest Number:-%d",a);
    }
    else if (b>=a && b>=c) 
    {
         printf("B is the Biggest Number:-%d",b);
    }
    else
    {
         printf("c is the Biggest Number:-%d",c);
    }   
}