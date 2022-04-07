#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concat n bytes of two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the numberof bytes of s2 to be concatenated
 *
 * Return: the poiner to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i, j = 0;

	if (s1 == NULL)
	{
		return (" ");
	}

	if (s2 == NULL)
	{
		return (" ");
	}

	while (s1[i] != '\0')
	{
		i++;
	}

	concat = malloc(sizeof(char) * (n + i + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	int k = 0;

	while (s1[k] != '\0')
	{
		concat[k] = s1[k];
		k++;
	}

	while (j < n && s2[j] != '\0')
	{
		concat[k] = s2[j];
		k++;
		i++;
	}
	concat[k] = '\0';
	return (concat);
}
