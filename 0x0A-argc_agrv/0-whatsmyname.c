#include <stdio.h>

/**
 * main - write a program that prints its name by a new line
 * if you rename the program, it would the new name, without having
 * to compile it again
 * the path shoul not be removed
 *
 * @argc: this the arguments count
 * @argv: this the arguments vector
 *
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
