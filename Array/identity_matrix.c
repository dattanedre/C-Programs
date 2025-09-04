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

    int identity=1;
     for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
           if (i==j && arr[i][j]!=1)
           {
            identity=0;
           }
           else if(i!=j && arr[i][j]!=0)
           {
            identity=0;
           }
           
        } 
    }
    if (identity)
    {
        printf("Is identity matrix");
    }
    else{
         printf("Is not identity matrix");
    }
    
}