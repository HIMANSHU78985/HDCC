#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // A non-square matrix cannot be symmetric
    if (r != c) {
        printf("False\n");
        return 0;
    }

    int symmetric = 1;
    for (int i = 0; i < r && symmetric; i++) {
        for (int j = i + 1; j < c; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    printf(symmetric ? "True\n" : "False\n");
    return 0;
}