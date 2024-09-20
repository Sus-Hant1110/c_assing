//  WAP to add two 3x3 matrices and store the result in the third matrix and
//  display the values of the third matrix.

#include <stdio.h>

int main()
{

    int a[3][3], b[3][3], c[3][3];

    printf("Enter elements of first matrix: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }   

    printf("Enter elements of second matrix: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {       
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Sum of two matrices: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}