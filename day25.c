#include <stdio.h>

int main()
{
  //program to print a pattern
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        for(j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }
//program to print a pattern
    int i, j;

    for(i = 5; i >= 1; i--)
    {
        // Print spaces
        for(j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
