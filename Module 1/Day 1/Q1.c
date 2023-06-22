#include <stdio.h>
int Bigger(int num1, int num2)
{
    int larg;
    larg = num1 > num2 ? num1 : num2;
    return larg;
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
