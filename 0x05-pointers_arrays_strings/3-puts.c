#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: the input string parameter
 *
 */
void _puts(char *str)
{
	int j;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
