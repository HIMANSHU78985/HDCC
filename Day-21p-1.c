
#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, first, last, digits, power, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // Find the last digit
    last = n % 10;

    // Find the number of digits
    digits = 0;
    while (temp != 0)
    {
        digits++;
        temp = temp / 10;
    }

    // Find the first digit
    power = (int)pow(10, digits - 1);
    first = n / power;

    // Remove first and last digits
    middle = n % power;
    middle = middle / 10;

    // Swap first and last digits
    result = last * power + middle * 10 + first;

    printf("%d", result);

    return 0;
}

