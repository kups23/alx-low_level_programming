#include "main.h"

/**
 * _isupper  - checks for uppercase letter
 * @c: character to be check
 * Return: always return 1 or 0
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
		
	return (0);
	
}
