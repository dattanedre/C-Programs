#include<stdio.h>
struct car{
    int id;
    char name[10];
    int cc;
}s;

int main()
{
    for (int i = 0; i <1 ; i++)
    {
        printf("Enter car id:-");
        scanf("%d",&s.id);

         printf("Enter car name:-");
        scanf("%s",&s.name);

         printf("Enter car cc:-");
        scanf("%d",&s.cc);
    }
    printf("Car id is:-%d\n",s.id);
    printf("Car name is:-%s\n",s.name);
    printf("Car cc is:-%d\n",s.cc);
    
}