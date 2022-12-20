#include "main.h"

/** wap_int - swaping values
 * @a: first value 
 * @b: second value
 * Return: returns nothing
*/
void swap_int(int *a, int *b)
{
	int swap  = *a;
	*a = *b;
	*b =  swap;
}
