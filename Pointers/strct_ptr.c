#include<stdio.h>
#include<string.h>

struct student{
    int roll;
    char name[100];// take 100

}s1;

int main()
{
    struct student s2;// var create
    struct student *ptr =&s1;

    ptr -> roll = 100;
    strcpy(ptr -> name,"techanoscripts");
    printf("Roll number of student is:- %d\n", ptr -> roll );
     printf("Name of student is:- %s", ptr -> name );
}