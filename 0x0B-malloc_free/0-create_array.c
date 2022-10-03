#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array if characters
 * and intialize it with a specific character
 * @size: size of array
 * @c: character array to fill with
 * Return: string of characters
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (!size || !ptr)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}

