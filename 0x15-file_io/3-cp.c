#include "main.h"

#define PERMISSION (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - the main program
 * @ac: the args counter
 * @av: the args vector
 * Return: 1 on success, -1 otherwise
 */
int main(int ac, char **av)
{
	int f_fd = 0, t_fd = 0;
	ssize_t byte;
	char buffer[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "cp f_from f_to\n"), exit(97);
	f_fd = open(av[1], O_RDONLY);
	if (f_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]), exit(98);
	t_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSION);
	if (t_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while ((byte = read(f_fd, buffer, READ_BUF_SIZE)) > 0)
		if (write(t_fd, buffer, byte) != byte)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	if (byte == -1)
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", av[1]), exit(98);
	f_fd = close(f_fd);
	t_fd = close(t_fd);
	if (f_fd)
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", f_fd), exit(100);
	if (t_fd)
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", f_fd), exit(100);
	return (EXIT_SUCCESS);
}
