// WAP to read 3 digit no. & find if it is palindrome or not using loop

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a 3 digit number: ");
    scanf("%d", &n);
    int i = 0;
    int temp = n;
    int rev = 0;
    while (n > 0)
    {
        i = n % 10;
        rev = rev * 10 + i;
        n = n / 10;
    }
    if (temp == rev)
    {
        printf("The number is a palindrome\n");
    }
    else
    {
        printf("The number is not a palindrome\n");
    }
    return 0;
}
