#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Desceiption: using the main function
 * this program prints "Programming is posirive, zero, or negative
 * Return: 0
 */
int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;

	if (l > 0)
	{
		printf("Last digit of %d is %d and greater than 5\n", n, l);
	}
	else if (l == 0)
		printf("Last digit of %d is %d is 0\n", n, l);
	else
	{
		printf("Last digiy of %d js %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}

