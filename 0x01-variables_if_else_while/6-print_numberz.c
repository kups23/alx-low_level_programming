#include <stdio.h>
#include <unistd.h>

/**
 * main -  entry point
 * print base 10 numbers
 *
 * Return: always return 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
