#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - A function that prints numbers
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int ind = 0;
	int num;

	va_start(list, n);
	while (ind < n)
	{
		num = va_arg(list, int);
		printf("%d", num);
		if (separator == NULL)
		{
			continue;
		}
		if (ind < n - 1)
		{
			printf("%s", separator);
		}
		ind++;
	}
	va_end(list);
	printf("\n");
}
