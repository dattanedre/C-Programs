#include<stdio.h>
int main()
{
   
    int arr[6];
    int n=5;
    int num;
    int index;
    printf("Enter the elements:-");
    for (int i = 0; i < n; i++)
    {
    scanf("%d",&arr[i]);
    }

    printf("Entered array is:-");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }

    printf("\n Enter the num you want to add with index:-");
    scanf("%d%d",&num, &index);

    for (int i = n; i >index; i--)
    {
        arr[i]=arr[i-1];
    }

    arr[index]=num;
    n++;

    printf("Array after adding element:-");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
 
}