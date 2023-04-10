#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers.
 * @argc: argument counter
 * @argv: argument vector
 * Return:0
 */
int main(int argc, char *argv[])
{
	int i, n, sum = 0;
	char *flag;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			n = strtol(argv[i], &flag, 10);
			if (*flag)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += n;
			}
		}
		printf("%d\n", sum);
	}
	else
		printf("0\n");
	return (0);
}

