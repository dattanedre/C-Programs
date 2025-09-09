#include<stdio.h>
int main()
{
    // Size of String
    char str[]="technoscripts";// str alway ends with null character
    printf("Size of string is:- %d  \n", sizeof(str));

    //count  ////Without- strlen
    int count=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }

    //String Reverse ////Without- strrev
    printf("Count is:- %d \n",count);
    for (int i = count-1; i >=0; i--)
    {
       printf("%c",str[i]);
    }
    
    
}