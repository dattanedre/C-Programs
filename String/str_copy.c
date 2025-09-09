#include<stdio.h>
int main()
{
    char str[15] ="technoscripts";
    char str2[15];
    int count=0;

     for (int i = 0; str[i]!='\0'; i++)
    {
      str2[i]=str[i];
    }
     printf("Copied string is:- %s",str2);
}