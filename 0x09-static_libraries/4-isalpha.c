#include "main.h"

/**
 * _isalpha - controls if a character is alphabetical
 * @c: the character to check
 * Return: return 0 or 1
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
