#include "main.h"
/**
 * _sqrt_recursion - functions return square root
 * @n: int parameter
 * Return: returns square rooot
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - swaure root of natural numbers
 * @n: integer paramtr
 * @i: integer parameter
 * Return: Return square root
*/
int _sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if ((i * i) > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
