// WAP that reads a number (n) from the user and calculates the factorial of that number.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int factorial = 1;
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d: %d\n", num, factorial);

    return 0;
}