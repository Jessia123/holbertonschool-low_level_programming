#include "function_pointers.h"
/*
 * *array iterator
 * */
void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int x = 0;
	if (action == NULL)
		return;
	for (; x < size; x++)
		action(array[x]);
}
