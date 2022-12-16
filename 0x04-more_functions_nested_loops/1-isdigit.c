#inlcude "main.h"

/**
 * _isdigit - verify if character is a digit 
 * @c: charater to be verified
 * Return: return 1 or 0
*/
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
