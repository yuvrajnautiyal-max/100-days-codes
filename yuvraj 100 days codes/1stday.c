#include<stdio.h>
// program to input two number and display their sum
int main()
 {
    int a, b, sum;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    sum=a+b;
    printf("Sum = %d\n", sum);
    return 0;
}