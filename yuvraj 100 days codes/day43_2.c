// Q86 (Strings)
// Check if a string is a palindrome.

#include <stdio.h>

int main() {
    char str[1000]; // assuming max size 1000
    int len = 0, i, start, end, isPalindrome = 1;

    scanf("%[^\n]", str); // reads string including spaces until newline

    // find length of string
    while (str[len] != '\0') {
        len++;
    }

    start = 0;
    end = len - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}