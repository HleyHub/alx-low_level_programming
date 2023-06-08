#include "main.h"
/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * @n: Number of bit
 * @index: Index starting from 0
 * Return: 1 if success or 0 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
