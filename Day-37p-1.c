#include <stdio.h>

int main() {
    int r, c, i, j;

    scanf("%d %d", &r, &c);

    int a[r][c];
    int sum[r];

    // Read matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Find sum of each row
    for (i = 0; i < r; i++) {
        sum[i] = 0;

        for (j = 0; j < c; j++) {
            sum[i] = sum[i] + a[i][j];
        }
    }

    // Print row sums
    for (i = 0; i < r; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}