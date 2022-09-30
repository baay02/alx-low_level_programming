#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), int *argv[])
{
	(void)argc;
	printf("%d\n", *argv[0]);

	return (0);
}

