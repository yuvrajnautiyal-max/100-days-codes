#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                      "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    printf("%02d-%s-%d", day, months[month - 1], year);

    return 0;
}