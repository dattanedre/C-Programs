#include<stdio.h>
int main()
{
    //Compare string is equal or not
    int i=0;
    char *ptr = "techno";
    char *ptr1 ="techno";
    int flag = 0;

    while (*(ptr1 + i) != '\0')
    {
       ptr++;
       ptr1++;
       if( *(ptr + i) != *(ptr1 + i) )
       {
        flag=1;
        break;
       }
    }

    if (flag)
    {
        printf("String is Not Equal");
    }
    else{
         printf("String is Equal");
    } 

}