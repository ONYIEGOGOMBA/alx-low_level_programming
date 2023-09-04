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
	int form, tor, fd_from, b, g;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	tor = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (tor == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
	form = open(argv[1], O_RDONLY);
	if (form == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
	while (1)
	{
		g = read(form, buffer, 1024);
		if (g == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);
		if (g > 0)
		{
			b = write(tor, buffer, g);
			if (b == -1)
				dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
		} else
			break;
	}
	fd_from = close(form);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", form), exit(100);
	fd_from = close(tor);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", tor), exit(100);
	return (0);
}
