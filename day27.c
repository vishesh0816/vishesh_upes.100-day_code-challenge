#include <stdio.h>

int main()
{
  //program to print a pattern
    int i, j;

    // Upper part
    for(i = 1; i <= 9; i = i + 2)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // Lower part
    for(i = 7; i >= 1; i = i - 2)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
//program to print a pattern
    int i, j;

    // Upper part
    for(i = 1; i <= 4; i++)
    {
        // Print spaces
        for(j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Lower part
    for(i = 3; i >= 1; i--)
    {
        // Print spaces
        for(j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
return 0;
}
