// Wap to print odd number from 1 to 100 using for modulus operator.

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 != 0)// if i is not divisible by 2, then it is odd
        {
            printf("%d\t", i);
        }
    }

    return 0;
}
