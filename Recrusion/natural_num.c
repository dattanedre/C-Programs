#include<stdio.h>
    //// WAP to calculate natural numbers bet 1 to N
void num(int a)
{
    if (a>0)
    {
     num(a-1);
     printf("%d \n",a);
     //if we put this before--> num(a-1)it will print OP in decending order
    }   
}

int main()
{
    num(5);
}