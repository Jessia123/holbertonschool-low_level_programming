#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array using Binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not present or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    size_t left = 0;
    size_t right = size - 1;
    size_t mid;

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

    return -1; // Value not found
}
