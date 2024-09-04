// WAP to read four digit no. & print the sum of each digit using loop

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a 4 digit number: ");
    scanf("%d", &n);
    int i = 0;
    int sum = 0;
    while (n > 0)
    {
        i = n % 10;
        sum = sum + i;
        n = n / 10;
    }
    printf("Sum of each digit: %d\n", sum);
    return 0;
}