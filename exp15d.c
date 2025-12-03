#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int r1, c1, r2, c2;
    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first must equal rows of second.\n");
        return 1;
    }

    int i, j, k;
    int **A = malloc(r1 * sizeof(int*));
    int **B = malloc(r2 * sizeof(int*));
    int **C = malloc(r1 * sizeof(int*));
    for (i = 0; i < r1; i++) { A[i] = malloc(c1 * sizeof(int)); C[i] = malloc(c2 * sizeof(int)); }
    for (i = 0; i < r2; i++) { B[i] = malloc(c2 * sizeof(int)); }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    for (i = 0; i < r1; i++)
        for (j = 0; j < c2; j++)
            C[i][j] = 0;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < r1; i++) { free(A[i]); free(C[i]); }
    for (i = 0; i < r2; i++) free(B[i]);
    free(A); free(B); free(C);

    return 0;
}
