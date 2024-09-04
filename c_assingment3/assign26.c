// WAP to read 3 digit no. & find sum of square of digits.

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    int digit1 = num / 100;
    int digit2 = (num / 10) % 10;
    int digit3 = num % 10;

    printf("First digit: %d\n", digit1);
    printf("Second digit: %d\n", digit2);
    printf("Third digit: %d\n", digit3);

    int sum = pow(digit1, 2) + pow(digit2, 2) + pow(digit3, 2);
    printf("Sum of squares of digits: %d\n", sum);

    return 0;
}
