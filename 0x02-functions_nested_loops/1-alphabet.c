#include "main.h"
/**
 * print_alphabet- prints alphabet in
 * lower case
 * @k is the argument tested
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
