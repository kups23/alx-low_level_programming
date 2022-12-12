#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * print hexadecimal number in lower case
 *
 * Return: always return 0
*/
int main(void)
{
	char i;
	char j;

	for (i = '0'; i < '10'; i++)
	{
		putchar(i);
	}

	j = 'a';
	
	while (j <= 'f')
	{
		putchar(j)
		j++;
	}
	putchar('\n');
	return (0);
}
