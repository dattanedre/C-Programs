#include<stdio.h>
int main()
{
    int i;
    int fact=1;

   for ( int i = 1; i<=5; i++)
   {
   fact=fact*i;
  
   }
    printf("%d\n", fact);
   return 0;

}