#include "main.h"

/**
* binary_to_unit - convert binary to unsigned int
* @b: binary
* Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, convert;
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len]; len ++)
		;
	len--;
	for (convert = 1, uint = 0; len >= 0; len--)
	{
		if (b[len] == '0')
		{
			convert *= 2;
			continue;
		}
		else if (b[len] == '1')
		{
			uint += convert;
			convert *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
