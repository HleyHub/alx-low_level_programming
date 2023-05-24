#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - A function that uses a function pointer to prints a name
 * @name: Argument of the function
 * @f: Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
