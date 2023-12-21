#include <stdio.h>

int binary_search(int *array, size_t size, int value)
{
    size_t left, right, mid;
    
    if (array == NULL)
        return -1;

    left = 0;
    right = size - 1;

    while (left <= right)
    {
        mid = (left + right) / 2;

        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            if (i == right)
                printf("%d\n", array[i]);
            else
                printf("%d, ", array[i]);
        }

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    /* Value not found */
    return -1;
}
