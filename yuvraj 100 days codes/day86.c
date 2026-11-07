/*
 * Question 136 (Enum)
 * 
 * Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform 
 * operations using switch.
 */

#include <stdio.h>

// 1. Define the enum for Menu Options.
// We explicitly map them to 1, 2, and 3 to align with a user-friendly menu list.
enum MenuChoice {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice;
    double num1, num2, result;

    // 2. Display the Interactive Menu
    printf("--- Enum Menu Calculator ---\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("Enter your choice (1-3): ");
    
    // Read and validate the menu choice
    if (scanf("%d", &choice) != 1 || choice < 1 || choice > 3) {
        printf("Error: Invalid menu choice!\n");
        return 1;
    }

    // Convert the integer choice into our custom MenuChoice enum type
    enum MenuChoice selected_operation = (enum MenuChoice)choice;

    // Read the numbers for the calculation
    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) return 1;

    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) return 1;

    // 3. Perform the arithmetic operation using a switch block
    switch (selected_operation) {
        case ADD:
            result = num1 + num2;
            printf("\nResult: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;

        case SUBTRACT:
            result = num1 - num2;
            printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;

        case MULTIPLY:
            result = num1 * num2;
            printf("\nResult: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;

        default:
            printf("\nError: Unexpected selection state.\n");
    }

    return 0;
}
