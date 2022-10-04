#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: size of the array
 * @value: is the value to search for
 * Return:  return the first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	while (i < (int)size)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
