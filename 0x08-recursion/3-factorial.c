#include "main.h"
/**
 * factorial - calculates the factorial of n
 * @n: number to calculate its factorial
 *
 * Return: 0 for succesful and -1 for error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
