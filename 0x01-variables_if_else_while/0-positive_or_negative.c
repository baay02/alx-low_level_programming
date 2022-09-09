#include <stdio.h>

/**
* main - print a random number and states whether it is positive, negative or zero
*
* Return: Always 0.
*/
int main(void)
{

	int n;
	n = rand() - RAND_MAX / 2;
	
	if ( n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("% is zero\n", n);
	return (0)
}
