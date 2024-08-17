// WAP to ask an operator (+,-,*,/,%) and two operands from the user and perform the calculation using switch case.

#include <stdio.h>

int main()
{
    char operator;
    float a, b;
    printf("Enter an operator (+, -, *, /, %): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);

    switch (operator)
    {
    case '+':
        printf("Result: %.2f\n", a + b);
        break;
    case '-':
        printf("Result: %.2f\n", a - b);
        break;
    case '*':
        printf("Result: %.2f\n", a * b);
        break;
    case '/':
        printf("Result: %.2f\n", a / b);
        break;
    case '%':
        printf("Result: %.2f\n", (int)a % (int)b);
        break;
    default:
        printf("Invalid operator\n");
        break;
    }

    return 0;
}