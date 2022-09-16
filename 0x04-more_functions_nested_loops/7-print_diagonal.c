#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return: returns nothing
 */

void print_diagonal(int n)
{

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, i;

		for (k = 0; k < n; k++)
		{
			for (i = 0; i < n; i++)
			{
				if (k == i)
					_putchar('\\');
				else if (i < k)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

