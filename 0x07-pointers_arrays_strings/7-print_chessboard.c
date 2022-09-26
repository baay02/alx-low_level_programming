#include "main.h"

/**
 * print_chessboard - print chess board, 2d array
 * @a: 2d array character
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar (a[i][j]);
			j++;
		}
		_putchar ('\0');
		i++;
	}
}


