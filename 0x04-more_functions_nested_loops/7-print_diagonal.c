#inlcude "main.h"

/**
 * print_diagonal - function prints diagonal
 * @n: parameter to be used
 *
 * Return: returns nothing
*/
void print_diagonal(int n)
{
	int sp,len;

	sp = 0;

	while (n  > 0)
	{
		len = sp;
		while (len > 0)
		{
			_putchar(' ');
			len--;
		}
		_putchar('\\');
		_putchar('\n');
		sp++;
		n--;
	}
	if (sp < 1)
	{
		_putchar('\n');
	}
}
	
