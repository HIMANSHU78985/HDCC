 #include <stdio.h>

int main() {
    int m, n, i, j, k;

    // Input size of first array
    scanf("%d", &m);
    int nums1[m];

    // Input elements of first sorted array
    for(i = 0; i < m; i++)
        scanf("%d", &nums1[i]);

    // Input size of second array
    scanf("%d", &n);
    int nums2[n];

    // Input elements of second sorted array
    for(i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    int merged[m + n];
    i = j = k = 0;

    // Merge both arrays
    while(i < m && j < n) {
        if(nums1[i] <= nums2[j])
            merged[k++] = nums1[i++];
        else
            merged[k++] = nums2[j++];
    }

    // Copy remaining elements of first array
    while(i < m)
        merged[k++] = nums1[i++];

    // Copy remaining elements of second array
    while(j < n)
        merged[k++] = nums2[j++];

    // Print merged array
    for(i = 0; i < m + n; i++)
        printf("%d ", merged[i]);

    return 0;
}