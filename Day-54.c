
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long total = (long long)n * (n + 1) / 2;
    long long sum = 0;

    for (int x = 1; x <= n; x++) {
        sum += x;

        if (sum == total - sum + x) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
