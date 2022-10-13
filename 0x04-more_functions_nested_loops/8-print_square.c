#include "main.h"

/**
 * print_square - a function that peints a square, followed by new line
 * @size: size of both width and lenght
 * Return: a square made of '#'
 */

void print_square(int size)
{
	int co, ro;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= size; co++)
		{
			_putchar('#');
			for (ro = 2; ro <= size; ro++)
			{
				_putchar('#');
			}
			_putchar('\n');

		}
	}
}
