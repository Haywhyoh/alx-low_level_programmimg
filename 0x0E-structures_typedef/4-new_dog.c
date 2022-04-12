#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - calculate the length of a string
 * @s: the character whose length is determined
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copies the str ofsrc to dest
 * @dest: the destination memory
 * @src: the source
 *
 * Return: the copied string dest
 */

char _strcpy(char *dest, char *src)
{
	int src_len;
	int i;

	src_len = _strlen(src);

	while (i < src_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * *new_dog - funtion create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 *
 * Return: the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(struct dog));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->age = age;

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (doc->owner == NULL)
	{
		free(dog);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);

	return (dog);
}
