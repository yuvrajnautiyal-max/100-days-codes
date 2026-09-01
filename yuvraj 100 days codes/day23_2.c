// Q46 (Nested Loops without Arrays/Strings)
// Write a program to print the following pattern:
// *****
// *****
// *****
// *****
// *****

#include <stdio.h>

int main()
{
    int i, j, rows, cols;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}