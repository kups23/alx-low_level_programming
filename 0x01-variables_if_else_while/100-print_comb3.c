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
	
	for ( i = '0'; i <= '8'; i++)
	{
		for (j = '0'; j <= '9'; j++)
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
			}
		}
	}
	putchar('\n');
	return (0);
}
