#include "main.h"
/**
 * swap_int - swaps the values of
 * *a nd *b
 * @a: a is the first input parameter
 * @b: b is the second input parameter
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
