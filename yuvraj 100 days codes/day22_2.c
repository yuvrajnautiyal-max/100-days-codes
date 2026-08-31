/* Q44 (Loops without Arrays/Strings)
   Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + ... up to n terms. */

#include <stdio.h>

int main()
{
    int n, i;
    float num, den, term, sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            term = 1;
        }
        else
        {
            num = 2 * i - 1;
            den = 2 * i;
            term = num / den;
        }

        sum = sum + term;
    }

    printf("Sum of series = %f\n", sum);

    return 0;
}