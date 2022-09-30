#include "main.h"

/**
 * _strpbrk - match any character specified
 * @s: this is a C string to be scanned
 * @accept: character in str1 that matches one of the character in str2
 * Return: str s that matches any character specified accept
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (*s == accept[k])
			{
				return (s);
			}
			k++;
		}
		s++;
	}
	return (0);
}

