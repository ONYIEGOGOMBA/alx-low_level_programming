#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _r - reallocates memory for an array of pointers
 * @list: the old list to append
 * @size: size of new list
 * @new: new node to add to the list
 * Return: pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **nlist;
	size_t b;

	nlist = malloc(size * sizeof(listint_t));
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
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the start of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t b, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (b = 0; b < num; b++)
		{
			if (head == list[b])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
