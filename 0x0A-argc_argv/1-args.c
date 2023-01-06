#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: The number of arguments in the program
 * @argv: An array of pointers to the arguments
 * Return: Always returns 0
*/
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
