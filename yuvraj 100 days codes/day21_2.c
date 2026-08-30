// Q42
// Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int num, i, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = 0;

    // add all divisors of num except num itself
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == num && num != 0) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }

    return 0;
}