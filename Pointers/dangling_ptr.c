#include<stdio.h>
int main()
{
    int a=20;
    int *ptr=&a;
    free(a);
    printf("%d", ptr);
}