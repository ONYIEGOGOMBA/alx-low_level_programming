#ifndef LIST_H
#define LIST_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * @len: length of string
 * @str: malloc'ed string
 * @next: points to the next node
 * struct list_s - singly linked list
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}
list_t;
size_t print_list(const list_t *h);
#endif
