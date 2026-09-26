// Q96 (Strings)
// Reverse each word in a sentence without changing the word order.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    int start, end, i;
    char temp;

    scanf("%[^\n]", str); // reads string including spaces until newline

    start = 0;

    for (i = 0; ; i++) {
        // when we hit a space or end of string, we've found a word boundary
        if (str[i] == ' ' || str[i] == '\0') {
            end = i - 1;

            // reverse the word from start to end
            while (start < end) {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }

            start = i + 1; // move start to beginning of next word

            if (str[i] == '\0') {
                break; // reached end of string
            }
        }
    }

    printf("%s\n", str);

    return 0;
}