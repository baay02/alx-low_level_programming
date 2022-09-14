#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers starting from 1 and2, seperated by a comma followed by space
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 2, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(",");
	}
	return (0);
}

