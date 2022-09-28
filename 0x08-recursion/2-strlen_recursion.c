#include "main.h"

/**
 * strlen_recursion - write a function that return the lenght of string
 * @s: string input
 * Return: lenght of s
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	return (1 + _strlen_recursion(++s));
}

