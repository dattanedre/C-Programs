#include<stdio.h>
int main()
{
    //print  even numbers
    int  num;
    printf("Enter thr num:-");
    scanf("%d",&num);

    for (int i = 1; i<=num; i++)
    {
       
       if(i%2==0)
       {
       printf("%d\n",i);
       }
       
    }
    
}