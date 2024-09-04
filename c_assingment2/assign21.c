// WAP which displays the average & sum of nth no input by the user.

#include <stdio.h>

int main()
{
    int a ,b,n=0;
    printf("Enter a start number: ");
    scanf("%d", &a);
    printf("Enter a end number: ");
    scanf("%d", &b);

    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum = sum+i;
        n++;
    }
   

    printf("Sum: %d\n", sum);
    printf("Average: %d\n", sum /n);

    return 0;
}