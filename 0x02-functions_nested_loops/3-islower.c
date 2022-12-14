#include "main.h"

/**
 * _islower - checks if there is lowercase character
 * @c: character to check
 * return: returns 0 or  1
*/
int _islower(int c)
{ 
	if (c >= 'a' ; && c <= 'z')
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}

