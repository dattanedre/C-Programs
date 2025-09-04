#include<stdio.h>
int main()
{
     int arr[2][2];
    int brr[2][2];
    int var;

    printf("Enter the matrix element:-");

    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            scanf("%d",&arr[i][j]);
        }       
    }
     printf("Enter the matrix element:-");

    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
           scanf("%d",&brr[i][j]);
           
            
        } 
    }

    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
             if (arr[i][j]!=0)
            {
                var=1;
                break;
            }
        }       
    }

   
    
}