#include <stdio.h>

int main(void) {
    double population = 100000.0;
    int year;
    printf("Population growth for 10 years (at 10%% increase per year):\n");
    for (year = 1; year <= 10; year++) {
        population = population * 1.10;
        printf("Year %d: %.0f\n", year, population);
    }
    return 0;
}