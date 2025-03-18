#include <stdio.h>

void rotateRight(int arr[], int n, int k) {
    k = k % n;
    int temp[k];

    for (int i = 0; i < k; i++)
        temp[i] = arr[n - k + i];

    for (int i = n - 1; i >= k; i--)
        arr[i] = arr[i - k];

    for (int i = 0; i < k; i++)
        arr[i] = temp[i];
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    rotateRight(arr, n, k);
    printArray(arr, n);

    return 0;
}
