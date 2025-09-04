#include<stdio.h>
// ERROR
int main()
{
    int arr[5];int n=5;
    int num;
    printf("Enter the element in array:-");
    for (int i = 0; i < n; i++)/// for taking input// array input
    {
        scanf("%d",&arr[i]);
    }

    printf("Array is:-");
    for (int i = 0; i < n; i++)//// for output// array print
    {
        printf("%d ",arr[i]);
    }
    
    printf("\n Enter the num you want to delete:-");
    scanf("%d",&num);

    int index;

    // WRONG
    if (index>=5 || index<=0)
    {
        printf("Invalid num");// Cond to check entered num is Valid or NOT
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (num==arr[i])
        {
            for (int j = i; j < n-1;j++)
            {
                arr[j]=arr[j+1];
            }     
        }    
    }
    printf("Array after deleting element:-");
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",arr[i]);
    }   
}