
#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int arr[] = {1, 1, 2, 8, 10, 11, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x;

    printf("Enter x: ");
    scanf("%d", &x);

    printf("%d\n", findCeil(arr, n, x));

    return 0;
}
