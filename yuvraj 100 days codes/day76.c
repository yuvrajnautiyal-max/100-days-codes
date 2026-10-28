/*
 * Question 126 (File Handling)
 * 
 * Ask the user for a filename. Check if it exists by trying to open it in read mode. 
 * If the file pointer is NULL, print an error message; otherwise, read and display its content.
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *file_ptr;
    char ch;

    // 1. Prompt the user to enter the filename
    printf("Enter the filename: ");
    if (scanf("%99s", filename) != 1) {
        printf("Error reading filename.\n");
        return 1;
    }

    // 2. Try to open the file in read-only mode ("r")
    file_ptr = fopen(filename, "r");

    // 3. Check if the file pointer is NULL (file does not exist or cannot be opened)
    if (file_ptr == NULL) {
        printf("Error: The file '%s' does not exist or cannot be opened.\n", filename);
        return 1; // Exit the program with an error code
    }

    // 4. If the file pointer is not NULL, the file exists! 
    printf("\n--- File Content of '%s' ---\n", filename);

    // Read the file character by character until we reach the End of File (EOF)
    while ((ch = fgetc(file_ptr)) != EOF) {
        putchar(ch); // Print each character to the console
    }
    printf("\n-----------------------------\n");

    // 5. CRITICAL: Always close the file pointer when you are done to free up system memory
    fclose(file_ptr);

    return 0;
}
