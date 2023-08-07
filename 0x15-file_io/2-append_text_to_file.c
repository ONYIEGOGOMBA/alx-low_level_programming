#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - apends text to file
 * @filename: path to file
 * @text_content: content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int bg = open(filename, O_WRONLY | O_APPEND);

	ssize_t tl = 0;
	ssize_t bw = write(bg, text_content, tl);

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	if (bg == -1)
		return (-1);

	while (text_content[tl] != '\0')
		tl++;

	close(bg);

	if (bw != tl)
		return (-1);

	return (1);
}
