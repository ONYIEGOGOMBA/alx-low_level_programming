#include "main.h"
/**
 * flip_bits - Counts the number of bits needed to be
 * flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 * Return: The necessary number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int reff = n ^ m;
	unsigned int nut = 0;

	while (reff != 0)
	{
		nut += reff & 1;
		reff >>= 1;
	}

	return (nut);
}
