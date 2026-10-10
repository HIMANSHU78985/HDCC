
#include <stdio.h>

int main() {
    char str[1000], temp;
    int i = 0, j = 0;

    fgets(str, sizeof(str), stdin);

    while (str[j] != '\0' && str[j] != '\n') {
        j++;
    }

    j--;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    str[i + j + 1] = '\0';

    printf("%s\n", str);

    return 0;
}
