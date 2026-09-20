// Q84 (Strings)
// Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    int i;

    scanf("%[^\n]", str); // reads string including spaces until newline

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // convert lowercase to uppercase
        }
    }

    printf("%s\n", str);

    return 0;
}