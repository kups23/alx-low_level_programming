#include "main.h"

/**
 * print_numbers - print numbers from 0-9
 *
 * Return: returns nothing 
*/
void print_numbers(void)
{
	int  num;
	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
