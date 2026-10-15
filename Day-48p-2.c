#include <stdio.h>
#include <string.h>

void reverse(char *s, int start, int end) {
    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char line[1000];

    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';

    int n = strlen(line);
    int i = 0;

    while (i < n) {
        if (line[i] == ' ') {
            i++;
            continue;
        }
        int start = i;
        while (i < n && line[i] != ' ') i++;
        reverse(line, start, i - 1);
    }

    printf("%s\n", line);
    return 0;
}