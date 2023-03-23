#include "main.h"
#include <stdio.h>

void positive_or_negative(int n)
{
	if (n < 0)
	printf("%d is negative\n", n);
	else if (n > 0)
	printf("%d is positve\n", n);
	else
	printf("%d is zero\n", n);
}
