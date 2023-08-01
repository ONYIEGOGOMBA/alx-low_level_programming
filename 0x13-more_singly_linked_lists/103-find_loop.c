#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the beginning of the list
 * Return: address  of the node  where the loop starts
 * or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tort, *rab;

	tort = rab = head;
	while (tort && rab && rab->next)
	{
		tort = tort->next;
		rab = rab->next->next;
		if (tort == rab)
		{
			tort = head;
			break;
		}
	}
	if (!tort || !rab || !rab->next)
		return (NULL);
	while (tort != rab)
	{
		tort = tort->next;
		rab = rab->next;
	}
	return (rab);
}
