#include "main.h"

/**
* array_range - finds the range of an array
* @min: first value of the array
* @max: last value of the array
* Return: ptr of the array or NULL
*/

int *array_range(int min, int max)
{
	int *arr;
	int x, length;
	int y = min;

	if (min > max)
	{
		return (NULL);
	}

	length = (max - min) + 1;

	arr = malloc(sizeof(int) * length);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; y <= max; y++)
	{
		arr[x] = y;
		x++;
	}
	return (arr);
}
