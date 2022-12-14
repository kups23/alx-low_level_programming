#include "main.h"

/**
 * main - entry point
 * programs prints _putchar
 *
 * Return: always return (0)
*/
int main(void)
{
	char str[10] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar(10);
	return (0);
}	
