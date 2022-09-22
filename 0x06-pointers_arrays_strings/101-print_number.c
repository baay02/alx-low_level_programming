#include "main.h"
#include <stdio.h>

/**
 * print_number - prints an integer
 * @n: integer to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		putchar('-');
		n *= -1;
	}

	x = n;

	if (x / 10)
		print_number(x / 10);

	putchar(x % 10 + '0');
}

