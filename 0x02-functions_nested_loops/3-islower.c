#include "main.h"
/**
 * _islower - it checks for lowercase character.
 *
 * Return: returns 1 when if c is lowercase and 0 otherwise.
 *
 */

int _islower(int c)

{
	int c;

	if (c >= 'a' && c <= 'z')

		return (1);

	else

		return (0);

}
