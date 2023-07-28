#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free single list link
 * @head: pointer to the first node of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
