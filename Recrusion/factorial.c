#include<stdio.h>
// WAP to find factorial 
int fact(int n)
{ 
    if (n==0) // base case
    {
      return 1;
    }
    else
    {
      return n*fact(n-1);    
    }   
}
int main()
{
    int r;
    r=fact(4);
    printf("%d",r);
    

}