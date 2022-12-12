#include <stdio.h>
#include <unistd.h>

/**
 * main - entry point 
 * Print alphabet in both lower and upper case
 *
 * Return: alwasy 0
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{	
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
