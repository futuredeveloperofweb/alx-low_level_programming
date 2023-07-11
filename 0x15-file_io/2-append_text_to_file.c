#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - appends text to an existing file
 * @filename: name of the file
 * @text: the text
 * Return: 1 on success, 0 otherwize
 */
int append_text_to_file(const char *filename, char *text)
{
	int fd;
	ssize_t bytes = 0, len = _strlen(text);

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (len)
		bytes = write(fd, text, len);
	close(fd);
	return (bytes == len ? 1 : -1);
}
