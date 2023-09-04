#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: Name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 * Return: 1 if success or -1 if failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int wr, file, ind = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[ind] != '\0')
			ind++;
	}
	file = open(filename, O_WRONLY | O_APPEND);
	wr = write(file, text_content, ind);
	if (file == -1 || wr == -1)
		return (-1);
	close(file);
	return (1);
}
