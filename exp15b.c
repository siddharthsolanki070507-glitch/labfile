#include <stdio.h>

int main(void) {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    int positives = 0, negatives = 0, odd = 0, even = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] > 0) positives++;
        else if (arr[i] < 0) negatives++;
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }

    printf("Positive: %d\nNegative: %d\nEven: %d\nOdd: %d\n", positives, negatives, even, odd);
    return 0;
}