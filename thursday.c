#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 3, d = 4;

    int first = a * b / c;
    int second = a * b % c + 1;
    int third = ++a * b - c--;
    int fourth = 7 - -b * ++d;
    int fifth= c--;

    printf("%d\n", first);
    printf("%d\n", second);
    printf("%d\n", third);
    printf("%d\n", fourth);
    printf("%d\n",fifth);

    return 0;
}