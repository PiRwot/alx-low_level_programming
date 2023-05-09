#include "main.h"

/**
* flip_bits - count bits you need to flip to get from one number to another
* @n: first number
* @m: second number
* Return: number of flips to get from one number to the other
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int difference;

	/* Xor both nums to show bit 1 if different bits */
	difference = n ^ m;

	/* keep shifting difference to right and tallying the ones up */
	do {
		diff_bits += (difference & 1);
		difference >>= 1;
	} while
		(difference > 0);

	return (diff_bits);

}
