#include <stdio.h>
#include <limits.h>

int main(void) {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Need at least two elements.\n");
        return 1;
    }
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN, second = INT_MIN;
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if (arr[i] > second && arr[i] < largest) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("No distinct second largest element.\n");
    } else {
        printf("Second largest element is: %d\n", second);
    }
    return 0;
}