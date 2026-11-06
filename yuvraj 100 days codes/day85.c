/*
 * Question 135 (Enum)
 * 
 * Assign explicit values starting from 10 and print them.
 */

#include <stdio.h>

// 1. Define the enum with explicit values.
// We set the first constant to 10. The compiler automatically 
// increments subsequent constants by 1 (11, 12, 13...).
enum DepartmentCode {
    COMP_SCI = 10,  // Explicitly set to 10
    ELECTRICAL,     // Automatically assigned 11
    MECHANICAL,     // Automatically assigned 12
    CIVIL           // Automatically assigned 13
};

int main() {
    printf("--- Department Code Directory ---\n");

    // 2. Print the explicit values assigned to the enum constants
    printf("Computer Science ID: %d\n", COMP_SCI);
    printf("Electrical Eng. ID:  %d\n", ELECTRICAL);
    printf("Mechanical Eng. ID:  %d\n", MECHANICAL);
    printf("Civil Eng. ID:       %d\n", CIVIL);

    return 0;
}
