#include<stdio.h>
void add(int a, int b)
{
    int c=a+b;
    printf("Addition is:- %d",c);
}

void sub(int a, int b)
{
    int c=a-b;
    printf("Sub is:- %d",c);
}

void mul(int a, int b)
{
    int c=a*b;
    printf("Mul is:- %d",c);
}

void div(int a, int b)
{
    int c=a/b;
    printf("Div is:- %d",c);
}

int main()
{
    int num; int a,b;

    printf("1-Add:-\n2-sub:-\n3-Multi:-\n4-Div:-\nSelect any 1 option:-");
    scanf("%d",&num);

    printf("Enter 1st num:-");
    scanf("%d",&a);
    printf("Enter 2nd num:-");
    scanf("%d",&b);

    switch (num)
    {
    case 1 :
    add(a,b);
    break;

    case 2 :
    sub(a,b);
    break;

    case 3 :
    mul(a,b);
    break;

    case 4 :
    div(a,b);
    break;
    
    default:
    printf("Select correct option");
    break;
    
    }
}