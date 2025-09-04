#include<stdio.h>
//ERROR
int main()
{
    int arr[5];
    printf("Enter the array elements:-");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }

     printf("Entered array are:-");
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (arr[i]==arr[j])
            {
                printf("\n %d Number found at %d location %d",arr[i], i, j);
            }   
        }   
    } 
}