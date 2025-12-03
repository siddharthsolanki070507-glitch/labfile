#include <stdio.h>

int main(void) {
    float a, b, c;
    printf("Enter length of first side: ");
    scanf("%f", &a);
    printf("Enter length of second side: ");
    scanf("%f", &b);
    printf("Enter length of third side: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Triangle is valid.\n");
        if (a == b && b == c) {
            printf("Triangle is equilateral.\n");
        } else if (a == b || b == c || a == c) {
            printf("Triangle is isosceles.\n");
        } else {
            printf("Triangle is scalene.\n");
        }
    } else {
        printf("Triangle is not valid.\n");
    }
    return 0;
}