#include <stdio.h>
/**
 * main - print all possble two digit ranging from 0-99
 *
 * Description: using the main function
 * this program prints "two digits from 0-99, that seperated
 * Return: 0
 */
int main(voi)
{
	int num1, num2;

	for (num1 = 0 ; num1 <= 98 ; num1++)
	{
		for (num2 = 0 ; num2 <= 99 ; num2++)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 == 98 && num2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

