#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On sucess 1.
 * On error, -1 is required, and err no set appro.
 */

 int _putchar(char c)
{
	return (write(1, &c, 1));
}

