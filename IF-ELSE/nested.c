#include <stdio.h>

int main() {
    // Your code goes here
    int a=1011;
    int b=202;
    int c=30;

    if (a>b & a>c)
    {
        printf("A is Greatest");
    }
    else if (b>c & b>a)
    {
         printf("B is Greatest");
    }
    else{
         printf("C is Greatest");
    }
    
    
    
    return 0;
}