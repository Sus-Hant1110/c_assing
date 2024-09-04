// WAP to read 3 digit no. & find sum of square of digits using loop
//
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a 3 digit number: ");
    scanf("%d", &n);
    int i = 0;
    int sum = 0;
    while (n > 0)
    {
        i = n % 10;
        sum = sum + i * i;
        n = n / 10;
    }
    printf("Sum of square of each digit: %d\n", sum);
    return 0;
}