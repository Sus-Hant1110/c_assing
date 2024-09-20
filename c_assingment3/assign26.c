// WAP to read 3 digit no. & find sum of square of digits using loop
//
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i = 0, sum = 0;
    printf("Enter a 3 digit number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        i = n % 10;
        sum = sum + pow(i,2);
        n = n / 10;
    }
    printf("Sum of square of each digit: %d\n", sum);
    return 0;
}