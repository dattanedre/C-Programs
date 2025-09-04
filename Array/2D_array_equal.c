#include<stdio.h>
int main()
{
   
    int arr[2][2];
    int brr[2][2];

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

    int flag=1;
    for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <2; j++)
        {
            if (arr[i][j] != brr[i][j])
            {
                flag=0;
            }
            
        } 
    }

    if (flag)
    {
       printf("Equal");
    }
    else{
        printf("Not Equal");
    }
    


}