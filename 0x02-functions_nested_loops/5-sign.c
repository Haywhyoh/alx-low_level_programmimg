#include "main.h"
/**
 * print_sign - this function prints
 * the sign of an int
 * @n: is the integer tested
 *
 * Return: 1 when positve
 * 0 when it is zero
 * -1 when n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
	}
	return (-1);
}
