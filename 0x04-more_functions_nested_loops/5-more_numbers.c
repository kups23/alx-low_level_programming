#include "main.h"

/**
 * more_numbers -  print numbers 10 times 
 *
 * Return: returns nothing
*/
void more_numbers(void)
{
	int tme,num;
	tme = 0;

	while (tme < 10)
	{
		for (num =  '0'; num <= '14'; num++)
		{
			_putchar(num);
		}
		_putchar('\n');
		tme++;
	}
	_putchar('\n');
}
