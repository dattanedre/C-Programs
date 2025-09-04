#include<stdio.h>
// UNDERSTAND THIS CODE
int main()
{
        int arr[5];//array declare

   // int brr[];// not allowed

    int brr[5]={12,24,43,65,76};// array declare withinitilization
  
   //taking input from user 
    printf("\n Enter array elements:- \n");  
    for (int i = 0; i < 5; i++)
    {
       scanf("%d", &arr[i]);
    }

    // output on the screen
    printf("Enter input is:-");
    for (int i = 0; i < 5; i++)
    {
       printf("%d th element is:- %d\n", i + 1, arr[i]); 
    }

    //updating the value for array and print it
    brr[3]=99;
    brr[4]=100;
    for (int i = 0; i < 5; i++)
    {
       printf("Updated element is:-%d \n ",  brr[i]); 
    }

    //access
    printf("  \n access element is:- %d \n", brr[3]);


    ///// if you initialize fewer elements than the array size,
    //the remaining elements are automatically initialized to 0.
    int crr[5] = {};
    printf("array with fewer element is \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%dth element is :- %d  \n", i + 1, crr[i]);
    }

     //memory location
     for (int i = 0; i < 5; i++)
    {
        printf("%dth element  memory location is :- %X  \n", i + 1, &brr[i]);
    }
}
    
    

    

    
    
    
    

    
