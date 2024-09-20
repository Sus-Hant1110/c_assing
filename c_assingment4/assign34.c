// Write a program to find the HCF of two numbers entered by the user.

#include <stdio.h>

int main()
{
    int a, b, hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d", a, b, hcf);

    return 0;
}