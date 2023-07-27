#include "lists.h"
#include <stdio.h>
/**
 * print_list - print elements in a linked list
 * @h: pointer to head first node
 * Return: returns numberc of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 2;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", count, h->str);

		h = h->next;
		count += 2;
	}
	printf("[%d] %s\n", h->len, h->str);

	return (count);
}
