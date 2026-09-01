// Q45 (Loops without Arrays/Strings)
// Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main()
{
    int n, i;
    float num, den, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        num = 2 * i;
        den = 4 * i - 1;
        sum = sum + num / den;
    }

    printf("Sum of the series = %f\n", sum);

    return 0;
}