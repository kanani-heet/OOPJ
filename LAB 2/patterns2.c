// WAP to create following patterns. 54321 5432 543 54 5
#include <stdio.h>
void main()
{
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = 5; j >= 6 - i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

