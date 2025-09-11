#include<stdio.h>
int main()
{
   //void Pointer
    int a=99;
    void *ptr =&a;
    printf("%d\n", *(int*)ptr);// you have to type-cast thr void
    

}