#include <stdio.h>

void linearSearch(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            return;
        }
    }
    printf("Element not found\n");
}

int main() {
    int arr[] = {5, 2, 9, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;

    linearSearch(arr, n, key);

    return 0;
}
