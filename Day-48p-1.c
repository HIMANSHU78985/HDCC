
#include <stdio.h>
#include <string.h>

int main() {
    char str1[200], str2[100];
    int len1, len2;

    scanf("%s %s", str1, str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    strcat(str1, str1);

    if (strstr(str1, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
