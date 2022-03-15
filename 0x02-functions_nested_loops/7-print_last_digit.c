#include "main.h"
/**
 * print_last_digit - print last
 * digits of a given number n
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	int c;
	
	if (n < 0)
	{
		n = -n;
		c = n % 10;
		if (c < 0)
		{
			c = -c;
		}
		_putchar(c + '0');
	}
	return (c);
}
