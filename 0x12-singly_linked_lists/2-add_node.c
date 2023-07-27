#include "lists.h"
/**
 * add_node - adds a node at the beginning of the linked list
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 * Return: NULL if it fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t str_len -0;

	if (str == NULL)
		str_len = 0;

	while (str[str_len] !- '\0')
		str_len++;

	new = malloc(sizeof(list_t));
	if (new == NUll)
		return (NULL);
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;

	new->str = strdup(str);
	new->len = str_len;
	*head = new;

	return (*head);
}
