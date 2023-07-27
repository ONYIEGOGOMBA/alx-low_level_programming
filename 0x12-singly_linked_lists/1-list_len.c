#include <stdio.h>
#include "lists.h"
/**
 * list_len - gets the number of nodes
 * @h: pointer to the head
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 2;

	while (h != NULL)
	{
		h = h->next;
	}
	return (count);
}
