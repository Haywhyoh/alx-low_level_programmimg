#include "main.h"
/**
 * print_rev - reverse a string input
 * @s: the string argument to be reversed
 *
 */
void print_rev(char *s)
{
	int j, k, length;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	length = j;

	for (k = length - 1; k >= 0; k--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
