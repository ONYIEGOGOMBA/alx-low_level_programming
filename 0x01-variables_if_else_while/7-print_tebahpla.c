#include <stdio.h>
/**
 * main - it  prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0
 *
 */

int main(void)

{

	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)


	{

	putchar(alp);

	}

	putchar('\n');
	
	return (0);
}
