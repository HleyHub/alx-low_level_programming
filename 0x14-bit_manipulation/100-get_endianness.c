#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int val = 1;
	char *endian_num = (char *)&val;

	if (*endian_num == 1)
		return (1);
	return (*endian_num);
}
