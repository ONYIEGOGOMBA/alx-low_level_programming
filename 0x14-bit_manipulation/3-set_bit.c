#include "main.h"
/**
 * set_bit - set bit to 1 at index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	unsigned long int mas = 1UL << index;

	*n = *n | mas;
	return (1);
}
