#include <stdio.h>

int findMissing(int nums[], int n) {
    int result = n;                 // start with n, since indices only cover 0..n-1
    for (int i = 0; i < n; i++) {
        result ^= i ^ nums[i];      // pairs cancel out, leaving the missing number
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("%d\n", findMissing(nums, n));
    return 0;
}