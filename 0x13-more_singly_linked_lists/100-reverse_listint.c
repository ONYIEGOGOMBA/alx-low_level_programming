#include "lists.h"
/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: pointer to the head of the list
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *node;

	prev = NULL;
	node = NULL;

	while (*head != NULL)
	{
		node = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = node;
	}

	*head = prev;

	return (*head);
}
