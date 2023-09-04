#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 *  POSIX standard output.
 * @filename: the name of the file
 * @letters: number of chars to read and print
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char buffer[READ_BUF_SIZE * 8];
	ssize_t b;
	int fd;

	if (!filename || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	b = read(fd, &buffer[0], letters);
	b = write(1, &buffer[0], b);
	close(fd);
	return (b);
}
