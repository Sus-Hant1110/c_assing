// WAP to find the largest number among the three numbers entered by the user. Make use of if else if along with logical operator.

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("Largest number: %d\n", a);
    }
    else if ( b > c)
    {
        printf("Largest number: %d\n", b);
    }
    else
    {
        printf("Largest number: %d\n", c);
    }

    return 0;
}