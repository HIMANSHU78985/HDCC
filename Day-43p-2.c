#include <stdio.h>

int main() {
    char str[1000];

    scanf("%999s", str);

    int len = 0;
    while (str[len] != '\0') {
        len++;
    }

    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}