#include<stdio.h>
#include<string.h>
struct employe{
    int id; 
    char name[10];
    int salary;
};

int main()
{  
   struct employe s[5];
   int max=s[0].salary;
   int index;
   
   for (int  i = 0; i < 3; i++)
   {
     printf("Enter the id:-");
     scanf("%d",&s[i].id);

     printf("Enter the name:-");
     scanf("%s",&s[i].name);

     printf("Enter the salary:-");
     scanf("%d",&s[i].salary);
   }

   for (int i = 0; i < 3; i++)
   {
    if (max<=s[i].salary)
    {
        max=s[i].salary;
        index=i;
    }   
   }
    printf("\n\n");
    printf("Information of highest salaried empolye is:-\n");
    printf("id number is:-%d ",s[index].id);
    printf("name  is:-%s ",s[index].name);
    printf("salary is:-%d ",s[index].salary); 
}