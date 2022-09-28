#include "main.h"

/**
 * _pow_recursion - write function that returns value of x^y
 * @x: number of square
 * @y: power of x to be squared
 * Return: return result of x**y
 */

int _pow_recursion(int x, int y)
{
	if (y >= 0)
	{
		if (y == 0)
			return (1);
		return (x * _pow_recursion(x, y - 1));
	}
		else
			return (-1);

}

