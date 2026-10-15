#include <stdio.h>

int main(void) {
    char s[100000];
    if (scanf("%99999s", s) != 1) {
        return 0;
    }

    int seen[26] = {0};

    for (int i = 0; s[i] != '\0'; ++i) {
        char c = s[i];
        if (c < 'a' || c > 'z') continue;   // only lowercase letters
        if (seen[c - 'a']) {
            printf("%c\n", c);
            return 0;
        }
        seen[c - 'a'] = 1;
    }

    printf("-1\n");   // no repeating character
    return 0;
}
