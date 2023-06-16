#include <stdio.h>
/**
 * main - it prirnts the alphabet in lowercase,
 * followed by a new line 
 * except q and e
 *
 * Return: Always 0 (onyiego)
 */

int main(void)

{
	char alp = 'a';

	while (alp <= 'z')

	{
		if (alp != 'e' && alp != 'q')
	{

	putchar(alp);
	}

	alp++;

	}

	putchar('\n');

	return (0);
}

