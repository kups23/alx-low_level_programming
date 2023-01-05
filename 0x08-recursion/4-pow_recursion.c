#include "main.h"

/**
 * _pow_recursion - function raises value to a power
 * @x: integer variable
 * @y: power raised
 * Return: returns value raised to a power
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
