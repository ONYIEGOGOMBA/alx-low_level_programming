#include"main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int info;

	/*finds length of string without null character*/
	for (info = 0; s[info] != '\0'; ++info)
		;

	/*print the char from the last info as you decrement*/
	for (--info; info >= 0; --info)
		_putchar(s[info]);
	_putchar('\n');
}
