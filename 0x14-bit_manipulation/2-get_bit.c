#include "main.h"
/**
 * get_bit - starts the code
 * @n: unsigned int long
 * @index: unsigned int
 * Return: returns -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mass = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	return ((n & mass) != 0);
}
