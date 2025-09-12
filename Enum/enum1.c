#include<stdio.h>
enum level
{
    low=25,
    medium,
    high,
};
int main()
{
    //low=99, //// constant not change
    printf("%d ",low);
    printf("%d ",medium);
    printf("%d ",high);
}