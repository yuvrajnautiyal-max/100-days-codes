/*
 * Question 128 (File Handling)
 * 
 * Write a program that reads a text file and counts how many vowels and consonants 
 * are in the file. Ignore digits and special characters.
 */

#include <stdio.h>
#include <ctype.h> // Required for tolower() and isalpha()

int main() {
    FILE *file_ptr;
    char filename[100];
    char ch;
    int vowels_count = 0;
    int consonants_count = 0;

    // 1. Get the filename from the user
    printf("Enter the filename to analyze: ");
    if (scanf("%99s", filename) != 1) {
        printf("Error reading filename.\n");
        return 1;
    }

    // 2. Open the file in read mode
    file_ptr = fopen(filename, "r");
    if (file_ptr == NULL) {
        printf("Error: Could not open file '%s'. Make sure it exists!\n", filename);
        return 1;
    }

    // 3. Read the file character by character until End of File (EOF)
    while ((ch = fgetc(file_ptr)) != EOF) {
        
        // Rule: Only process alphabetic characters (ignore numbers, spaces, symbols)
        if (isalpha(ch)) {
            // Convert to lowercase to make checking much easier
            char lower_ch = tolower(ch);

            // Check if the character is a vowel
            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || 
                lower_ch == 'o' || lower_ch == 'u') {
                vowels_count++;
            } 
            // If it is alphabetic but not a vowel, it must be a consonant
            else {
                consonants_count++;
            }
        }
    }

    // 4. Close the file pointer to free up resources
    fclose(file_ptr);

    // 5. Display the counts
    printf("\n--- Character Analysis Results ---\n");
    printf("Vowels:     %d\n", vowels_count);
    printf("Consonants: %d\n", consonants_count);
    printf("----------------------------------\n");

    return 0;
}
