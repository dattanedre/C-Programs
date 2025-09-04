#include<stdio.h>
int main()
{
   
    int arr[2][2];
    int brr[2][2];
    int crr[2][2]={};

    printf("Enter the 1st matrix element:-");

    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            scanf("%d",&arr[i][j]);
        }       
    }

     printf("Enter the 2nd matrix element:-");

    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            scanf("%d",&brr[i][j]);
        } 
    }

    int flag=1;
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            for (int k = 0; k <2; k++)
           {
            crr[i][j]=0;
            
            crr[i][j]+= arr[i][k] * brr[j][k];

           } 
            
        } 
    }

     for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            printf("%d  ",crr[i][j]);
        } 
        printf("\n");
    }

}