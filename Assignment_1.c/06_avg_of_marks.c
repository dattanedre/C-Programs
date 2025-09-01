#include<stdio.h>
int main()
{
    int m1;
    int m2;
    int m3;
    int m4;
    int m5;
    printf("Enter the Number:- ");
    scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);
    
    int total= m1+m2+m3+m4+m5;

    float avg = (total/5);
    printf("Avg is:- %f\n", avg);
    return 0;

}