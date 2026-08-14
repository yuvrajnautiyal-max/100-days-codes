// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>

int main()
 {
    int total_sec, h, m, s;

    printf("Enter time in seconds: ");
    scanf("%d", &total_sec);

    h = total_sec / 3600;
    m = (total_sec % 3600) / 60;
    s = total_sec % 60;

    printf("%d:%d:%d\n", h, m, s);

    return 0;
}