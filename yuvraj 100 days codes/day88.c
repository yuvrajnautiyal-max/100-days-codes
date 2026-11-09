/*
 * Question 138 (Enum)
 * 
 * Print all enum names and integer values using a loop.
 */

#include <stdio.h>

// 1. Define the enum for colors
// We explicitly define a helper constant 'COLOR_COUNT' at the end 
// to automatically track how many elements are in our enum.
enum Color {
    RED = 10,   // Explicitly start our values at 10
    GREEN,      // Assigned 11
    BLUE,       // Assigned 12
    YELLOW,     // Assigned 13
    COLOR_COUNT // Automatically becomes 14 (total count of elements when starting at 10)
};

int main() {
    // 2. Create a parallel array of strings matching the enum names.
    // Index 0 matches RED, index 1 matches GREEN, etc.
    const char *color_names[] = {
        "RED",
        "GREEN",
        "BLUE",
        "YELLOW"
    };

    printf("--- Enum Directory (Looping) ---\n");
    printf("%-10s | %-10s\n", "Enum Name", "Integer Value");
    printf("---------------------------\n");

    // 3. Use a loop to print names and values.
    // We iterate from RED (10) up to (but not including) COLOR_COUNT (14).
    for (enum Color c = RED; c < COLOR_COUNT; c++) {
        // Calculate the corresponding index for our string array (e.g., 10 - 10 = index 0)
        int string_index = c - RED; 
        
        printf("%-10s | %-10d\n", color_names[string_index], c);
    }

    return 0;
}
