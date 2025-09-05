#include<stdio.h>
int main()
{
    int a=0;
    int b=1;
    int c=1;

    printf("%d  %d  ", a,b);

    for (int i = 1; i <=10; i++)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
    }
    
}