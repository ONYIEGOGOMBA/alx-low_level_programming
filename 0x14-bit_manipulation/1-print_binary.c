#include "main.h"

void _putchar(char c);
/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int
 * Return: binary
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	return;
	}
	unsigned long int mas = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int start = 0;

	while (mas > 0)
	{
		if (n & mas)
		{
			start = 1;
			_putchar('1');
		}
		else if (start)
		{
			_putchar('0');
		}
		mas >>= 1;
	}
}
