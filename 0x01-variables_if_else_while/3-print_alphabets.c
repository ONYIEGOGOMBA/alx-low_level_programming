#include <stdio.h>
/**
 * main - it prints the alphabets in lowercase and uppercase,
 * followed by a new line
 *
 * Return: always 0 (onyiego)
 *
 */
int main(void)

{
	int alp;
	
	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);
	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);
	putchar('\n');
	return (0);
}
