#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet letters
 * print it 10 times
 * return: returns nothing 
*/
void print_alphabet_x10(void)
{
	int counter, letters;

	for (counter = 0; counter < 10; counter++)
	{
		for (letters = 'a';  letters <=  'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar(10);
	}
}
