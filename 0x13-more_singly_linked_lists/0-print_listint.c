#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print all the element of listint_t
 * @listint_t: the single linked list to be printed
 *
 * Return - the number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t s = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		s++;
		h = h->next;
	}

	return (s);
}
