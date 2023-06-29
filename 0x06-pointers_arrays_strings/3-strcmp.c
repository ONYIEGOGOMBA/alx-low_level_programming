#include "main.h"
/**
 * _strcmp - a function that compares two strings
 *
 * @s1: string 1 input to compare
 * @s2: against this other string 2
<<<<<<< HEAD
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
=======
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
>>>>>>> 9833842b25daa5e3265515be1bc7dbebc4d5e179
}
