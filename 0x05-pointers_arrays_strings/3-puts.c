#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: the input string parameter
 *
 */
void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
