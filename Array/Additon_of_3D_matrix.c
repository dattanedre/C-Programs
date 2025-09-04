#include<stdio.h>
int main()
{
    /// Adition of matrix
    int arr[3][3];
    int brr[3][3];

    printf("Enter the matrix element:-");

    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            scanf("%d",&arr[i][j]);
        }       
    }

     printf("Enter the matrix element:-");

    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            scanf("%d",&brr[i][j]);
        } 
    }

    printf("Addition of matrix is:-\n");
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            printf("%d  ",arr[i][j]+ brr[i][j]);
        }
        printf("\n");     
    }
}