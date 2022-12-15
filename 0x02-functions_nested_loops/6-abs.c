#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * Return: always return value of targeted or 0
*/
int _abs(int i)
{
	if (i > 0)
	{
		return (i);
	}
	else if (i < 0)
	{
		return (-i);
	}
	else 
	{
		return (0);
	}
}
