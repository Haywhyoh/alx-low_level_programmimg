#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - duplicates the string given
 * @str: string to duplicate
 *
 * Return: NULL for error, 0 for success
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	while(str[len])
		len++;
	
	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	
	while ((str[i] == dup[i]) != '\0')
		i++;

	return (dup);
}
