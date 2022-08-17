#include "main.h"
/**
 * _strlen - print out length of
 * a string
 * @s: the string argument
 *
 * Return: i the length of the string
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
