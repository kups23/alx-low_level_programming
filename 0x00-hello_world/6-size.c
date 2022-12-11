#include <stdio.h>

/**
 * main - entry point
 * prints the size of various types
 *
 * Returns: always return 0
*/
int main (void)
{
	char charSize;
	int intSize;
	long int long_Int_Size;
	long long int long_Long_Int_Size;
	float floatSize;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charSize));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intSize));
	printf("Size of a long  int: %lu byte(s)\n", (unsigned long)sizeof(long_Int_Size));
	printf("Size of an long long int: %lu byte(s)\n", (unsigned long)sizeof(long_Long_Int_Size));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatSize));
	return (0);
}
