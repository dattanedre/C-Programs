#include<stdio.h>
int main()
{
   //wild pointer only declare the pointer without init and referance it
    void *ptr;// declre kiya hai init nhi or de_referance 
    printf("%d", (int*)ptr);//garbage
}