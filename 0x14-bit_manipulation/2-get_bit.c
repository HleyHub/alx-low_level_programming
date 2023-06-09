#include "main.h"
/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: Number
 * @index: Index
 * Return: Value of the bit at index index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
