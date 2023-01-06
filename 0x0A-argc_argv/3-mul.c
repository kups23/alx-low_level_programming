#include <stdio.h>
#include <stdlib.h>

/**
 *  main - function multiplies two numbers and print the result
 *  @argc: The numbers to be multiplied
 *  @argv: An array of pointers to the arguments
 *  Return: Returns 0 or 1
*/
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
