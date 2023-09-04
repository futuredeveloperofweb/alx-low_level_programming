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
 * create_file - used to creat a file
 * @filename: the name of the file
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t b = 0;
	ssize_t length = _strlen(text_content);
	int fd;

	if (!filename)
	{
		perror("fails");
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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

