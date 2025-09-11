#include<stdio.h>
int main()
{
    int x = 10;
    int *ptr = &x;
   
    //pointer
    printf("Value of X:- %d \n",x);// 10
    printf("Value of X by using pointer:-%d \n", *ptr);// 10
    printf("Value of pointer(x):- %d \n", ptr);//address// 6422296
    printf("Address of X:- %d\n ", &x);// address/// // 6422296
    
    //Doublr pointer
    int **d_ptr=&ptr;
    printf("\n\n Value of x by using d_ptr:- %d\n",**d_ptr);// 10
    printf(" Address of ptr is:- %d\n", &ptr);// 6422292
    printf("Address of ptr by using d_ptr:-%d", d_ptr);// 6422292

    //Triple pointer
    int ***t_ptr=&d_ptr;
    printf("\n\n Value of x by using t_ptr:- %d\n",***t_ptr);// 10
    printf(" Address of d_ptr is:- %d\n", &d_ptr);// 6422288
    printf("Address of d_ptr by using t_ptr:-%d", t_ptr);// 6422288

}
