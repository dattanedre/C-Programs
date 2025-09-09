#include<stdio.h>
#include<string.h>
int main(){
    char arr[]="techno";
    char brr[]="scripts";
    
    // strlen
    // printf("Lenth of string is:- %d\n", strlen(arr));
    
    //strrev
    // printf("Reverse string is:- %s\n", strrev(arr));  
    
    // strcat
    // printf("string concat is:- %s\n", strcat(arr,brr)); 
      
    // strcmp
    int s= strcmp(arr,brr);  
    //if both str is same is gives =0 otherwise =1
    printf("%d \n",s);

    // strcpy
    int crr[10];
    strcpy(crr,arr);
    printf("String copy is :- %s\n",crr);
    
    // For space use-  [^\n]
    char str[10];
    printf("Enter the string:-");
    scanf("%[^\n]s", str);
    printf("Entered string is :-%s",str);
}