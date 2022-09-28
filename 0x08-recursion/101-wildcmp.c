#include "main.h"

/**
 * wildcmp - compares two strings and return 1 if the strings can be
 * considered, otherwise return 0
 * @s1: input string 1
 * @s2: input string 2
 * Return: 1 if is true, 0 if false
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
			return (wildcmp(s1, s2 + 1));
		return (*s2 == '\0');
	}
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}


