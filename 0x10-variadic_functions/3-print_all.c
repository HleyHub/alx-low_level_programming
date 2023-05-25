#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - A function that prints anything
 * @format: Types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list lists;
	int ind = 0;
	char *string, *separator = "";

	va_start(lists, format);
	if (format)
	{
		while (format[ind])
		{
			switch (format[ind])
			{
				case 'c':
					printf("%s%c", separator, va_arg(lists, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(lists, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(lists, double));
					break;
				case 's':
					string = va_arg(lists, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					ind++;
					continue;
			}
			separator = ", ";
			ind++;
		}
	}
	printf("\n");
	va_end(lists);
}
