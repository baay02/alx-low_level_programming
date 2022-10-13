#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * Return: sum all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i = 0;
	int sum = 0;

	if (n != 0)
	{
		va_start(arguments, n);

		while (i < n)
		{
			sum += va_arg[arguments, int];
			i++;
		}
		va_end(arguments);
		return (sum);
	}
	return (0);
}

