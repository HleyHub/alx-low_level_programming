#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that prints the minimum number of coins to
 * make change for an amount of money
 * @argc: Count the number of arguments
 * @argv: Array of arguments
 * Return: 0 if the number passed as the argument is negative
 * and 1 if the number of arguments passed to your program
 * is not exactly 1
 */
int main(int argc, char *argv[])
{
	int ind, number;
	int coin_val[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	amount = 0;
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	for (ind = 0; ind < 5 && number >= 0; ind++)
	{
		while (number >= coin_val[ind])
		{
			amount++;
			number = number - coin_val[ind];
		}
	}
	printf("%d\n", amount);
	return (0);
}
