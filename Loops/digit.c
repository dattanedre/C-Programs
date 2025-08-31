#include<stdio.h>
int main(){
    int i=1;
    int count =0;
    long long int num=1234891249876543271;

    while(num!=0)
    {
        num=num/10;
        count++;
        i++;
    }
    printf("%d\n",count);


}