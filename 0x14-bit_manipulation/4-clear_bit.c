#include "main.h"

/*
* clear_bit - sets the value of a bit to 0 at a given index
* @n: unsigned long to change
* @index - index to change to zero
* Return: 1 if it worked or -1 if an error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int place = 1;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	place = ~(place << index);
	*n = (*n & place);

	return (1);
}
