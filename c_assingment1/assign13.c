//  Rewrite the program no. 13 to display menu as mentioned below:
// a.Add
// b.Subtract 
// c.Multiply
// d.Divide
// e.Remainder

#include <stdio.h>

int main()
{
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("a. Add\n");
    printf("b. Subtract\n");
    printf("c. Multiply\n");
    printf("d. Divide\n");
    printf("e. Remainder\n");
    printf("Enter your choice: ");
    scanf(" %c", &choice);

    switch (choice)
    {
    case 'a':
        printf("Sum: %d\n", a + b);
        break;
    case 'b':
        printf("Difference: %d\n", a - b);
        break;
    case 'c':
        printf("Product: %d\n", a * b);
        break;
    case 'd':
        printf("Quotient: %d\n", a / b);
        break;
    case 'e':
        printf("Remainder: %d\n", a % b);
        break;
    default:
        printf("Invalid choice\n");
    }

    return 0;
}