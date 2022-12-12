#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * print combination of two digit
 * ranging from 00 to 99
 *
 * Return: always return 0
*/
int main(void)
{
	int i,j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if ( i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}	
