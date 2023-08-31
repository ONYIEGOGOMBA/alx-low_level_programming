#include "main.h"
/**
 * set_bit - sets the bit
 * @n: unsigned long int
 * @index: unsigned int
 * Return: Return -1 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mass = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	*n = *n | mass;
	return (1);
}
