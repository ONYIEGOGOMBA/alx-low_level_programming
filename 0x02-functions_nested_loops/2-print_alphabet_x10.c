#include "main.h"
/**
 * print_alphabet_x10 - it  prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Always returns 0
 *
 */

void print_alphabet_x10(void)

{

	int num = 0;

	char alp;

	while (num < 10)

	{
		alp = 'a';

		while (alp <= 'z';)
		{
			_putchar(alp);
		num++
		}

		_putchar('\n');

		alp++

	}

}
