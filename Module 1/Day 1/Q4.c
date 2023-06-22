#include <stdio.h>

int main()
{
    float operand1, operand2;
    char operator;
    float result;
    printf("Enter Number 1: ");
    scanf("%f", &operand1);
    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter Number 2: ");
    scanf("%f", &operand2);
    switch (operator)
    {
    case '+':
        result = operand1 + operand2;
        break;
    case '-':
        result = operand1 - operand2;
        break;
    case '*':
        result = operand1 * operand2;
        break;
    case '/':
        if (operand2 != 0)
        {
            result = operand1 / operand2;
        }
        else
        {
            printf("Error: Division by zero  not allowed.\n");
            return 1;
        }
        break;
    default:
        printf(" Invalid operator.\n");
        return 1;
    }
    printf("Result: %.2f\n", result);

    return 0;
}