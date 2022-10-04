#include "search_algos.h"
/**
 * binary_search - a function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array:  a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value:  is the value to search for
 * Return: the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int ret;

	if (array == NULL)
		return (-1);

	ret = b_search(array, (int)size - 1, 0, value);
	return (ret);
}
/**
 * print_array - print array
 * @array: sorted array of ints
 * @high: upper bound
 * @low: lower bound
 */
void print_array(int *array, size_t high, size_t low)
{
	if (low > high)
		return;
	printf("Searching in array: ");
	if (low == high)
	{
		printf("%u\n", array[high]);
		return;
	}

	while (low <= high)
	{
		printf("%u", array[low]);
		if (low != high)
			printf(", ");
		low++;
	}
	printf("\n");
}
/**
 * b_search - binary search helper function
 * Recursively searches for value based on midpoint
 * @array: sorted array of ints
 * @high: top end of array
 * @low: lower bound of array
 * @value: value to search for
 * Return: postion or -1 if not found
 */
int b_search(int *array, size_t high, size_t low, int value)
{
	int mid = low + (high - low) / 2;

	print_array(array, high, low);

	if (array[mid] == value)
		return (mid);
	if (high >= low)
	{
		if (array[mid] > value)
			return (b_search(array, mid - 1, low, value));
		else
			return (b_search(array, high, mid + 1, value));
	}
	return (-1);
}
