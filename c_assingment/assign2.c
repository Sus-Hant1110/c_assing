// Write a program in C to add, subtract, multiply and divide 2 numbers. Take input from the user

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum: %d\n", a + b);

    printf("Difference: %d\n", a - b);

    printf("Product: %d\n", a * b);

    printf("Quotient: %d\n", a / b);

    return 0;
}

// Rewrite the program no 1 to directly display the result in the printf statement without storing the result in the variable.

// #include <stdio.h>

// int main()
// {
//     printf("Sum: %d\n", 5 + 5);

//     printf("Difference: %d\n", 5 - 5);

//     printf("Product: %d\n", 5 * 5);

//     printf("Quotient: %d\n", 5 / 5);

//     return 0;

// }