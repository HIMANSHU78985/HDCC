#include <stdio.h>

int main() {
    int n, i, position, element;

    scanf("%d", &n);

    int arr[n + 1];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &position, &element);

    // Shift elements to the right
    for (i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position - 1] = element;

    // Print the updated array
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}