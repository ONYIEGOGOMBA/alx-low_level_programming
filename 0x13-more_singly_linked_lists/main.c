#include <stdio.h>
#include "lists.h"

int main(void)
{
	listint_t *head = NULL;

	/* Example: Adding elements to the list */
	/* Assuming you have the add_node function implemented */
	/* add_node(&head, 1); */
	/* add_node(&head, 2); */
	/* add_node(&head, 3); */
	size_t num_nodes = print_listint(head);
	printf("Number of nodes: %zu\n", num_nodes);

	return (0);
}
