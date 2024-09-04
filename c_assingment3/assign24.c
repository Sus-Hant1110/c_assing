// WAP to read a 3 digit no. and print each digit separately.

#include <stdio.h>
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

    return 0;
}

