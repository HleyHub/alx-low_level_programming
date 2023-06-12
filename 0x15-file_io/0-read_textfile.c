#include "main.h"
#include <stdio.h>
/**
 * read_textfile - function that reads a text file and prints
 * it to the POSIX standard output
 * @filename: Name of the file to create
 * @letters: Number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_byte, write_byte;
	char *BUFF;
	FILE *file = fopen(filename, "r");

	if (filename == NULL)
		return (0);
	if (file == NULL)
		return (0);
	BUFF = (char *)malloc(sizeof(char) * (letters + 1));
	read_byte = fread(BUFF, sizeof(char), letters, file);
	write_byte = write(STDOUT_FILENO, BUFF, read_byte);
	free(BUFF);
	fclose(file);
	return(write_byte);
}
