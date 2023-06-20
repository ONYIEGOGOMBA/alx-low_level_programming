#include "main.h"
/**
 * print_alphabet - it prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Always 0
 *
 */

void print_alphabet(void)

{

	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)

		_putchar(alp);

	_putchar('\n');

}
