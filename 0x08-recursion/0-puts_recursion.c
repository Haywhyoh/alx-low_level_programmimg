#include "main.h"
/**
 * _puts_recursion prints a string
 * followed by a new line
 * @*s: is the string printed
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n);
	}
	putchar(*s);
	_puts_recursion(s++);
}
