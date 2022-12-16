#include <stdio.h>
#include <math.h>

/**
 * main - entry point
 * find and print largest factor
 * Return: returns 0
*/
int main(void)
{
	int i;
	long num = 612852475143;

		for (i = (int) sqrt(num); i > 2; i++)
		{
			if (num % i == 0)
			{
				printf("%d\n", i);
				break;
			}
		}

	  	return (0);
}
