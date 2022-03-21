#include "main.h"
/**
 * _strlen - print out length of
 * a string
 * @s: the string argument
 *
 * Return: 0 when successful
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	putchar(j);
	rerurn(0);
}
