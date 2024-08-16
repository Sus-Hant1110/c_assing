// Wap to ask user for number and perfom operation with respect to number using switch case

#include <stdio.h>

int main()
{
    int a, b, result;
    char choice;
    

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("a. Add\nb. Sub\nc. Mul\nd. Div\nEnter your choice: ");
    scanf(" %c", &choice);

    switch (choice)
    {
    case 'a':
        result = a + b;
        printf("The sum  is %d\n", result);
        break;

    case 'b':
        result = a - b;
        printf("The difference  is %d\n", result);
        break;

    case 'c':

        result = a * b;
        printf("The product  is %d\n", result);
        break;

    case 'd':
        result = a / b;
        printf("The division  is %d\n", result);
        break;

    default:
        printf("Invalid choice\n");
        break;
    }

    return 0;
}