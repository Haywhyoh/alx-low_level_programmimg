#include "main.h"
/**
 * print_alphabet_x10- print 10x the alphabet
 *
 * Return: 0 when succesful
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
