// WAP to find the largest number among the three numbers entered by the user. Make use of nested if else statement.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("Largest number: %d\n", a);
        }
        else
        {
            printf("Largest number: %d\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("Largest number: %d\n", b);
        }
        else
        {
            printf("Largest number: %d\n", c);
        }
    }

    return 0;
}