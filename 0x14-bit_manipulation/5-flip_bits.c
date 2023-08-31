#include "main.h"
/**
 * flip_bits - flips bits
 * @n: Unsigned long int
 * @m: Unsigned long int
 * Return: Return con
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif = n ^ m;
	unsigned int con = 0;

	while (dif != 0)
	{
		con += dif & 1;
		dif >>= 1;
	}
	return (con);
}
