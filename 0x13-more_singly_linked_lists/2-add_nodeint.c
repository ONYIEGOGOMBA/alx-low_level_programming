#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add node at thr beginning of a listint_t list
 * @n: int add the list
 * @head: head of double pointer
 * Return: NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;
	if (head == NULL)
		return (NULL);

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next =*head;
	*head = ptr;

	return (ptr);
}
