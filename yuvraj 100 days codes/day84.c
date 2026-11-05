/*
 * Question 134 (Enum)
 * 
 * Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
 */

#include <stdio.h>

// 1. Define the enum for Status Codes.
// This is a common way to manage program state and API call outcomes in C.
enum StatusCode {
    SUCCESS,  // Associated with integer 0
    FAILURE,  // Associated with integer 1
    TIMEOUT   // Associated with integer 2
};

int main() {
    // 2. Declare an enum variable representing a network or system status
    enum StatusCode current_status = SUCCESS;

    printf("--- System Status Monitor ---\n");

    // 3. Print messages accordingly using a switch-case block
    switch (current_status) {
        case SUCCESS:
            printf("Status Code %d: Operation completed successfully!\n", SUCCESS);
            break;
            
        case FAILURE:
            printf("Status Code %d: An error occurred during execution.\n", FAILURE);
            break;
            
        case TIMEOUT:
            printf("Status Code %d: Connection timed out. Please try again.\n", TIMEOUT);
            break;
            
        default:
            printf("Unknown Status Code.\n");
    }

    return 0;
}
