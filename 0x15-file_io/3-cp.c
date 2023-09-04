#include "main.h"

/**
 * main - A function that copies the contents of a file to another file
 * @argc: Count the number of arguments
 * @argv: Array of arguments
 * Return: 0
 * Description: If the argument count is incorrect - exit code 97
 *		If file_from does not exist or cannot be read - exit code 98
 *		If file_to cannot be created or written to - exit code 99
 *		If file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int from, to, a, rbyte, wbyte;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	rbyte = open(argv[1], O_RDONLY);
	if (rbyte < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wbyte = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((from = read(rbyte, buffer, BUFSIZ)) > 0)
	{
		if (wbyte < 0 || write(wbyte, buffer, from) != from)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(rbyte);
			exit(99);
		}
	}
	if (from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	to = close(rbyte);
	a = close(wbyte);
	if (to < 0 || a < 0)
	{
		if (to < 0)
			dprintf(STDERR_FILENO, "Error: Can't close file %d\n", rbyte);
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close file %d\n", wbyte);
		exit(100);
	}
	return (0);
}
