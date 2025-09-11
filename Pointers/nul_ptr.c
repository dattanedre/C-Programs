#include<stdio.h>
int main()
{
    // NULL Pointer
    int a=99;
    void *ptr =NULL;
    printf("%d\n", ptr);// NULL stores zero
    if (ptr==NULL)
    {
        printf("Memory not allocate");
    }
    else{
        printf("Memory allocate Successfully");
    }
}