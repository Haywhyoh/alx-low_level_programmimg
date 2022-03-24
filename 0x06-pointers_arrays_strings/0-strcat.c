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
	int i, j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
		dest[j] = src[i];
		dest++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
