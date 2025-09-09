#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string:- ");
    scanf("%[^\n]s",str);
     printf("Entered string is:-%s\n",str);


     for (int i = 0; str[i]!='\0'; i++)
     {      
        if (str[i] == ' ')
        {
           printf(" ");
        }
        
        //// for lower to upper
        if ( str[i] >= 'a' && str[i] <= 'z' )/// 97-32 =65
        {
            printf(" %c", str[i] - 32); //65+32= 97  
        }
        
        //// for upper to lower
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            printf("%c", str[i] + 32);
        }   
     }


     
}