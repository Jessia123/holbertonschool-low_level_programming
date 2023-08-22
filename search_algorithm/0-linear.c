#include "search_algos.h"


/**
 * linear_search - searches through an array for a value
 * @array: pointer to array
 * @size: elements in array
 * @value: value to find
 * Return: index where value was found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size ; ++i)
	{
		printf("Value checked array[%i] = [%i]\n", (int)i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
	}
	return (-1);
}
