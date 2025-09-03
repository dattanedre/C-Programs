#include<stdio.h>

// WAP to find sum of digits Using RECURSION

int sumOfDigits(int num)
{
    if (num==0)
    {
        return 0;
    }
    else
    {
        return (num%10) + sumOfDigits(num/10);
    }   
}
int main()
{
    int num =765489;// Revision Que
    printf("sumOfDigits: %d", sumOfDigits(num));
    return 0;
}


// #include <stdio.h>

// int recursiveAddition(int num) {
//     if (num < 10) // Single digit left
//         return num;
//     int sum = 0;
//     while (num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }
//     return recursiveAddition(sum); // Call again
// }

// int main() {
//     int num;
//     printf("Enter number: ");
//     scanf("%d", &num);
//     printf("Final sum: %d", recursiveAddition(num));
//     return 0;
// }