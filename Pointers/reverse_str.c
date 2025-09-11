#include<stdio.h>
#include<string.h>
int main()
{
    // Reverse sting using pointer
    
    char *str3 = "technoscripts";
    int i;
    char *start = str3;
    char *end = str3 + strlen(str3)-1;

    while (end>= start)
    {
      printf("%c", *(end));
      end--;
    }
    
}