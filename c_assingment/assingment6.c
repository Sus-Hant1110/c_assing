// Wap to ask user for number and perfom operation with respect to number using switch case

#include <stdio.h>

int main()
{
    int a, b, result;
    char operation;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the operation: ");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '1':
        result = a + b;
        printf("The sum  is %d\n", result);
        break;

    case '2':
        result = a - b;
        printf("The difference  is %d\n", result);
        break;

    case '3':

        result = a * b;
        printf("The product  is %d\n", result);
        break;

    case '4':
        result = a / b;
        printf("The division  is %d\n", result);
        break;

    default:
        printf("Invalid operation\n");
        break;
    }

    return 0;
}