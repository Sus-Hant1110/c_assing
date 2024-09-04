// WAP to read four digit no. & print the sum of each digit.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int digit1 = num / 1000;
    int digit2 = (num / 100) % 10;
    int digit3 = (num / 10) % 10;
    int digit4 = num % 10;

    printf("First digit: %d\n", digit1);
    printf("Second digit: %d\n", digit2);
    printf("Third digit: %d\n", digit3);
    printf("Fourth digit: %d\n", digit4);

    printf("Sum of digits: %d\n", digit1 + digit2 + digit3 + digit4);

    return 0;
}

