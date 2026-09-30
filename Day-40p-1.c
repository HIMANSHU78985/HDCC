#include <stdio.h>

int main() {
    int r, c;
    int a[100][100];

    scanf("%d %d", &r, &c);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Diagonal traversal
    for (int d = 0; d < r + c - 1; d++) {
        int row = (d < c) ? 0 : d - c + 1;
        int col = (d < c) ? d : c - 1;

        while (row < r && col >= 0) {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}