#include "function_pointers.h"

/**
 * print_name -prints name
 * @name: name to be printed
 * @f: callback function that prints name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

	f(name);
}

