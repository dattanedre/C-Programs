#include <stdio.h>
//First few perfect numbers:- 6, 28, 496, 8128, 33550336..... 

int main() 
{
    int num, sum = 0;
    int factor=0;
    printf("Enter a number: ");
    scanf("%d", &num);
   
    for (int i = 1; i <=num; i++)
    {
        if (num%i==0)
        {
            factor= factor+i;
        }      
    }

    sum=factor/2;

    if (sum==num)
    {
        printf("%d is a perfect number",num);
    }
    else{
        printf("%d is not a perfect number",num);
    }
       
}