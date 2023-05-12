#include <stdio.h>
/**
 * main - Program that prints all arguments it receives
 * @argc: Count the number of arguments
 * @argv: Array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int ind;

	for (ind = 0; ind < argc; ind++)
	{
		printf("%s\n", argv[ind]);
	}
	return (0);
}
