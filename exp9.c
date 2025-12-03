#include <stdio.h>

int main(void) {
    float weight, height, bmi;
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);

    if (height <= 0.0f) {
        printf("Invalid height.\n");
        return 1;
    }

    bmi = weight / (height * height);
    printf("Your BMI = %.2f\n", bmi);

    if (bmi < 18.5f) {
        printf("Category: Underweight\n");
    } else if (bmi < 25.0f) {
        printf("Category: Normal\n");
    } else if (bmi < 30.0f) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }
    return 0;
}