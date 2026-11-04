/*
 * Question 133 (Enum)
 * 
 * Create an enum for months and print how many days each month has.
 */

#include <stdio.h>

// 1. Define the enum for Months.
// We explicitly set JANUARY = 1 so the months map naturally to 1-12.
enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

// Function to print the number of days based on the enum Month
void printDaysInMonth(enum Month m) {
    switch (m) {
        case JANUARY:
            printf("January has 31 days.\n");
            break;
        case FEBRUARY:
            // Standard non-leap year assumption. 
            // In dynamic applications, you could add a leap-year check!
            printf("February has 28 days (29 in a leap year).\n");
            break;
        case MARCH:
            printf("March has 31 days.\n");
            break;
        case APRIL:
            printf("April has 30 days.\n");
            break;
        case MAY:
            printf("May has 31 days.\n");
            break;
        case JUNE:
            printf("June has 30 days.\n");
            break;
        case JULY:
            printf("July has 31 days.\n");
            break;
        case AUGUST:
            printf("August has 31 days.\n");
            break;
        case SEPTEMBER:
            printf("September has 30 days.\n");
            break;
        case OCTOBER:
            printf("October has 31 days.\n");
            break;
        case NOVEMBER:
            printf("November has 30 days.\n");
            break;
        case DECEMBER:
            printf("December has 31 days.\n");
            break;
        default:
            printf("Invalid Month!\n");
    }
}

int main() {
    int input;

    printf("--- Month Days Directory ---\n");
    printf("Enter month number (1-12): ");
    
    // Read user input to find the corresponding month
    if (scanf("%d", &input) != 1 || input < 1 || input > 12) {
        printf("Invalid input! Please enter a number between 1 and 12.\n");
        return 1;
    }

    // Cast the user's integer input directly to our custom enum type
    enum Month chosen_month = (enum Month)input;

    // Call the function to print the days
    printDaysInMonth(chosen_month);

    return 0;
}
