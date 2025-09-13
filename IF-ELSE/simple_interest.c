#include <stdio.h>

int main() {
    float P, T, R, SI;

    // Input values from user
    printf("Enter Principal/Amount (P): ");
    scanf("%f", &P);

    printf("Enter Time (T in years): ");
    scanf("%f", &T);

    printf("Enter Rate (R in %%): ");
    scanf("%f", &R);

    // Calculate Simple Interest
    SI = (P * T * R) / 100;

    // Output result
    printf("Simple Interest = %.2f\n", SI);

    return 0;
}
