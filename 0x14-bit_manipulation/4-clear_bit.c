#include "main.h"
/**
 * clear_bit - Clear bit to 0 at a given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mas = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);

	*n = *n & (~mas);
	return (1);
}
