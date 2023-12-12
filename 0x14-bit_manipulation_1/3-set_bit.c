#include "main.h"
/**
 * set_bit - set bit to 1 at index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int numb = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	numb <<= index;
	*n = *n | numb;
	return (1);
}
