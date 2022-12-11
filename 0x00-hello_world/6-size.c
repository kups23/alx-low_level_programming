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
	printf("Size of a char: %d byte(s)\n", sizeof(charSize));
	printf("Size of an int: %d byte(s)\n", sizeof(intSize));
	printf("Size of a long  int: %d byte(s)\n", sizeof(long_Int_Size));
	printf("Size of an long long int: %d byte(s)\n", sizeof(long_Long_Int_Size));
	printf("Size of a float: %d byte(s)\n", sizeof(floatSize));
	return (0);
}
