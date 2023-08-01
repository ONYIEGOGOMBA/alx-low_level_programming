#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: point to the next node
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	struct listinit_s *next;
}
listint_t;

size_t print_listint(const listint_t *h);

#endif
