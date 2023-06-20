#include "main.h"
/**
 *
 * _isalpha - it  checks for alphabetic character.
 *
 * @c: The checked character
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase
 * returns 1 otherwise
 *
 */

int _isalpha(int c)

{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
}
