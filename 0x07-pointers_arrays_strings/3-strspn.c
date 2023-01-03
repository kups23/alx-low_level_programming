#include "main.h"

/** 
 * _strspn - Locates a character in a string
 * @s: String where substring will look.
 * @accept: This is the string containing the list of characters to match in s
 * Return: returns count
*/
unsigned int _strspn(char *s, char *accept)
{
	int i,j,count;
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
		{
			break;
		}
		i++;
	}
	return (count);
}
