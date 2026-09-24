// Q91 (Strings)
// Remove all vowels from a string.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    char result[1000]; // to store string without vowels
    int i, j = 0;
    char ch;

    scanf("%[^\n]", str); // reads string including spaces until newline

    for (i = 0; str[i] != '\0'; i++) {
        ch = str[i];

        // convert to lowercase for uniform checking
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            result[j] = str[i]; // keep original character (preserves case)
            j++;
        }
    }

    result[j] = '\0'; // null-terminate the result string

    printf("%s\n", result);

    return 0;
}