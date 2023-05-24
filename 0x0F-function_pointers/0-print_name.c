#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - A function that prints a name
 * @name: Argument of the function
 * @f: Function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (!f || !name)
	{
		return;
	}
	f(name);
}
