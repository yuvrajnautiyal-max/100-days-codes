/*
 * Question 114 (Logic Enhancers)
 * 
 * Write a program to take a string s as input. The task is to find the length 
 * of the longest substring without repeating characters. Print the length as output.
 */

#include <stdio.h>
#include <string.h>

int main() {
    char s[100005]; // Adjust size based on maximum expected constraint

    // Read the input string (including spaces, stopping at a newline)
    if (scanf("%[^\n]", s) != 1) {
        // Handle empty input string case
        printf("0\n");
        return 0;
    }

    int n = strlen(s);
    
    // Array to store the last seen index of each ASCII character.
    // Initialize all positions to -1 (meaning "not seen yet").
    int last_seen[256];
    for (int i = 0; i < 256; i++) {
        last_seen[i] = -1;
    }

    int max_len = 0;
    int left = 0; // Left boundary of our sliding window

    // 'right' is the right boundary of our sliding window
    for (int right = 0; right < n; right++) {
        unsigned char current_char = s[right];

        // If the character is already in our window, shrink the window 
        // by moving 'left' past the previous occurrence of this character.
        if (last_seen[current_char] >= left) {
            left = last_seen[current_char] + 1;
        }

        // Update the last seen index of the current character
        last_seen[current_char] = right;

        // Calculate the window size and update the maximum length found so far
        int current_len = right - left + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    // Print the final result
    printf("%d\n", max_len);

    return 0;
}
