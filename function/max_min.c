#include<stdio.h>
void fun(int a, int b)
{ 
   if (a > b)
   {
    printf("a is greater than b");
   }
   else{
    printf("b is greater than a");
   }  
}
int main()
{
    int a;
    int b;
    printf("Enter first num:- \n");
    scanf("%d",&a);

    printf("Enter Second num:- \n");
    scanf("%d",&b);

    fun(a, b);
}