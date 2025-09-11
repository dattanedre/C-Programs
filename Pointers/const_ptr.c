#include<stdio.h>
void fun (const int *p)
{
   //*p = 90; // constant cant be change
    int c= *p + 89;
}
int main()
{
    const int i =1100;// constant
    fun(&i);

    printf("%d",i);

}