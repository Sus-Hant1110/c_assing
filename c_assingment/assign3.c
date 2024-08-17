// Write a program in C to ask for 2 numbers and display their sum. (Make use of all the basic data types)
// int, unsigned int, short int, long int, float, double, long double.

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);

    unsigned int c, d;
    printf("Enter two numbers: ");
    scanf("%u %u", &c, &d);
    printf("Sum: %u\n", c + d);

    short int e, f;
    printf("Enter two numbers: ");
    scanf("%hd %hd", &e, &f);
    printf("Sum: %hd\n", e + f);

    long int g, h;
    printf("Enter two numbers: ");
    scanf("%ld %ld", &g, &h);
    printf("Sum: %ld\n", g + h);

    float i, j;
    printf("Enter two numbers: ");
    scanf("%f %f", &i, &j);
    printf("Sum: %f\n", i + j);

    double k, l;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &k, &l);
    printf("Sum: %lf\n", k + l);

    long double m, n;
    printf("Enter two numbers: ");
    scanf("%Lf %Lf", &m, &n);
    printf("Sum: %Lf\n", m + n);

    return 0;
}
