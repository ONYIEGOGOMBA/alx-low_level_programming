#include "main.h"
/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 * Return: The given istructions
 *
 */
int _strcmp(char *s1, char *s2)
{
	int s = 0, d;

	while (s1[s] != '\0' && s2[s] != '\0')
	{

		if (s1[s] != s2[s])
		{
			d = s1[s] - s2[s];
			break;
		}
		else
		{
			d = s1[s] - s2[s];
		}
		s++;
	}
	return (d);
}
