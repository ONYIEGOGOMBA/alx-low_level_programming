#include <stdio.h>
/**
 *
 * _isalpha - it  checks for alphabetic character.
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase
 * returns 1 otherwise
 *
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else

		return (0);

}
