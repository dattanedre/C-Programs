#include<stdio.h>
int main()
{
   //constant pointer
    int a=99;
    int b=239;
    int *const ptr= &a;// syntax
    printf("%d \n",*ptr);//99
    //ptr =&b;// ptr is a constant pointer we cant change it
    *ptr =33;
    printf("%d\n",*ptr);//33

    
    
    //pointer to the constant
    const int c=55;
    int d=66;
    const int* ptr1=&c;
    printf("%d is thevalue of :-\n",*ptr1);//55
    ptr1=&d;
    printf("%d is the value of a:-",*ptr1);//66
    
}