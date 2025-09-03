#include<stdio.h>
//// WAP to print all even odd in range

int even(int a, int b)
{ 
    if (a>=b)
    {
      return 1;
    }
    else
    {
      printf("%d   ", a);
      even( a + 2, b);      
    }   
}
int main()
{
    int a,b;
    printf("Enter first num:- ");
    scanf("%d",&a); 

    printf("Enter Second num:- ");
    scanf("%d",&b);
    
    even(a,b);
}