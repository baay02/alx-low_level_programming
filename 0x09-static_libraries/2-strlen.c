#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string
 * Return: teturns the lenght as integer;
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}


