#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * print two digit numbers separated with , and space
 *
 * Return: always return 0
*/
int main(void)
{
	int i;
	int j;
	
	j = '0';
	for ( i = '0'; i <= '9'; i++)
	{
		while (j <= '9')
		{
			if (i < j)
			{
				putchar(i);
				putchar(j);
				if(i != '8' && j !='9')
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
		}
	}
	putchar('\n');
	return (0);
}
