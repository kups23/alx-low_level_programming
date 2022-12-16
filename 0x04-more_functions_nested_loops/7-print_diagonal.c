#include "main.h"
/**
 * *print_diagonal - function  prints a diagonal
 * *@n:parameter
 * *Return:returns nothing
 * */
void print_diagonal(int n)
{
	int len, s;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (s = 0; s < len; s++)
				_putchar(' ');

			_putchar('\\');

			if (len == (n - 1))
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
