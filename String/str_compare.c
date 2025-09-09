#include<stdio.h>
int main()
{

    char str[]="techano";
    char str1[20];
    printf("Enter the string:- ");
    scanf("%s",str1);
    printf("Entered string is:- %s\n",str1);

    int count=0;

    int flag = 1;
    for (int i = 0; i <= count; i++)
    {
        if (str[i] != str1[i])
        {
            flag = 0;
            break;
        }
        
    }
    if (flag)
    {
        printf("Both string are Same");
    }
    else{
        printf("Both Strigs are Differnt");
    }
    
    

}