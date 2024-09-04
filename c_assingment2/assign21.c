// WAP which displays the average & sum of nth no input by the user.

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum+i;
    }

    printf("Sum: %d\n", sum);
    printf("Average: %d\n", sum / n);

    return 0;
}