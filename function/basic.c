#include <stdio.h>

// With return type without parameter
int add()
{
    int a = 67;
    int b = 56;
    int c = a + b;
    return c;
}

// with parameter with return type
int sub(int a, int b)
{
    return a - b;
}

////without return type without parameter
void mul()
{
    int a = 4;
    int b = 90;
    int c = a * b;
    printf("Result of multiplication is:- %d\n", c);
}

/// without return type with parametr
void div(int a, int b)
{
    int c = a / b;
    printf("Result of div is:- %d  \n", c);
}

int main()
{
    int x = add(); /// fun call
    printf("Addition is:- %d \n", x);

    // printf("%d\n", add());
    // int y = add();
    // printf("%d \n", y);

    int g = sub(99, 45); ////fun call
    printf("substraction is:- %d\n", g);

    mul();

    div(90, 6);

}