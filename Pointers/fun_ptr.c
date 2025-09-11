#include<stdio.h>
void add_fun(int a, int b)
{
    int c= a+b;
    printf("%d is the additon",c);
}
int main()
{

    int a=10;
    int b=99;

    int(*fun_ptr)(int, int);// syntax for the function pointer
    fun_ptr =add_fun;//in pointer store the address of fun

    add_fun(a,b);//fun call


}