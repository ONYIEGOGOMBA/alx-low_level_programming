#include "lists.h"
/**
 * free_listp - frees a linked list
 * @head: head of a list
 * print_listint_safe - prints a linked list
 * Return: no return
 */
size_t print_listint_safe(const listint_t *head)
{
	listp_t *tem;
	listp_t *cur;

	if (head != NULL)
	{
		cur = *head;
		while ((temp = cur) != NULL)
		{
			cur = cur->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list
 * @head: head of a list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listp_t *hp, *new, *ad;

	hp = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hp;
		hp = new;

		ad = hp;

		while (ad->next != NULL)
		{
			ad = ad->next;
			if (head == ad->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hp);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	free_listp(&hp);
	return (nodes);
}
