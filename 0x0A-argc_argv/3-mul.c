#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that multiplies two numbers
 * @argc: Count the number of arguments
 * @argv: Array of arguments
 * Return: 1 if there are no two arguments
 */
int main(int argc, char *argv[])
{
	int num1, num2, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}