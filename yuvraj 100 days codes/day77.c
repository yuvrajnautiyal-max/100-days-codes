/*
 * Question 127 (File Handling)
 * 
 * Write a program that reads text from input.txt, converts all lowercase 
 * letters to uppercase, and writes the result to output.txt
 */

#include <stdio.h>
#include <ctype.h> // Required for toupper()

int main() {
    FILE *source_file;
    FILE *dest_file;
    char ch;

    // 1. Open the input file in read mode
    source_file = fopen("input.txt", "r");
    if (source_file == NULL) {
        printf("Error: Could not open 'input.txt'. Make sure the file exists!\n");
        return 1; // Terminate with error code
    }

    // 2. Open (or create) the output file in write mode
    dest_file = fopen("output.txt", "w");
    if (dest_file == NULL) {
        printf("Error: Could not create or open 'output.txt'.\n");
        fclose(source_file); // Close the already opened source file before exiting
        return 1;
    }

    // 3. Read character by character until the End of File (EOF)
    while ((ch = fgetc(source_file)) != EOF) {
        // Convert to uppercase if it's a lowercase letter; otherwise, leave it as is
        char upper_ch = toupper(ch);
        
        // Write the character to output.txt
        fputc(upper_ch, dest_file);
    }

    // 4. Success message
    printf("Success: Content from 'input.txt' converted to uppercase and saved to 'output.txt'.\n");

    // 5. CRITICAL: Always close both files to save changes and free memory
    fclose(source_file);
    fclose(dest_file);

    return 0;
}
