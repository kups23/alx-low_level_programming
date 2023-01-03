#include "main.h"

/**
 * _strchr - function locates character
 * @s: string to locate character from
 * @c: character to be located
 * Return: return 
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
