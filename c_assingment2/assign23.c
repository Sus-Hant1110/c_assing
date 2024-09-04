// WAP that reads two numbers x and y from user and calculates the value of x to the power y. (while loop, for loop)

#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    int result = 1;
    for (int i = 0; i < y; i++)
    {
        result = result * x;
    }

    printf("%d to the power %d is %d\n", x, y, result);

    return 0;
}


