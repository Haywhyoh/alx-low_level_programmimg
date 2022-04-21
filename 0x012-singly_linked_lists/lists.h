#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio>


/**
 * struct list_s - singly linked list
 * @str: string - malloced string
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked listg node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);


#endif
