#include<stdio.h>
#include<string.h>

   // Structure pointer using function

struct student{
    int roll;
    char name[100];// take 100

}s1;

void fun (struct student *ptr)
{
    printf("Info using function \n");
     printf("Roll number of student is:- %d\n", ptr -> roll );
     printf("Name of student is:- %s", ptr -> name );

}

int main()
{
    struct student s2;// var create
    struct student *ptr =&s1;

    ptr -> roll = 100;
    strcpy(ptr -> name,"techanoscripts");
    fun(&s1);
   
}