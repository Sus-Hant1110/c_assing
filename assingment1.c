#include <stdio.h>

int main()
{
    float r1, q1, r2, q2;
    float total1, total2, average;

    printf("Enter  rate and quantity for first item: ");
    scanf("%f %f", &r1, &q1);

    printf("Enter  rate and quantity for second item: ");
    scanf("%f %f", &r2, &q2);

    total1 = r1 * q1;
    total2 = r2 * q2;

    average = (total1 + total2) / 2;

    printf("The average value is: %.2f\n", average);

    return 0;
}
