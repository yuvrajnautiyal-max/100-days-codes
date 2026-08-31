/* Q43 (Loops without Arrays/Strings)
   Write a program to check if a number is a strong number. */

#include <stdio.h>

int main()
{
    int n, temp, rem, fact, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0)
    {
        rem = temp % 10;

        fact = 1;
        for (int i = 1; i <= rem; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        temp = temp / 10;
    }

    if (sum == n)
        printf("%d is a strong number\n", n);
    else
        printf("%d is not a strong number\n", n);

    return 0;
}