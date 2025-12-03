#include <stdio.h>

int main(void) {
    int day;
    printf("Enter day number in the year (1-365): ");
    scanf("%d", &day);

    if (day < 1 || day > 366) {
        printf("Invalid day number.\n");
        return 1;
    }

    int weekday = day % 7; /* 1 -> Monday if day%7==1 according to original pattern */
    switch (weekday) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
        case 0: printf("Sunday\n"); break;
        default: printf("Error\n"); break;
    }
    return 0;
}