// WAP to input the radius of a circle, and calculate the area and circumference of the circle.

#include <stdio.h>

int main()
{
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = 3.14 * radius * radius;
    float circumference = 2 * 3.14 * radius;

    printf("Area of circle is: %2f\n", area);
    printf("Circumference of circle is: %2f\n", circumference);

    return 0;
}