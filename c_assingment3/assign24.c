// WAP to read a 3 digit no. and print each digit separately using loop

#include <stdio.h>
int main() {
    int n;
    printf("Enter a 3 digit number: ");
    scanf("%d", &n);
    int i = 0;
    while (n > 0) {
        i = n % 10;
        printf("%d\n", i);
        n = n / 10;
    }
    return 0;
}

