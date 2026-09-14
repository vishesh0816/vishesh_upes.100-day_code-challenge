#include <stdio.h>

int main()
//program to swap the first and last digit of a number.
{
    int num, first, last, temp, power = 1, result;

    scanf("%d", &num);

    temp = num;
    last = num % 10;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    first = temp;

    result = num - first * power - last;
    result = result + last * power + first;

    printf("%d", result);
//program to check if a number is a perfect number
    int num, i, sum = 0;

    scanf("%d", &num);

    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
        printf("Perfect number");
    else
        printf("Not perfect number");

    return 0;
}
