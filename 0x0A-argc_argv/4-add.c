#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Program that adds positive numbers
 * @argc: Count the number of arguments
 * @argv: Array of arguments
 * Return: 0 if no number is passed and 1 if the number
 * contains symbols that are not digits
 */
int main(int argc, char *argv[])
{
	int num1, num2, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (num1 = 1; num1 < argc; num1++)
	{
		char *arg = argv[num1];
		int no_symbol = 1;

		for (num2 = 0; arg[num2] != '\0'; num2++)
		{
			if (!isdigit(arg[num2]))
			{
				no_symbol = 0;
				break;
			}
		}
		if (no_symbol)
		{
			sum = sum + atoi(arg);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
