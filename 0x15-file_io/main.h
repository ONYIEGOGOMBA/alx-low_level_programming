#ifndef IO_
#define IO_

#include <stddef.h>

int _putchar(int c);
ssize_t read_textfile(const char *filename, size_t letters);
void *custom_malloc(size_t size);
void custom_free(void *ptr);
void custom_exit(int status);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
