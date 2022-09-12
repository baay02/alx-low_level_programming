#include <stdio.h>
/**
 * main - print all possible combinations of two different digits ascending order seperated by a comma follow by space
 *
 * Description: using the main functio 
 * this program prints "Two seperate number using comma and space
 * Return: 0
 */
int main(void)
{
	int digit1, digit2;

	for (digit = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 == 8 && digit2 == 9)
				continue;
			
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

