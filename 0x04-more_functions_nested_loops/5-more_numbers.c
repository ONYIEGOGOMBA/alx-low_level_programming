#include "main.h"
/**
 * more_numbers - Prints the numbers 0-14 ten times.
 */
void more_numbers(void)
{

	int num, digit;

	for (digit = 0; digit <= 9; digit++)
	{

	for (num = 0; num <= 9; num++)
	{

	if (num < 9)

		_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
	}
	_putchar('\n');
	}
}
