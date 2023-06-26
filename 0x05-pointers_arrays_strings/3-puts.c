#include "main.h"
/**
 * _puts - prints a string, followed by a newline.
 *
 * @str: string parameter to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0' str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
