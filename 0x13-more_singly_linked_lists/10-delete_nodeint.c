#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given position in the list
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if the node was deleted successfully, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int b;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	prev = NULL;

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (b = 0; temp != NULL && b < index; b++)
	{
		prev = temp;
		temp = temp->next;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
