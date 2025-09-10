#include<stdio.h>
#include<string.h>
struct student{
    
    int roll; 
    char name[10];
    int num;
} s[3];

int main()
{
   struct student s[3];
   
   for (int  i = 0; i < 3; i++)
   {
    printf("Enter the roll:-");
    scanf("%d",&s[i].roll);

     printf("Enter the name:-");
    scanf("%s",&s[i].name);

     printf("Enter the num:-");
    scanf("%d",&s[i].num);
   }

    for (int  i = 0; i < 3; i++)
   {
    printf(" roll no is:-%d ",s[i].roll);
    printf(" name no is:-%s ",s[i].name);
    printf(" num no is:-%d ",s[i].num);
   }
   
}

