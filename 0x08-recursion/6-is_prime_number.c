#include "main.h"
/**
 * is_prime_number - Function that returns 1 if the input
 * integer is a prime number, otherwise return 0
 * @n: Prime number
 * Return: 1 if prime number and 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_natural_prime_number(n, n - 1));
}
/**
 * _natural_prime_number - Use recusion to tell if number is prime
 * @n: Prime number
 * @ind: index iterator
 * Return: 1 if prime number and 0 if not
 */
int _natural_prime_number(int n, int ind)
{
	if (ind == 1)
	{
		return (1);
	}
	if (n % ind == 0 && ind > 0)
	{
		return (0);
	}
	return (_natural_prime_number(n, ind - 1));
}
