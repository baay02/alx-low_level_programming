#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the lenght of a string
 * @s: string s
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	int lenght = 0;

	while (*s)
	{
		s++;
		lenght++;
	}
	return (lenght);
}

/**
 * _strdup - returns pointer ti a newly allocated soace in a memory.
 * which contains a copy of the string given as a parameter
 * @str: string to be copied
 * Return: cooy of a string
 */
char *_strdup(char *str)
{
	char *copy, *_copy;

	if (!str)
		return (NULL);
	copy = malloc((_strlen(str) + 1) * sizeof(char));
	/* if there is inssufient memory*/
	if (!copy)
		return (NULL);
	_copy = copy;

	while (*str)
	{
		*_copy = *str;
		str++;
		*_copy++;
	}
	*_copy = '\0';
	return (copy);
}

