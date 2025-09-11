#include<stdio.h>
int main()
{
    // Get zero in last positin in array
    int arr[10] ={0,82,53,84,0,44,0,88,0,23};
    int search =0;

    int *ptr= arr;

    for (int i = 0; i < (sizeof(arr))/4; i++)
    {
        for(int j= i; j< (sizeof(arr))/4; j++)
        {
         if (arr[i] == 0)
         {
         int temp=arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
        }
       }
           
    } 
for (int i = 0; i < (sizeof(arr))/4; i++)
{
   printf("%d ",arr[i]);
}



}