// WAP to read a no. & find out if it is Armstrong no. or not.

#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int num_digits = 0;
    int temp = num;
    while (temp > 0) {
        temp /= 10;
        num_digits++;
    }

    temp = num;
    int sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, num_digits);
        temp /= 10;
    }

    if (sum == num) {
        printf("The number is an Armstrong number.\n");
    } else {
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
}