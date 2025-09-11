#include<stdio.h>
int main()
{
    // Find // Search element
    int arr[10] ={1,2,3,4,33,44,23,88,22,23};
    int search =22;

    int *ptr= arr;

    for (int i = 0; i < 10; i++)// i= (sizeof(arr)/4) /// i= (sizeof(arr)/arr[0])
    {
        if (*(ptr+i)==search)
        {
            printf("%d element found at %d Index", search, i);
            break;
        }
        
    } 

}