// Q85 (Strings)
// Reverse a string.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    int len = 0, i, start, end;
    char temp;

    scanf("%[^\n]", str); // reads string including spaces until newline

    // find length of string
    while (str[len] != '\0') {
        len++;
    }

    start = 0;
    end = len - 1;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("%s\n", str);

    return 0;
}