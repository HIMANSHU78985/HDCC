#include <stdio.h>

int main() {
    int n, m, i;

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    int b[m];

    for (i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }

    // Print first array
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    // Print second array
    for (i = 0; i < m; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}