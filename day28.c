#include <stdio.h>

int main()
{
  //program to print all the prime numbers from 1 to n.
    int n, i, j, count;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)
    {
        count = 0;

        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }

        if(count == 2)
        {
            printf("%d ", i);
        }
    }
//Read and print elements of a one-dimensional array.
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Reading array
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Printing array
    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
