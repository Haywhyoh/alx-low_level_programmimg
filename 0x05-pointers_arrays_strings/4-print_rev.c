#include "main.h"
/**
 * print_rev - reverse a string input
 * @s: the string argument to be reversed
 *
 */
void print_rev(char *s)
{
	int j, k, length;

	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	length = j;

	for (k = 0; k < length; k++)
	{
		_putchar(s[j]);

	}
	_putchar('\n');
}
