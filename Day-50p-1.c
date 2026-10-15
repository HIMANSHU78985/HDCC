#include <stdio.h>

int main() {
    int day, month, year;
    scanf("%d/%d/%d", &day, &month, &year);

    printf("%02d-Apr-%d\n", day, year);

    return 0;
}