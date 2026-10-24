#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("-1\n");   // no valid window
        return 0;
    }

    // Sum of the first window
    long long windowSum = 0;
    for (int i = 0; i < k; i++)
        windowSum += arr[i];

    long long maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k];
        if (windowSum > maxSum)
            maxSum = windowSum;
    }

    printf("%lld\n", maxSum);
    return 0;
}