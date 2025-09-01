#include<stdio.h>
 //WAP to swap 2 numbers
int main()
{
    /*

    //Method 1  
    int a=10;
    int b=20;
    printf("Before swapping of two num:- a=%d, b=%d\n", a,b);
    int c=a;
    a=b;
    b=c;
    printf("After swapping of two num:- a=%d, b=%d", a,b);

    
    //Method 2= Without using 3rd variable
    int a=50;
    int b=30;
    printf("Before swapping of two num:- a=%d, b=%d\n", a,b);
    a=a+b;
    b=a-b;
    a=a-50;
    printf("After swapping of two num:- a=%d, b=%d\n", a,b);
    */
   
    //Method 3
    int a=90;
    int b=220;
    printf("Before swapping of two num:- a=%d, b=%d\n", a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swapping of two num:- a=%d, b=%d\n", a,b);
    
      
    return 0;



}