#include "main.h"
/**
 * print_last_digit - It prints the last digit of a number.
 *
 * @n: The int to extract the last digit from
 *
 * Return: last value
 */

int print_last_digit(int n)
{

	int a = n % 10;

	if (n < 0)
		a *= -1;

	_putchar(a + '0');

	return (a);

}
