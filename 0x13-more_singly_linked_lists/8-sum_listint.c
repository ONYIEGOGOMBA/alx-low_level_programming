#include "lists.h"
/**
 * sum_listint - Return the sum of all the data (n) of a listint_t list
 * @head: pointer to the head of the list
 * Return: The sum of all the data or 0 if the list ids empty
 */
int sum_listint(listint_t *head)
{
	int a_sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		a_sum += current->n;
		current = current->next;
	}

	return (a_sum);
}
