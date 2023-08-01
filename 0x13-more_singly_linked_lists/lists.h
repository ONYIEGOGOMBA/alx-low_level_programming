#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

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
}listint_t;

typedef struct listp_s
{
	void *p;
	struct listp_s *next;
}listp_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
#endif
