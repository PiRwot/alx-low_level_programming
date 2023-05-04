#include "main.h"

/**
* print_binary - prints the binary representation of a nunber
* @n: unsigned long, number to be printed in binary
*/

void print_binary(unsigned long int n)
{
	unsigned long int n_bin = n, place = 1;
	int len = 0;

	while (n_bin > 0)
	{
		len++;
		n_bin >>= 1;
	}
	len -= 1;

	if (len > 0)
		place = place << len;

	while (place > 0)
	{
		if (n & place)
			_putchar('1');
		else
			_putchar('0');

		place >>= 1;
	}
}



// Another Method - Shorter //
/* void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
*/
