#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024
/**
 * read_textfile - reads and prints from a file
 * @filename: path to file
 * @letters: chars to read
 * Return: chars read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int bg = open(filename, O_RDONLY);

	ssize_t tbr = 0;
	char buffer[BUF_SIZE];
	ssize_t br, bw;

	if (filename == NULL)
		return (0);

	if (bg == -1)
		return (0);

	while ((br = read(bg, buffer, BUF_SIZE)) > 0)
	{
		bw = write(STDOUT_FILENO, buffer, br);
		if (bw != br)
		{
			close(bg);
			return (0);
		}
		tbr += br;

		if ((size_t)tbr >= letters)
			break;
	}
	close(bg);
	return (tbr);
}
