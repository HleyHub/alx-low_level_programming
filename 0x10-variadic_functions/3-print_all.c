#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - A function that prints anything
 * @format: Types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i, check_format, ind = 0;
	char c, *string;
	float f;

	va_start(list, format);
	while (format[ind])
	{
		if (format[ind] == 'c')
		{
			c = (char)va_arg(list, unsigned int);
			printf("%c", c);
			check_format = 1;
		}
		else if (format[ind] == 'i')
		{
			i = va_arg(list, unsigned int);
			printf("%d", i);
			check_format = 1;
		}
		else if (format[ind] == 'f')
		{
			f = (float)va_arg(list, double);
			printf("%f", f);
			check_format = 1;
		}
		else if (format[ind] == 's')
		{
			string = va_arg(list, char *);
			if (string == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", string);
			}
			check_format = 1;
		}
		if (format[ind + 1] != '\0' && check_format)
		{
			printf(", ");
			check_format = 0;
		}
		ind++;
	}
	va_end(list);
	printf("\n");
}
