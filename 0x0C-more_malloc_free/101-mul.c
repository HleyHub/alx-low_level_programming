#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Program that multiplies two positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (!isdigit(num1) && !isdigit(num2))
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
	}
	printf("%d\n", mul);
	return (0);
}
