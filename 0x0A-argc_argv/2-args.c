#include <stdio.h>

/**
 * main - function prints all received arguments
 * @argc: The number of argument
 * @argv: An array of pointers to the arguments
 * Return: Always return 0
*/
int main(int argc, char *argv[])
{
	int arg;
	for (arg = 0; arg < argc; arg++)
	{
		printf("%s\n", argv[arg]);
	}
	return (0);
}
