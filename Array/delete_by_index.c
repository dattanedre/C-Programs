#include<stdio.h>
int main()
{
    int arr[5];
    int n=5;
    printf("Enter the element in array:-");

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);// Array Input From User
    }

    printf("Entered array is:-");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);// Array Print
    }

    int index;
    printf("\nEnter the index you want to delete:- ");
    scanf("%d",&index);

    if (index>=5 || index<=0)
    {
        printf("Invalid num");
        return;
    }
    

    for (int i = index; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    
    printf("\nArray after deleting elements:- ");
    for (int i = 0; i <n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}