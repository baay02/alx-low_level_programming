#include "main.h"

/**
 * isSqrt - helper  function of natural square root of a number
 * @n: square input number
 * @i: iterator
 * Return: returns square root of a number
 */

int isSqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == 0)
		return (1);
	return (isSqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function that  returns natural  square root
 * @n: input number
 * Return: square root of number, -1 if false
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (isSqrt(n, 1));
}

