#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @str: the string who's length to calculate
 * Return: the length of the string, 0 otherwise
 */
int _strlen(char *str)
{
	int i;

	if (!str)
		return (0);
	for (i = 0; *str++; i++)
		;
	return (i);
}


/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file to append to
 * @text_content: the string to append to the file
 * Return: 1 on success and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t b = 0;
	ssize_t length = _strlen(text_content);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (length)
		b = write(fd, text_content, length);
	close(fd);
	if (b == length)
		return (1);
	else
		return (-1);
}
