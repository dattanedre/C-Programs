#include<stdio.h>
struct car{
    int id;
    char name[10];
    int price;
}s[5];

int main()
{
    for (int i = 0; i <5 ; i++)
    {
        printf("Enter book id:-");
        scanf("%d",&s[i].id);

         printf("Enter book name:-");
        scanf("%s",&s[i].name);

         printf("Enter book price:-");
        scanf("%d",&s[i].price);
        printf("\n\n");
    }

    int id;
    printf("\nEnter id:-\n");
    scanf("%d",&id);

    for (int i = 0; i < 5; i++)
    { 
        if (id==s[i].id)
    {
       printf("book id is:- %d\n", s[i].id);
         printf("book name is:- %s\n", s[i].name);
          printf("book price is:- %d\n", s[i].price);
    } 
       printf("\n");
    }
    
    
}