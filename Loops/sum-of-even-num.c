#include<stdio.h>
int main()
{
    // 1st Method 

    // int n;
    // int sum=0;
    // printf("Enter num:- ");
    // scanf("%d",&n);
    // for (int i = 1; i<=n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sum=sum+i;
    //     }      
    // }
    //  printf("%d", sum);
    
    // 2nd Method   
     int n;
    int sum=0;
    printf("Enter num:- ");
    scanf("%d",&n);
    for (int i = 0; i<=n; i=i+2)
    {      
            sum=sum+i;             
    }
     printf("%d", sum);      
}