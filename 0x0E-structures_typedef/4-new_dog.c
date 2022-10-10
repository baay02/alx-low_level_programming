#include "dog.h"
/**
 * _strdup - returns pointer to space in memory copy of string.
 * @s: pointer to be string
 * Return: pointer to a string stored in memory
 */
char *_strdup(char *s)
{
	char *dup;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s == NULL)
		return (NULL);
	/* get rhe lenght of string */
		while (s[i] != '\0')
			i += 1;
	/*+1 to include the terminating chars in size*/
			i++;

		dup = malloc(i * sizeof(*dup));
		if (dup == NULL)
			return (NULL);
		while (j < i)
		{
			dup[j] = s[j];
				j++;
		}
		return (dup);
}

