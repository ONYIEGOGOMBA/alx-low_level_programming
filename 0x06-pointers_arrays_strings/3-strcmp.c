#include "main.h"
/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string 1 input to compare
 * @s2: against this other string 2
 *
 * Return: as instructed
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, r;
	while (s1[i] != '\0' && s2[i] != '\0')

		{
			if (s1[i] != s2[i])
			{
				r = s1[i] - s2[i];
				break;
			}

			else
			{
				r = s1[i] - s2[i];
			}

			i++;
		}

	return (r);
}
