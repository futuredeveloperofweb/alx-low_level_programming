#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make
 *  change for an amount of money
 *  @argc: argument counter
 *  @argv: argument vector
 *  Return: 0
 */
int main(int argc, char *argv[])
{
	int total, count;
	unsigned int i;
	char *p;
	int cent[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
		}
		else
		{
			total = strtol(argv[1], &p, 10);
			count = 0;
			if (!*p)
			{
				while (total > 1)
				{
					for (i = 0; i < sizeof(cent[i]); i++)
					{
						if (total >= cent[i])
						{
							count += (total / cent[i]);
							total = (total % cent[i]);
						}
					}
				}
			}
			if (total == 1)
				count++;
		}
	}
	return (0);
}
