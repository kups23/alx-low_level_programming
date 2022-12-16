#include "main.h"

/**
 * print_triangle - function  print triangle
 * @size: size of triangle
 *
 * Return: return nothing
*/
void print_triangle(int size)
{
	int i,j,k;
	j = size - 1;

	for (i = 0 ; i < size ; i++)
	{
		j = size - 1 - i;
		k = i + 1;
		while ( j > 0)
		{
			_putchar(' ');
			j--;
		}
		while (k > 0)
		{
			_putchar('#');
			k--;
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
