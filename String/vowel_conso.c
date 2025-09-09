#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string:-\n ");
    scanf("%s",str);
     printf("Entered string is:-%s\n",str);

    int i=0;
    int vowel=0;
    int cons=0;

    for (int i=0; str[i]!='\0'; i++)
    {
        if (str[i]== 'a' || 'e' || 'o' || 'u' || 'i' )
        {
            vowel++;
        } 
        else
        {
            cons++;
        }  
    }
    printf("vowel is:- %d\n",vowel);
    printf("consonant is:- %d\n",cons);
}
