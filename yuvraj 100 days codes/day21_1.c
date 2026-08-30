// Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, firstDigit, lastDigit, digits;
    int result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // count number of digits
    digits = 0;
    while (temp != 0) {
        temp = temp / 10;
        digits++;
    }

    // find last digit
    lastDigit = num % 10;

    // find first digit
    temp = num;
    for (int i = 1; i < digits; i++) {
        temp = temp / 10;
    }
    firstDigit = temp;

    // remove first and last digit from original number and put last and first in their place
    result = num - (firstDigit * (int)pow(10, digits - 1)) - lastDigit;
    result = result + (lastDigit * (int)pow(10, digits - 1)) + firstDigit;

    printf("Number after swapping first and last digit: %d\n", result);

    return 0;
}