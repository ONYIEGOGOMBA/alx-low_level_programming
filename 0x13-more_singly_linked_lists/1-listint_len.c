#include "lists.h"
/**
 * listint - returns the number of elements in a listinit_t
 * @h: pointer to the head of a list
 * Return: The number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h-> != '\0')
			count++;

		h = h->next;
	}

	return (count);
}
