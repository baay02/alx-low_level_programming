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
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
  /* the code goes there */
if (n > 0)
{
	printf("%l is positive\n", n);
}
else if (n == 0)
	printf("%l is zero\n", n);

else if (n < 0)
{
	printf("%l is negative\n", n);
}
	return (0);
}
