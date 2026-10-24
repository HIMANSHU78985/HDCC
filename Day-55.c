#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Phase 1: find candidate (Boyer-Moore)
    int candidate = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0)
            candidate = nums[i];
        if (nums[i] == candidate)
            count++;
        else
            count--;
    }

    // Phase 2: verify candidate
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate)
            freq++;
    }

    if (freq > n / 2)
        printf("%d\n", candidate);
    else
        printf("-1\n");

    return 0;
}