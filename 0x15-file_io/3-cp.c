#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

#define READ_ERR "Error: Can't read from file %s\n"
#define WRITE_ERR "Error: Can't write to %s\n"
/**
 * main - check the code for Holberton School students.
 * @argc: num of args
 * @argv: args
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int fom, on, to_close, v, l;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	on = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (on == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
	fom = open(argv[1], O_RDONLY);
	if (fom == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
	while (1)
	{
		l = read(fom, buffer, 1024);
		if (l == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
		if (l > 0)
		{
			v = write(on, buffer, l);
			if (v == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		} else
			break;
	}
	to_close = close(fom);
	if (to_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fom), exit(100);
	to_close = close(on);
	if (to_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", on), exit(100);
	return (0);
}
