#include<stdio.h>
#include<stdlib.h>

void bubblesort(int *arr, int n) {
    int temp, flag;
    for (int i = 0; i < n - 1; i++) {
        // printf("Working on pass no: %d\n", i + 1);
        flag = 1;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 0;
            }
        }
        // If no swapping occurred, the array is already sorted
        if (flag)
            break;
    }
}

int binarysearch_recursive(int A[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (A[mid] == key) {
            printf("Found at index %d (using recursive binary search).\n", mid);
            return mid;
        } else if (A[mid] < key) {
            return binarysearch_recursive(A, mid + 1, high, key);
        } else {
            return binarysearch_recursive(A, low, mid - 1, key);
        }
    } else {
        printf("Not found (using recursive binary search)!\n");
        return -1;
    }
}

int binarysearch_iterative(int A[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (A[mid] == key) {
            printf("Found at index %d (using iterative binary search).\n", mid);
            return mid;
        }

        if (A[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Not found (using iterative binary search)!\n");
    return -1;
}

int main() {
    int arr[] = {23, 1, 34, 67, -2, 87}, n, key, index_1, index_2;

    n = sizeof(arr) / sizeof(int);

    // Perform bubble sort
    bubblesort(arr, n);

    // Perform binary search recursively
    key = 34;
    index_1 = binarysearch_recursive(arr, 0, n - 1, key);

    // Perform binary search iteratively
    key = 23;
    index_2 = binarysearch_iterative(arr, 0, n - 1, key);

    return 0;
}
