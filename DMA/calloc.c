#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array:-");
    scanf("%d",&n); ///USE- & 

    int *arr = (int *) calloc (n, sizeof(int));  // Calloc syntax

    if (arr == NULL)
    {
        printf("Memory allocated fail \n");
    }
    else{
        printf("Memory allocated successfully \n");
    }

    // printf("\nEnter the array elements:-");
    // for (int i = 0; i < n; i++)
    // {
    //    scanf("%d", &arr[i]);//// USE- &
    // }

     for (int i = 0; i < n; i++)
    {
      printf("%d ", arr[i]);
    }

    free(arr);
    
}