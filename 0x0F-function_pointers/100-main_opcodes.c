#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that prints its own opcodes
 * @argc: A number of arguments
 * @argv: Array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int bytes, ind = 0;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)&main;
	while (ind < bytes)
	{
		if (ind == bytes - 1)
		{
			printf("%02hhx\n", arr[ind]);
			break;
		}
		ind++;
		printf("%02hhx ", arr[ind]);
	}
	return (0);
}
