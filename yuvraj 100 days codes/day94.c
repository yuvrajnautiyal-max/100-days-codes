/*
 * Question 144 (Enum / Structs)
 * 
 * Write a function that accepts a structure as parameter and prints its members.
 */

#include <stdio.h>

// 1. Define an enum for employee departments
enum Department {
    HR,
    ENGINEERING,
    SALES,
    MARKETING
};

// 2. Define the Employee structure containing our enum
struct Employee {
    int id;
    char name[50];
    float salary;
    enum Department dept; // Enum member
};

// 3. Declare the printing functions
void printEmployeeByValue(struct Employee emp);          // Method A: Pass-by-Value
void printEmployeeByPointer(const struct Employee *emp); // Method B: Pass-by-Pointer (Recommended)

int main() {
    // 4. Initialize an Employee record
    struct Employee emp1 = {101, "Shaurya Ramola", 75000.50, ENGINEERING};

    printf("--- Function Structure Parameter Demo ---\n\n");

    // Call Method A (Passes a copy of the whole structure)
    printf("[Using Pass-by-Value Function]:\n");
    printEmployeeByValue(emp1);

    printf("\n-----------------------------------------\n\n");

    // Call Method B (Passes only the memory address of the structure)
    printf("[Using Pass-by-Pointer Function]:\n");
    printEmployeeByPointer(&emp1);

    return 0;
}

// ====================================================================
// METHOD A: Accepts the structure BY VALUE
// ====================================================================
void printEmployeeByValue(struct Employee emp) {
    // We use the dot (.) operator to access members of a normal struct variable
    printf("ID:     %d\n", emp.id);
    printf("Name:   %s\n", emp.name);
    printf("Salary: $%.2f\n", emp.salary);
    
    printf("Dept:   ");
    switch (emp.dept) {
        case HR:          printf("Human Resources\n"); break;
        case ENGINEERING: printf("Engineering\n");     break;
        case SALES:       printf("Sales\n");           break;
        case MARKETING:   printf("Marketing\n");       break;
    }
}

// ====================================================================
// METHOD B: Accepts the structure BY POINTER (Industry Standard)
// ====================================================================
// We use 'const' to ensure the function only reads the data and doesn't modify it.
void printEmployeeByPointer(const struct Employee *emp) {
    // CRITICAL: We use the arrow (->) operator to access members through a pointer!
    printf("ID:     %d\n", emp->id);
    printf("Name:   %s\n", emp->name);
    printf("Salary: $%.2f\n", emp->salary);
    
    printf("Dept:   ");
    switch (emp->dept) {
        case HR:          printf("Human Resources\n"); break;
        case ENGINEERING: printf("Engineering\n");     break;
        case SALES:       printf("Sales\n");           break;
        case MARKETING:   printf("Marketing\n");       break;
    }
}
