#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - A function that prints strings
 * @separator: First argument
 * @n: Second argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int ind = 0;
	char *str;

	va_start(list, n);
	while (ind < n)
	{
		str = va_arg(list, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator == NULL && ind < n - 1)
		{
			printf("%s", separator);
		}
		ind++;
	}
	va_end(list);
	printf("\n");
}
