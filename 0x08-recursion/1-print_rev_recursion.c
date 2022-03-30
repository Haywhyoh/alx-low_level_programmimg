#include "main.h"
/**
 * print_rev_recursion - prints a
 * string in reverse
 * @s: the string to be printed
 *
 * Returns: void
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}

}
