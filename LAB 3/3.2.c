#include <stdio.h>
void main()
{
    int matrix[3][3];
    int i, j;
    int positive = 0, negative = 0, zero = 0;

    printf("Enter 9 elements of 3x3 matrix:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(matrix[i][j] > 0)
                positive++;
            else if(matrix[i][j] < 0)
                negative++;
            else
                zero++;
        }
    }

    printf("Positive elements = %d\n", positive);
    printf("Negative elements = %d\n", negative);
    printf("Zero elements = %d\n", zero);

}
