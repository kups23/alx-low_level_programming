#include "main.h"

/**
 * *_strncpy - C function that copies a string
 * it include the null byte, using at most an inputted number of bytes.
 * @src:the source string
 * @dest: buffer storing the string copy
 * @n:max nummber of byte copied
 *
 * Return: returns dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
