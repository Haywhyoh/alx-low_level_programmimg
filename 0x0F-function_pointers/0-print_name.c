#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - a function that prints a name
 * @name: the name to be printed
 * @f: the pointer function
 *
 * Return: 0 on success
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !name)
		return;
	f(name);

}

