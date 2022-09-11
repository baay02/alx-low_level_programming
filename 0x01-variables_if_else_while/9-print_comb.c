#include <stdio.h>
/**
 * main - print id the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "0, 1, 2, 3, 4, 5, 6, 7, 8, 9"
 * Return: 0
 */
int main(void)
{
	int b;

	for (b = 48; b <= 57; b++)
	{
		putchar(b);
		if (b != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

