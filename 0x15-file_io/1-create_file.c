#include "main.h"

/**
 * create_file - A function that creates a file
 * @filename: Name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 if success or -1 if failure
 */
int create_file(const char *filename, char *text_content)
{
	int wr, file, ind = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[ind] != '\0')
			ind++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(file, text_content, ind);
	if (file == -1 || wr == -1)
		return (-1);
	close(file);
	return (1);
}
