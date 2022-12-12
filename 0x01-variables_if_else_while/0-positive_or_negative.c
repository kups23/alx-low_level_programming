#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - first entry point
 * Print out random number and perform taks with them
 * 
 * Return: always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf ("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf ("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf ("%d is negative\n",n);
	}
	return (0);
}
