#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point
 * print alphabet in reversse order
 *
 * Return: always return 0
*/
int main(void)
{
	int i;

	for (i = 'z'; i <= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
