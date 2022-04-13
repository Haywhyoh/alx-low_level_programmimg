#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a function on every
 * elememt of an array
 * @array: the given array
 * @size: the size of the array
 * @action: the function that is executed on array elements
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
