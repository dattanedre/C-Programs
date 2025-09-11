#include<stdio.h>
int main()
{
    // addition of two pointers
    
    int m=10;
    int n=20;

    int *p=&m;
    int *q=&n;

    int sum =*p+*q;
    printf("sum is :-%d", sum);

}