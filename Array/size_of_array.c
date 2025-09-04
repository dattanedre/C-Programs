#include<stdio.h>
int main()
{
    int arr[]={1,222,3,4,5,6,3,4,2};
    printf("Size of array:- %d\n",sizeof(arr));//36 Bytes
    printf("Number of elements in array:-%d",sizeof(arr)/sizeof(arr[0]));//9
    return 0;
}