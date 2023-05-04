#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: unsigned long int to search
* @index: index to return but
* Return: the value of the bit or -1 if error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
