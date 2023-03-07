#include "main.h"

/**
 *_memset - fills memory with a constant byte
 *@s: char
 *@b: char
 *@n: integer
 *Return: return a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	int size = n; /* only accept positive sizes */

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
