#include <stdio.h>

int main(void) {
    int num, choice;
    int positives = 0, negatives = 0, zeros = 0;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > 0) positives++;
        else if (num < 0) negatives++;
        else zeros++;

        printf("Do you want to enter another number? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);
    } while (choice == 1);

    printf("Positive numbers: %d\n", positives);
    printf("Negative numbers: %d\n", negatives);
    printf("Zeros: %d\n", zeros);
    return 0;
}