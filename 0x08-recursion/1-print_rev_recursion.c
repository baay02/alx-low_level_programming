#include "main.h"

/**
 * _print_rev_recursion - write a function that reverse string
 * @s: rev string to be printed
 * Return: Return *s
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

