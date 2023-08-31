#include "main.h"
/**
 * clear_bit - clears bit
 * @n: unsigned int long
 * @index: unsigned int
 * Return: Return -1 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mass = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	*n = *n & (~mass);
	return (1);
}
