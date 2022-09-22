#include "main.h"

/**
 * rot13 - rot13 encoder
 * @str: string to be encoded
 *
 * Return: address of the encoded string
 */

char *rot13(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform_2(str[i]);
		i++;
	}
	return (str);
}

/**
 * transform_2 - helper function to map a letter with it's rot13 encording
 * @x: char to be encoded
 *
 * Return: the encoded char
 */
char transform_2(char x)
{
	char one[s2]
