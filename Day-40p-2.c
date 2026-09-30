#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    int a[50][50], b[50][50], res[50][50];

    scanf("%d %d", &r1, &c1);
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    scanf("%d %d", &r2, &c2);
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    if (c1 != r2) {
        printf("Matrix multiplication not possible\n");
        return 0;
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (k = 0; k < c1; k++)
                res[i][j] += a[i][k] * b[k][j];
        }
    }

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d", res[i][j]);
            if (j < c2 - 1)
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}