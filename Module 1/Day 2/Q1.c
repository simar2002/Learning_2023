#include <stdio.h>

void printExponent(double num)
{
    unsigned long long *ptr = (unsigned long long *)&num;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    // Print exponent in hexadecimal format
    printf("Exponent (Hex): 0x%llX\n", exponent);

    // Print exponent in binary format
    printf("Exponent (Binary): 0b");
    for (int i = 10; i >= 0; i--)
    {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main()
{
    double x = 0.7;
    printExponent(x);

    return 0;
}