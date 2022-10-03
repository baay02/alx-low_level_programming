#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns lenght of a string
 * @s: lenght of string s
 * Return: lenght of a string
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
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second sring
 * Return: concatenates string
 */
char *str_concat(char *s1, char *s2)
{
	char *cat, *_cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 == "";
	cat = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);
	if (!cat)
		return (NULL);
	_cat = cat;
	while (*s1)
	{
		*_cat = *s1;
		_cat++;
		s1++;
	}
	while (*s2)
	{
		*_cat = *s2;
		_cat++;
		s2++;
	}
	*_cat = '\0';
	return (cat);
}


