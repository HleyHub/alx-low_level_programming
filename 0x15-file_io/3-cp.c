#include "main.h"
#include <stdio.h>
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
	int from, to;
	ssize_t rbyte, wbyte;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	rbyte = read(from, buffer, sizeof(buffer));
	to = open(argv[2], O_CREAT | O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while (rbyte > 0)
	{
		if (from == -1 || rbyte == -1)
		{
			close(from), close(to);
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wbyte = write(to, buffer, rbyte);
		if (to == -1 || wbyte == -1)
		{
			close(from), close(to);
			dprintf(STDERR_FILENO, "Error: Failed to write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (wbyte != rbyte)
	{
		close(from), close(to);
		dprintf(STDERR_FILENO, "Error: Failed to write to %s\n", argv[2]);
		exit(99);
	}
	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (0);
}
