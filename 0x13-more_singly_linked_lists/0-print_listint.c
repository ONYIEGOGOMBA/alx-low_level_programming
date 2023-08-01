#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listsinit - prints all elements of a listinit_t list
 * @h: pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t n_count = 1;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);

		h = h->next;
		n_count++;
	}
	printf("%d\n", h->n);

	return (n_count);
}
