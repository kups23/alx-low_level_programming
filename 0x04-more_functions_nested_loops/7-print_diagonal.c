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

	if(n > 0)
	{
		for (len = 0 ; len  < n; len++)
		{
			for (sp = 0; sp < len; sp++)
			{
				_putchar(' ');
			}
			_putchar('\\');

			if (len == (n - 1 ))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
	
