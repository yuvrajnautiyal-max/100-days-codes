/* Q40 (Loops without Arrays/Strings)
   Write a program to find the 1's complement of a binary number and print it. */

#include <stdio.h>

int main()
{
    long int n, rem, comp = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%ld", &n);

    while(n > 0)
    {
        rem = n % 10;

        if(rem == 0)
        {
            comp = comp + 1 * place;
        }
        else
        {
            comp = comp + 0 * place;
        }

        place = place * 10;
        n = n / 10;
    }

    printf("1's complement = %ld\n", comp);

    return 0;
}