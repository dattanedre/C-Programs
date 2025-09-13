#include <stdio.h>
// Swapp, Vowel, Patterns, Prime, Factorial, Armstriong, Array/String Reverse, 
int main()
{
    int num;
    int count=0;
    printf("Enter the num:");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count==2)
    {
        printf("NUM is Prime");
    }
    else{
        printf("NUM is NOT Prime");
    }
    
    
    return 0;
}