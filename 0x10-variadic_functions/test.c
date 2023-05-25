#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - A function that returns the sum of all its parameters
 * @n: Argument of the function
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int ind = 0;
	int result = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);

	while (ind < n)
	{
		result = result + va_arg(list, const unsigned int);
		ind++;
	}
	va_end(list);
	return (result);
}
