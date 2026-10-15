#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[1000];
    char *words[100];
    int count = 0;

    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';

    char *w = strtok(line, " ");
    while (w != NULL) {
        words[count++] = w;
        w = strtok(NULL, " ");
    }

    for (int i = 0; i < count - 1; i++) {
        printf("%c.", toupper(words[i][0]));
    }
    if (count > 0) {
        if (count > 1) printf(" ");
        printf("%s", words[count - 1]);
    }
    printf("\n");
    return 0;
}