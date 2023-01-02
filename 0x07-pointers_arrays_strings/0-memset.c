#include "main.h"

/**
 * _memset - functions fills with constant byte
 * @s: pointe to char
 * @b: constant byte
 * @n: variable of type int
 * Return: returns pointer s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
