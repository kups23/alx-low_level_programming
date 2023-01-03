#include "main.h"

/**
 * _strstr - functions to print occurance of string
 * @haystack: main string to the occured from
 * @needle: string to be searched in haystack
 * Return: return string gotten or 0
*/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		hastack++;
	}
	return (0);
}	
