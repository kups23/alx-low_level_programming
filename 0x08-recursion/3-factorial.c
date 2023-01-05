#include "main.h"

/**
 * factorial - factorial of n
 * @n: inter number 
 * Returns: returns -1 or 1 or factorial
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
