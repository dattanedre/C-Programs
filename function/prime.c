#include <stdio.h>
void prime(int num)
{ 
    int count =0;
    for (int i = 1; i <= num; i++)
    {
       if (num % i == 0)
       {//5%1==0 true count++
        //5%2==1 false 
        //5%3==0 false
        //5%4==1 false
        //5%5==0 true count++
         count++;
       }
       
    }

    if (count == 2)
    {
     printf("its prime num");
    }
    else
    {
        printf("Its not prime");
    } 
}

int main() {
    // Your code goes here
    int num;
    printf("Enter the num:-");
    scanf("%d",&num);
    prime(num);
    return 0;
}