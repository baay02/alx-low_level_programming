#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
int main(void)
{
	char low;

	for (low = 'a' ; low <= 'z' ; low++)
		putchar(low);
	for (low = 'A' ; low <= 'Z' ; low++)
		putchar(low);
		putchar('\n');
		
	return (0);
}

