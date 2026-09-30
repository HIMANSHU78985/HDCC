#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0;
    int a[50][50];

    scanf("%d %d", &r, &c);

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    if (r != c) {
        printf("Not a square matrix\n");
        return 0;
    }

    for (i = 0; i < r; i++) {
        sum += a[i][i];
    }

    printf("%d\n", sum);

    return 0;
}