#include<stdio.h>
#include<string.h>

int main()
{
   /// IMP FOR INTERVIEW
    char str[100];
    char str1[100];
    printf("Enter the string:- ");
    scanf(" %[^\n]s",str);
    printf("Entered string is :- %s\n",str);

    strcpy(str1, str);
    strrev(str);

    int s = strcmp(str, str1);
    if (s==0)
    {
        printf("String is palindrome");
    }
    else{
         printf("String is not palindrome");

    }   

}