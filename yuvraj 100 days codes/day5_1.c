// Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>

int main() {
    float p, r, t;
    float si, ci, amount;

    printf("Enter principal: ");
    scanf("%f", &p);

    printf("Enter rate: ");
    scanf("%f", &r);

    printf("Enter time in years: ");
    scanf("%f", &t);

    si = (p * r * t) / 100;

    amount = p;
    for (int i = 1; i <= t; i++) {
        amount = amount + (amount * r) / 100;
    }
    ci = amount - p;

    printf("Simple Interest = %.2f\n", si);
    printf("Compound Interest = %.2f\n", ci);

    return 0;
}