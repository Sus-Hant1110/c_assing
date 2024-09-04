// Write a program that prompts the user to enter two values and then displays a menu with the following options:
// 1.Add
// 2.Subtract
// 3.Multiply
// 4.Divide
// 5.Remainder
// Using a switch -case statement,perform the operation selected by the user and display the result.

#include <stdio.h>

int main()
{
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Remainder\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Sum: %d\n", a + b);
        break;
    case 2:
        printf("Difference: %d\n", a - b);
        break;
    case 3:
        printf("Product: %d\n", a * b);
        break;
    case 4:
        printf("Quotient: %d\n", a / b);
        break;
    case 5:
        printf("Remainder: %d\n", a % b);
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}