#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;
    int numerator = 1, denominator;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int k = 1; k <= n; k++) {
        if (k == 1) {
            sum += 1.0;          // first term is just 1
            denominator = 0;      // placeholder, not used for k=1
        } else {
            numerator = 2 * k - 1;
            denominator = 2 * k;
            sum += (double)numerator / denominator;
        }
    }

    printf("Approximate sum: %.1lf\n", sum);

    return 0;
}