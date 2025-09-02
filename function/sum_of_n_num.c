#include <stdio.h>
void add(int num)
{
   //sum of 1 to n numbers
    int sum=0;
    for (int i = 0; i <= num; i++)
    {
        sum =sum+i;
    }
    printf("Sum is:-%d",sum);
}

int main()
{
    // Your code goes here
    int num;
    printf("Enter the num:-");
    scanf("%d",&num);

    add(num);

    return 0;
}