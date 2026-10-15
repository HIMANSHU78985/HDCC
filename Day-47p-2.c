#include <stdio.h>
#include <string.h>

int main() {
    char line[1000];
    char longest[1000] = "";

    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = '\0';   // remove trailing newline

    char *word = strtok(line, " ");
    while (word != NULL) {
        if (strlen(word) > strlen(longest)) {
            strcpy(longest, word);
        }
        word = strtok(NULL, " ");
    }

    printf("%s\n", longest);
    return 0;
}