#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int b;

	for (b = 0; b < argc; b++)
		printf("%s\n", argv[b]);
	return (0);
}
