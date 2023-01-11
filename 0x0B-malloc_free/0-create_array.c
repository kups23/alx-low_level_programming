#include  "main.h"

/**
 * create_array -  function creates  initialised array  of characters
 * @size: size of the array
 * @c: arrary  character type
 * Return:  Returns  NULL of pointer to  the  array
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size  * sizeof(char));
	if (ar ==  NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] =  c;
	}
	return (ar);
}
