#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string:- ");
    scanf("%[^\n]s",str);

   // // find the number of digit, special_symbol and alphabet.
    int i=0;
    int digit=0; 
    int alpha=0;
    int s_char=0;

    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]>=48 && str[i]<=57)
        {
            digit++;
        }   
    }
    printf("Count of digit is:-%d \n", digit);

     for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]>=32 && str[i]<=47)
        {
            s_char++;
        }   
    }
    printf("Count of special char is:-%d \n", s_char);
    

     for (int i=0; str[i]!='\0'; i++)
    {
        if ((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alpha++;
        }   
    }
    printf("Count of Upper case/Lower case Alpha is:-%d", alpha);

}