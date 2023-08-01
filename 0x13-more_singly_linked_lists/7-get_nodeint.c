#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t list
 * @index: Index of the node, starting at 0
 * @head: Pointer to the head of the list
 * Return: pointer to nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int b;
	listint_t *current = head;

	for (b = 0; current != NULL && b < index; b++)
	{
		current = current->next;
	}

	return (current);
}
