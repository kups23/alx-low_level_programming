#include "main.h"

/** 
 * _strlen_recursion - size of string
 * @s: pointer to the string s
 * Return: Size of string or 0
*/
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
