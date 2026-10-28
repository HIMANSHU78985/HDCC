#include <stdio.h>
#include <string.h>

int main() {
    char s[100001];
    if (scanf("%100000s", s) != 1) {
        printf("0\n");
        return 0;
    }

    int n = strlen(s);
    int lastIndex[256];
    for (int i = 0; i < 256; i++) lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0;  // left edge of the current window

    for (int i = 0; i < n; i++) {
        unsigned char c = s[i];

        // If c was seen inside the current window, move the window past it
        if (lastIndex[c] >= start)
            start = lastIndex[c] + 1;

        lastIndex[c] = i;

        if (i - start + 1 > maxLen)
            maxLen = i - start + 1;
    }

    printf("%d\n", maxLen);
    return 0;
}