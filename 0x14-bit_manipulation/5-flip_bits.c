#include "main.h"

/**
* flip_bits - count bits you need to flip to get from one number to another
* @n: first number
* @m: second number
* Return: number of flips to get from one number to the other
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0, checker;
	
	checker = (n ^ m);
	while (checker)
	{
		counter += (checker & 1);
		checker >>= 1;
	}
	return (counter);
}
