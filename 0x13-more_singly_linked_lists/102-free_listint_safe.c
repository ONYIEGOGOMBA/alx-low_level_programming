#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _ra - reallocates memory for an array of pointers
 * @list: the old list to append
 * @size: size of the new list
 * @new: new node to add to the list
 * Return: pointer to the new list
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **nlist;
	size_t b;

	nlist = malloc(size * sizeof(listint_t *));
	if (nlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (b = 0; b < size - 1; b++)
		nlist[b] = list[b];
	nlist[b] = new;
	free(list);
	return (nlist);
}

/**
 * free_listint_safe - frees a listint_t linked list
 * @head: double pointer to the start of the list
 * Return: the number of nodes in the list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t b, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (num);
	while (*head != NULL)
	{
		for (b = 0; b < num; b++)
		{
			if (*head == list[b])
			{
				*head = NULL;
				free(list);
				return (num);
			}
		}
		num++;
		list = _ra(list, num, *head);
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	free(list);
	return (num);
}
