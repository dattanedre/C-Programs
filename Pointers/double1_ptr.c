#include<stdio.h>
#include<stdlib.h>
int main()
{
int a=90;
int *ptr=&a;
int**d_ptr=&ptr;
printf("%d\n",ptr);//
 if (ptr==NULL)
    {
        printf("Memory not allocate\n");
    }
    else{
        printf("Memory allocate Successfully\n");
    }

    free(ptr);// dereferance
    printf("%d\n", *d_ptr);

    
}