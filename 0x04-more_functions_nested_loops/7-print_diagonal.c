#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints a diagonal
 * @n: parameter
 * Return: returns nothing
 */

void print_diagonal(int n)
{
	int l, sp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (l = 1; l <= n; l++)
		{
			for (sp = 1; sp <= l; sp++)
			{
				_putchar(' ');
			}

			putchar('\\');

			if (l == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}

