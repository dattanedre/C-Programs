#include<stdio.h>
#include<string.h>
struct student{
    
    int roll; 
    char name[10];
    int num;
} s1, s2; // variable of structure

int main()
{
   struct student s3 ; // declaration in main
    struct student s4 ={12, "techno", 99}; // init the struct
    s2.roll =34;
    s2.num=88;
   // s2.name="Datta";/// Not Valid
    strcpy(s2.name, "pune");

    printf("roll of s4 is :-%d\n", s4.roll);
    printf("roll of s4 is :-%s\n", s4.name);
    printf("roll of s4 is :-%d\n", s4.num);

    printf("roll of s3 is :-%d\n", s2.roll);
    printf("roll of s3 is :-%s\n", s2.name);
    printf("roll of s3 is :-%d\n", s2.num);
 
    
}