#include <stdio.h>

int main()
{
  //program to print a pattern
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        // Print spaces
        for(j = 1; j < i; j++)
        {
            printf(" ");
        }

        // Print numbers
        for(j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
//program to print a pattern
    int i, j;

    for(i = 1; i <= 5; i += 2)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    for(i = 1; i <= 3; i++)
    {
        printf("*\n");
    }

    printf("\n*");

    return 0;
}
