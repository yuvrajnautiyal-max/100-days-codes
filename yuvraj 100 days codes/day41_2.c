// Q82 (Strings)
// Print each character of a string on a new line.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    int i;

    scanf("%[^\n]", str); // reads string including spaces until newline

    for (i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}