#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all - return sum on all parameters
 * @n: the first parameter
 *
 * Return: 0 if n is null
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	sum 0;

	if (n == 0)
		return (0);
	va_start(n, ap);
	for (i =  0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
