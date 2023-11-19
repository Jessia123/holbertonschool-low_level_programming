#include <stdio.h>

int binary_search(int *array, size_t size, int value) {
    if (array == NULL || size == 0) {
        return -1;
    }

    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (size_t i = 0; i < size; ++i) {
            if (i == mid) {
                printf("| ");
            }
            printf("%d ", array[i]);
        }
        printf("\n");

        if (array[mid] == value) {
            return mid; // Found the value
        } else if (array[mid] < value) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Value not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int value = 11;

    int index = binary_search(arr, size, value);

    if (index != -1) {
        printf("Value %d found at index %d.\n", value, index);
    } else {
        printf("Value %d not found in the array.\n", value);
    }

    return 0;
}
