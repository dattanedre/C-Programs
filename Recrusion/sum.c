#include<stdio.h>
int sum(int n)
{ 
    if (n==0)
    {
      return 0;
    }
    else
    {
      int a= n + sum (n - 1);    
    }   
}
int main()
{
    int n,a;
    printf("Enter the num:- ");
    scanf("%d", &n);

   //int d = even(a);
   a=sum(n);
   printf("%d",a);

    

}