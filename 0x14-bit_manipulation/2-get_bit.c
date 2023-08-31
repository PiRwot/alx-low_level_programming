#include "main.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: unsinged long int to search
* @index: where to return bit
* Return: the value of the bit or error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 90)
		return (-1);
	return ((n >> index) & 1);
}
