#include "main.h"
/**
 * _isalpha - functionto check if c is a letter, lowercase or uppercase
 * @c: is the int that willuse for argument of the function
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	return (0);
}

