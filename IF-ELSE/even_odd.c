#include <stdio.h>

int main() {
    
    int num;
    printf("Enter the num: ");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("%d is EVEN",num);
    }
    else{
        printf("NUM is ODD");
    }
}