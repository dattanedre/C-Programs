#include<stdio.h>
#include<string.h>
int main()
{  
    /// Count how many words in the string
    char str[100];
    int space=0;
    printf("Enter thr string:-");
    scanf("%[^\n]s",str);
    printf("Entered string is:-%s\n",str);

     for (int i = 0; str[i]!= '\0'; i++)
     {
         if (str[i] == ' ')
        {
          
           space++;
        }   
     }
     printf("Total Words is:-%d",space+1);
     

}