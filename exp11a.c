#include <stdio.h>

int main(void) {
    float x1, y1, x2, y2, x3, y3;
    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter coordinates of third point (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    /* Using area method: area = 0 => collinear */
    float area = x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2);
    if (area == 0.0f) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are not collinear.\n");
    }
    return 0;
}
