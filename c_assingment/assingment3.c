// WAP to find the largest number among the three numbers entered by the user.Use ternary operator.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int largest = a > b ? (a > c ? a : c) : (b > c ? b : c);

    printf("Largest number is: %d\n", largest);

    return 0;
}