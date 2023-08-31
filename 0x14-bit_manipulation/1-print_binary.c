#include "main.h"
/**
 * print_binary - It prints the binary
 * @n: unsigned long
 * Return: Returns nothing
 */
void print_binary(unsigned long n)
{
	unsigned long int mass = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int start = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mass > 0)
	{
		if (n & mass)
		{
			start = 1;
			_putchar('1');
		}
		else if (start)
		{
			_putchar('0');
		}
		mass >>= 1;
	}
}
