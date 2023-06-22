#include <stdio.h>
int Bigger(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}
int main()
{
    // Variable declaration
    int num1, num2, larg;
    printf("Enter two number\n");
    scanf("%d %d", &num1, &num2);
    larg = Bigger(num1, num2);
    printf("largest number is : %d", larg);
    return 0;
}