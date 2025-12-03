#include <stdio.h>

int addmarks(int a, int b) {
    return a + b;
}

int submarks(int a, int b) {
    return a - b;
}

int main(void) {
    int fja_marks = 20;
    int fjb_marks = 10;
    printf("FJA's marks: %d\n", fja_marks);
    printf("FJB's marks: %d\n", fjb_marks);
    printf("Total marks (using functions): %d\n", addmarks(fja_marks, fjb_marks));
    printf("Marks after subtraction: %d\n", submarks(fja_marks, fjb_marks));
    return 0;
}