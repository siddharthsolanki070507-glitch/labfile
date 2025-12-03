#include <stdio.h>

int main(void) {
    int n, i, target, freq = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter number to find frequency of: ");
    scanf("%d", &target);
    for (i = 0; i < n; i++) {
        if (arr[i] == target) freq++;
    }
    printf("Frequency of %d is: %d\n", target, freq);
    return 0;
}