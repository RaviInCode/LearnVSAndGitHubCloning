#include <stdio.h>

int main() {
    int arr[] = {3, 18, 19, 13, 19, 20, 22, 13, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, j;
    int duplicates[100] = {0}; // Assuming a maximum of 100 unique elements, adjust if needed
    int result[100];
    int count = 0;

    for (i = 0; i < n; i++) {
        if (duplicates[arr[i]] != 0) {
            if (duplicates[arr[i]] == 1) {
                result[count++] = arr[i];
            }
            duplicates[arr[i]]++;
        } else {
            duplicates[arr[i]] = 1;
        }
    }

    printf("Duplicate elements: ");
    for (i = 0; i < count; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
