// WAP to input the radius of a circle, and calculate the area and circumference of the circle.

#include <stdio.h>

int main()
{
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Area of the circle: %.2f\n", 3.14 * radius * radius);
    printf("Circumference of the circle: %.2f\n", 2 * 3.14 * radius);

    return 0;
}