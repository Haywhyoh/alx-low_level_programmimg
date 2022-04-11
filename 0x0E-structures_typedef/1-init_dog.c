#include "dog.h"
/**
 * init_dog - function that initialize the type dog
 * @d: the dog
 * @name: the dog name
 * @age: owner age
 * @owner: owner name
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
		malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
