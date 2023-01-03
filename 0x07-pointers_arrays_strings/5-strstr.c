#include "main.h"

/**
 * _strstr - functions to print occurance of string
 * @haystack: main string to the occured from
 * @needle: string to be searched in haystack
 * Return: return string gotten or 0
*/
char *_strstr(char *haystack, char *needle)
{
	char *result = haystack, *str = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = str;
		result++;
		haystack = result;
	}
	return (0);
}	
