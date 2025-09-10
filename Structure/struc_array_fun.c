#include<stdio.h>
#include<string.h>
struct student fun();
struct student{
    int roll; 
    char name[10];
    int num;
} s[3];

struct student fun(struct student s[3])
{
     for (int  i = 0; i < 3; i++)
   {

     printf("Enter the roll:-");
     scanf("%d",&s[i].roll);

     printf("Enter the name:-");
     scanf("%s",&s[i].name);

     printf("Enter the num:-");
     scanf("%d",&s[i].num);
     
   }
    return  s[3];

}

int main()
{
   struct student s[3];
   fun(s); //fun call
   
   for (int  i = 0; i < 3; i++)
   {
    printf(" roll number is:-%d ", s[i].roll);
    printf(" name is:-%s ", s[i].name);
    printf(" number is:-%d ", s[i].num);
    printf("\n\n");
   }

}