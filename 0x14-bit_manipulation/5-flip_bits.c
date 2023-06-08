#include "main.h"
/**
 * flip_bits - A function that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: First unsigned number
 * @m: Number to use for flipping
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int op, nbits;

	nbits = 0;
	op = n ^ m;
	for (; op > 0;)
	{
		nbits += (op & 1);
		op >>= 1;
	}
	return (nbits);
}
