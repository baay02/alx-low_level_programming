#include <stdio.h>

/**
 * main - print all arguments it recieves
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 if no error
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}

