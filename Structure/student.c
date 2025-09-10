#include<stdio.h>
struct car{
    int id;
    char name[10];
    int cc;
}s[5];

int main()
{
    for (int i = 0; i <5 ; i++)
    {
        printf("Enter car id:-");
        scanf("%d",&s[i].id);

         printf("Enter car name:-");
        scanf("%s",&s[i].name);

         printf("Enter car cc:-");
        scanf("%d",&s[i].cc);
        printf("\n\n");
    }

    int id;
    printf("\nEnter id:-\n");
    scanf("%d",&id);

    for (int i = 0; i < 5; i++)
    { 
        if (id==s[i].id)
    {
       printf("Car id is:- %d\n", s[i].id);
         printf("Car name is:- %s\n", s[i].name);
          printf("Car cc is:- %d\n", s[i].cc);
    } 
       printf("\n");
    }
    
    
}