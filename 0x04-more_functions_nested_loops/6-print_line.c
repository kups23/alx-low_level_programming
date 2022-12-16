#include "main.h"

/**
 * print_line - function prints line
 * @n: parameter to be used
 *
 * Return: returns nothing 
*/
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
