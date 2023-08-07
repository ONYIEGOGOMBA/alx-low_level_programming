#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUF_SIZE 1024

void print_error(const char *message, const char *filename)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);

	int fd_from = open(file_from, O_RDONLY);
	char buffer[BUF_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		print_error("Usage: %s file_from file_to\n", argv[0]);
	}

	if (fd_from == -1)
	{
		print_error("Error: Can't read from file %s\n", file_from);
	}

	if (fd_to == -1)
	{
		print_error("Error: Can't write to %s\n", file_to);
	}


	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			print_error("Error: Can't write to %s\n", file_to);
		}
	}

	if (bytes_read == -1)
	{
		print_error("Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(EXIT_FAILURE);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(EXIT_FAILURE);
	}

	return (0);
}
