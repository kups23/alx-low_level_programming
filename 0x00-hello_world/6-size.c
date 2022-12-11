#include <stdio.h>

/**
 * main - entry point
 * prints the size of various types
 *
 * Return: always return 0
*/
int main(void)
{
	char c;
	int i;
	long int li;
	long long int lLi;
	float f;
	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long  int: %lu byte(s)\n", sizeof(li));
	printf("Size of an long long int: %lu byte(s)\n", sizeof(lLi));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
