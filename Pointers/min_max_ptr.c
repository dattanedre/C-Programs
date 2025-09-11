#include<stdio.h>
int main()
{
    // Find Min Element in array using pointer
    int arr[10] ={222,2345,44,66,787,88, 6,0,22,9};
    int *ptr = arr;
    int min = *ptr;
    int max =*ptr;

    for (int i = 0; i < (sizeof (arr) / 4); i++)
    {
        if (*(ptr+i) < min)
        {
           min =*(ptr+i);
        } 
    } 
    printf("%d is the min element \n",min);

    // Find Max Element
    for (int i = 0; i < (sizeof(arr))/4; i++)
    {
        if (*(ptr+i)> max)
        {
           max =*(ptr+i);
        }
        
    } 
    printf("%d is the max element",max);

}