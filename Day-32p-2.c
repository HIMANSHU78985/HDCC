#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld", &n);

    n = llabs(n);

    int count[10] = {0};

    if (n == 0) {
        count[0] = 1;
    }

    while (n > 0) {
        int digit = n % 10;
        count[digit]++;
        n /= 10;
    }

    int maxCount = 0, result = 0;
    for (int d = 0; d <= 9; d++) {
        if (count[d] > maxCount) {
            maxCount = count[d];
            result = d;
        }
    }

    printf("%d\n", result);

    return 0;
}