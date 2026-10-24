#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        int result = -1;

        // scan left from i-1 down to 0
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                result = arr[j];
                break;   // nearest greater found
            }
        }

        if (i > 0)
            printf(", ");
        printf("%d", result);
    }
    printf("\n");

    return 0;
}