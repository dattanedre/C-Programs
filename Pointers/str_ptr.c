#include<stdio.h>
int main()
{
   //Find lenth/count of string
    // String Pointer
    char str[]="Techno";

    char *str3="technoscripts";
    int count=0;
    char *ptr=str;
    for (int i = 0; i < *(str3+i)!= '\0'; i++)
    {
        count++;

    }
    printf("Count is %d", count);
}