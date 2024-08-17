// WAP to ask an operator (+,-,*,/,%) and two operands from the user and perform the calculation using if else if.

#include <stdio.h>

int main()
{
    char operator;
    float a, b;
    printf("Enter an operator (+, -, *, /, %): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%f %f", &a, &b);

    if (operator == '+')
    {
        printf("Result: %.2f\n", a + b);
    }
    else if (operator == '-')
    {
        printf("Result: %.2f\n", a - b);
    }
    else if (operator == '*')
    {
        printf("Result: %.2f\n", a * b);
    }
    else if (operator == '/')
    {
        printf("Result: %.2f\n", a / b);
    }
    else if (operator == '%')
    {
        printf("Result: %.2f\n", (int)a % (int)b);
    }
    else
    {
        printf("Invalid operator\n");
    }

    return 0;
}