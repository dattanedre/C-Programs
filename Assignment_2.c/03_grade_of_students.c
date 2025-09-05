#include<stdio.h>
int main()
{
    int marks;
    printf("Enter a number:- ");
    scanf("%d", &marks);


    if (marks>=90 && marks<=100)
    {
        printf("Grade A+ \n");
    }
    else if (marks>=80 && marks<90)
    {
        printf("Grade A \n");
    }
    else if (marks>=70 && marks<80)
    {
        printf("Grade C \n");
    }
    else if (marks>=60 && marks<70)
    {
        printf("Grade D \n");
    }
    else if ( marks>=0 && marks<60)
    {
        printf("Fail \n");
    }
    else{
        printf("Enter Marks Between 0-100");
    }
    
    
    
}