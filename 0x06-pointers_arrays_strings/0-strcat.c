#include "main.h"
/**
 * *_strcat -  this function concatenate
 * two strings
 * @src: the first string
 * @dest: the string to be appended to src
 *
 * Return: return dest the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char start = dest;

	while *dest != '\0'
	{
		dest++;
	}

	while *src != '\0'
	{
		dest = src;
		src++;
		dest++;

	}
	dest = '\0';

	return (start);
}
