#include <stdio.h>

int main()
//program to find the product of odd digits of a number.
{
    int n, digit, product = 1;

    scanf("%d", &n);

    while (n > 0)
    {
        digit = n % 10;

        if (digit % 2 != 0)
        {
            product = product * digit;
        }

        n = n / 10;
    }

    printf("%d", product);
//program to find the 1’s complement of a binary number and print it.
    char binary[100];
    int i;

    scanf("%s", binary);

    for (i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
    }

    printf("%s", binary);

    return 0;
}
