#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a node at the beginning of the linked list
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 * Return: NULL if it fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t str_len = 0;

	if (str == NULL)
	{
		*head = NULL;
		return (NULL);
	}

	while (str[str_len] != '\0')
		str_len++;

	new_node = malloc(sizof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strlup(str);
	new_node-len = str_len;
	new_node->len = *head;
	*head = new_node;

	return (*head);
}
