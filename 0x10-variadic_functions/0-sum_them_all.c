#include "variadic_functions.h"
/**
 * sum_them_all - return sum on all parameters
 * @n: the first parameter
 *
 * Return: 0 if n is null
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	int sum = 0;

	va_start(list, n);

	for (i =  0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
