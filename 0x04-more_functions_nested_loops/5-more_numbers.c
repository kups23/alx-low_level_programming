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
		for (num =  0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar(10);
		tme++;
	}
}
