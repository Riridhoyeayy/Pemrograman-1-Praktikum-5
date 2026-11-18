#include <stdio.h>
int main() {
    int n, i, j, k, total;
    int A[50][50], B[50][50];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            total = 0;
            for (k = 0; k < n; k++) {
                total = total + A[i][k] * B[k][j];
            }
            printf("%d", total);
            if (j < n - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}