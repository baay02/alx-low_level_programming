#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * Return: sum all arguments
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i;
	int sum = 0;
	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);
	va_end(arguments);
	return (sum);
}

