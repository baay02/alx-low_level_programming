#include "main.h"

/**
 * isdigit - checks whether a character is adigit or not
 * @c: tested character
 * Return: 0 if it is, 0 otherwise
 */

int _isdigit(int c)
{
	if ((c >= 48 ) && (c <= 58))
	{
		return (1);
	}
		return (0);
}

