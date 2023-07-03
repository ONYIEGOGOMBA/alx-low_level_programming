#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of byte
 *
 * @s: pointer to input string
 * @accept: pointer to string we searching for in @s
 *
 * Return: pointer to the bytes in @s or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int x, y;

	x = 0;
	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0')
		{
			if (s[x] == accept[y])
				return (s + x);
			y++;
		}
		x++;
	}
	return ('\0');
}
