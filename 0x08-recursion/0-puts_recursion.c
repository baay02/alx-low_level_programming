#include "main.h"

/**
 * _puts_recursion - write a function that prints  string followed by new line
 * @s: string to be printed
 * Return: Return 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}

