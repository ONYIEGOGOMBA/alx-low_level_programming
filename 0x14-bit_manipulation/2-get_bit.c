#include "main.h"
/**
 * get_bit - get bit at index
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mas = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n & mas) != 0);
}
