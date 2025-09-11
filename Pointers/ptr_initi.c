#include<stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x;

    printf("Value of X:- %d \n",x);      // 10
    printf("Value of X by using pointer:-%d \n", *ptr);   // 10
    printf("Value of pointer(x):- %d \n", ptr);   //address// 6422296
    printf("Address of X:- %d ", &x);           // address/// // 6422296

}