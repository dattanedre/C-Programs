#include<stdio.h>
int fun(int *a, int *b)
{
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
    printf("after swap a=%d and b=%d",*a,*b);// CALL BY REFERANCE
    printf("\n\n");
}

int swap(int c, int d)
{
    int temp =c;
    c=d;
    d=temp;
    printf("after swap c=%d and d=%d",c,d);// CALL BY VALUE
    printf("\n\n");
}

int main()
{
    int a=10;
    int b=99;
    int c=20;
    int d=40;

    fun(&a, &b);// SWAP by call by referance
    swap(c, d);// SWAP by call by VALUE/// Can't print in main fun.

    printf("after swap in main a=%d and b=%d",a,b);

}


