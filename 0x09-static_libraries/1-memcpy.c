#include "main.h"

/**
 * _memcpy - function copies memory from src to dest
 * @src: pointer to char
 * @dest: pointer to char
 * @n: byte size
 * Return: Always returns dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned i;
	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
