#include <stdio.h>

int main()
{
  //program to check if a number is a strong number.
    int n, temp, digit, sum = 0;
    int fact, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;

        fact = 1;

        for (i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
        printf("Strong number");
    else
        printf("Not strong number");
  //program to find the sum of the series

    int n, i;
    float sum = 1.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        sum = sum + (float)(2 * i - 1) / (2 * i);
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}
