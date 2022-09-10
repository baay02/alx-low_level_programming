#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print id the number is positive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: 0
 */
inr main(void)
{
	int n;
	int l;
	srand(time(0));
	l = n % 10;

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	if (l < 0)
	{
		printf("Last digiy of %d is %d and is less than 5\n", n, l);
	}
	return (0)
}

