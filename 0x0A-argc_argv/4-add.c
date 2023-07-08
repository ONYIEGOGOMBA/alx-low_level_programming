#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int b, g, me = 0;

	for (b = 1; b < argc; b++)
	{
		for (g = 0; argv[b][g] != '\0'; g++)
		{
			if (!isdigit(argv[b][g]))
			{
				printf("Error\n");
				return (1);
			}
		}
		me += atoi(argv[b]);
	}
	printf("%d\n", me);
	return (0);
}
