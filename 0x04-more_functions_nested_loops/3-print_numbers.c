#include <stdio.h>
#include "main.h"

/**
 * print_numbers - funvtion that print all number from
 * 0 to 9
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}

