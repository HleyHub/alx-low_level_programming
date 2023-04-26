#include "main.h"

/**
 * positive_or_negative - Prints if an integer is positive or negative
 *
 * Return: 0
 */
int positive_or_negative(void)
{
	int i;

	if (i > 0)
	{
		srand(time(0));
		i = rand() - RAND_MAX / 2;
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (void);
}
