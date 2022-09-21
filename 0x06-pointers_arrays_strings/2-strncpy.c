#include "main.h"

/**
 * _strncpy - C function that copies a string, includind the
 * terminating null byte, using at most an inputted number of bytes
 * If the lenght of the source string is less than maximum byte number,
 * the remainder of the destination string filled with null bytes.
 * Works identically to the standard library function 'strncpy'.
 * @dest: buffer storing the string copy
 * @src: the source string
 * @n: maximum number od byte copied
 * Return: returns
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

