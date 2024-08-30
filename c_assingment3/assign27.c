// WAP to read 3 digit no. & find if it is palindrome or not.

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

    if (digit1 == digit3) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}


