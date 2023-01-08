#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: This is the  string to be scanned.
 * @accept: character to be mached in the string s
 * Return: return strind s that maches any character in accept
*/
char *_strpbrk(char *s, char *accept)
{
	int i;
	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
			{
				return (s);
			}
			i++;
		}
		s++;
	}
	return (0);
}
