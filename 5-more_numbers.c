#include "main.h"
/**
 * more_numbers -  it prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 */

void more_numbers(void)
{

	int num, digit;

	for(digit = 0; digit <= 9; digit++)
	{
		for (num = 0; num <= 9; num++)
		{
			if (num < 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
	}
	_putchar('\n');
}
