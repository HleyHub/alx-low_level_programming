#include <stdio.h>
/**
 * main - Program that prints the number of arguments passed into it
 * @argc: Count the number of arguments
 * @argv: Array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
