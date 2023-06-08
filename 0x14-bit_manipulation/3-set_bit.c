#include "main.h"
/**
 * set_bit - A function that sets the value of a bit to 1 at a given index
 * @n: Number of bit
 * @indxe: Index starting from 0
 * Return: 1 if success or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n ^= 1 << index;
	return (1);
}
