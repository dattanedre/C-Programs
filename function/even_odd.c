#include<stdio.h>
void fun(int a, int b)
{ 
  //code gives even num from first to second num that we take from input
  for (int i = a; i <=b; i++)
  { 
    if ( i % 2 == 0)
    {
      printf("%d \n",i);
    }
  }
}
int main()
{
    int a;
    int b;
    printf("Enter the First num:-");
    scanf("%d", &a);
  
    printf("Enter the Last num:-");
    scanf("%d", &b);
    
     fun(a,b);
}