#include "main.h"

/**
 * _strcat - concatenates the string pointed to by @scr to
 * the end of the string pointed by @dest
 * @dest: string that will be appended
 * @scr: string to be concatenated upon
 *
 * Return: returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[dest++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);

}

