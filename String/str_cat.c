#include<stdio.h>
int main()
{
    char str1[20]="techno";
    char str2[]="scripts";
    int i = 0;
    int j = 0;

    while (str1[i] !='\0')
    {
        i++;
    }
    while (str2[i] != '\0')
    {
        str1[i] = str2[i];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("String after cancat :- %s",str1);
    
}