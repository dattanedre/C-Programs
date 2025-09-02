#include <stdio.h>
void fact(int num)
{
    int fact=1;
    for (int i = num; i >0; i--)
    {
       fact= fact*i;   
    }
    printf("Factorial is :-%d", fact);  
}
int main()
{
    // Your code goes here
    int num;
    printf("enter the number:-");
    scanf("%d",&num);

    fact(num);
    return 0;
}