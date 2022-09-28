#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: inputed number
 * Return: return factorial if sucess
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

