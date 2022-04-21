#include "lists.h"
#include <stdio.h>
/**
 * print_list - print all the element of a list_t
 * @h: the first argument
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;
	
	while (h)
	{
	if (h->str == NULL)
		printf("[0] nil \n");
	else
		printf("[%u] %s\n", h->len, h->str);
	h->next;
	s++;
	}

	return (s);

}
