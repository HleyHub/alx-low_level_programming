#include "main.h"
/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: Natural squaral number
 * Return: -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (_natural_sqrt_recursion(n, 1));
	}
}

/**
 * _natural_sqrt_recursion - Function that uses recursion to
 * return the natural square root of a number
 * @n: Natural square number
 * @ind: index
 * Return: Square root of the number
 */
int _natural_sqrt_recursion(int n, int ind)
{
	if (ind * ind > n)
	{
		return (-1);
	}
	else if (ind * ind == n)
	{
		return (ind);
	}
	else
	{
		return (_natural_sqrt_recursion(n, ind + 1));
	}
}
