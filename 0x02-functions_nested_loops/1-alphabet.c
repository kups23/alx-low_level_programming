#include "main.h"

/**
 * print_alphabet function  prints  lowercase
 *
 * Return: function does not return
*/
void print_alphabet(void)
{
	int ltr;

	for (ltr = 'a'; ltr <= 'z'; ltr++)
	{
		_putchar(ltr);
	}
	_putchar(10);

}
