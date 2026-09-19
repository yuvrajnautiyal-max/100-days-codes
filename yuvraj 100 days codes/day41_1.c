// Q81 (Strings)
// Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    int count = 0;
    int i;

    scanf("%[^\n]", str); // reads string including spaces until newline

    for (i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("%d\n", count);

    return 0;
}