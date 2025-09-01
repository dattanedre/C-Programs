#include <stdio.h>

int main() {
    int num, rev;

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    rev = (num % 10) * 100 + ((num / 10) % 10) * 10 + (num / 100);

    printf("Reversed number: %d\n", rev);

    return 0;
}
