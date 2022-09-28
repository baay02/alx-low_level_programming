#include "main.h"

/**
 * print_rev_recursion - write a function that reverse string
 * @s: rev string to be printed
 * Return: Return 0
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

