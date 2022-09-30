#include "main.h"

/**
 *_strcat - concatenates the string pointed to by @scr to
 * the end of the string pointed by @dest
 * @dest: The destination string that will be appended
 * @src: source string to be concatenated upon
 *
 * Return: A pointer to a resulting string @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);

}

