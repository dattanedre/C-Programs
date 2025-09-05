#include<stdio.h>
int main()
{
    int num;
    printf("Enter the num:-");
    scanf("%d",&num);
    int count =0;
    
    for (int i=2; i<=num; i++)
    {
       if(num%i==0)
       {
        count++;
       }
    }

    if (count<=2)
    {
     printf("%d no is prime",num);
    }
    
    else
    {
     printf("%d no is not prime",num);
    }
}
    
