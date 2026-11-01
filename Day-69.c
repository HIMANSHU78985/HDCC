
#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int arr[n];
    int visited[1000] = {0};

    // Input array elements
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(visited[arr[i]] == 1) {
            printf("%d", arr[i]);
            return 0;
        }

        visited[arr[i]] = 1;
    }

    return 0;
}
