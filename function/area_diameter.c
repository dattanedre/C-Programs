#include<stdio.h>

//No Return Type No Arguments
void area()
{
    int r=4;
    float area= 3.14 * r * r;
    printf("%f is the area of circle \n", area);
}

//With Return Type With Arguments
int cir(int r)
{
    float c = 2 * 3.14 *r;
    return c;
}

//With Return Type No Arguments
int di()
{
    int r = 4;
    int d= r + r;
    return d;
}

int main()
{
   //1
    area();

    //2
    float m= cir(4);
    printf("%f is the circumferance of circle \n", m);

    //3
    printf("%d is the dimeter of circle \n",di());
}