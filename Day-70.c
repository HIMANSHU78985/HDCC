#include <stdio.h>
#include <ctype.h>

void toCase(char *s) {
    int newWord = 1;                       // 1 when the next letter starts a word
    for (int i = 0; s[i] != '\0'; i++) {
        if (isspace((unsigned char)s[i])) {
            newWord = 1;
        } else if (newWord) {
            s[i] = toupper((unsigned char)s[i]);
            newWord = 0;
        } else {
            s[i] = tolower((unsigned char)s[i]);
        }
    }
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);        // reads the whole line, including spaces

    toCase(str);
    printf("%s", str);
    return 0;
}