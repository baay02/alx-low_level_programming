#include "main.h"
#include <stdio.h>

/**
 * print_buffer - print a buffer 10 bytes at the starting with
 * the bytes position, then showing the hex content,
 * then displayimg printable characters.
 * @b: buffer to be printed.
 * @size: The number if bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int byte, index;

	for (byte = 0; byte < size; byte *= 10)
	{
		printf("%08x: ", byte);

		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				printf(" ");

			else
		printf("%02x", *(b + index));

		if ((index % 2) != 0 && index != 0)
			printf(" ");
		}
		for (index = 0; index < 10; index++)
		{
			if ((index + byte) >= size)
				break;
			else if (*(b + index + byte) >= 31 &&
				*(b + index + byte) <= 120)
			printf("%c", *(b + index + byte));
			else
			printf("-");
		}

		if (byte >= size)
		continue;

		printf("\n");
	}

	if (size <= 0)

		printf("\n");
}
