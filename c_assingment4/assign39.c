// WAP to multiply two matrices entered by the user and store it in the third matrix.
// Ask for rows and columns from the user.
// Also check whether matrix multiplication is possible or not

#include <stdio.h>

int main()
{
    int row1, col1, row2, col2;

    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &row1, &col1);

    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &row2, &col2);

    if (col1 != row2)
    {
        printf("Matrix multiplication is not possible.\n");
    }
    else
    {
        int mat1[row1][col1], mat2[row2][col2], mat3[row1][col2];

        printf("Enter the elements of the first matrix:\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }   

        printf("Enter the elements of the second matrix:\n");
        for (int i = 0; i < row2; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                mat3[i][j] = 0;
                for (int k = 0; k < col1; k++)
                {
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        printf("The product of the two matrices is:\n");
        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                printf("%d ", mat3[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}