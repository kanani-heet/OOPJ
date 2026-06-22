#include <stdio.h>

void main()
{
    int n, i;
    int arr[100];
    int even = 0, odd = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Number of Even elements = %d\n", even);
    printf("Number of Odd elements = %d\n", odd);

}
